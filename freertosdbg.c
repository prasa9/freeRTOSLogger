#include <stdio.h>

#define MAX_NUMBER_OF_TASKS     10

/* Module Statics */
static char DisplayTaskCmd[] = "FREERTOS_INFO";
static char DisplayTaskInformation[]    = "FREERTOS_INFO : Display freertos task information";

static char TraceStartCmd[] = "FREERTOS_START_TRACE";
static char TraceStartInformation[]    = "FREERTOS_START_TRACE : Start tracing the freertos kernel";

static char TraceDumpCmd[] = "FREERTOS_TRACE_DUMP";
static char TraceDumpInformation[]    = "FREERTOS_TRACE_DUMP : Dump the freertos kernel trace";

static xTaskStatusType TaskDbg[MAX_NR_OF_FREERTOS_TASKS];

/*task state machine */
static const char* TaskState[] = {"RUNNING  ",
                              "READY    ",
                              "BLOCKED  ",
                              "SUSPENDED",
                              "DELETED  "};


/*******************************************************************************
  Function    : DumpRtosTaskList()
  Description : dump the task statistiscs 
*******************************************************************************/
static BOOL DumpfreertosTaskList(BOOL FirstInstance, const char* Command)
  {
  float   TotalRunningTime_sec;
  uint32 TotalRunningTicks_us;
  int     NrOfTasks;
  
  float   tick_us;   // free rtos tick in us
  float   time_s;  // time in secs

  FirstInstance = FirstInstance;
  Cmd   = Cmd;
  
  NrOfTasks = uxTaskGetNumberOfTasks();
  if (NrOfTasks > MAX_NR_OF_TASKS)
    {
    printf("\r\n Display only the first %d tasks out of %d", 
           MAX_NR_OF_TASKS,
           NrOfTasks);
    }
  
  uxTaskGetSystemState(TaskDbg,
                       MAX_NR_OF_TASKS,
                       (uint32_t*)&TotalRunningTicks_us);

  tick_us = (float)GetfreeRtosClockTick_us() / 1000000.0;
  
  // For %age calculations
  TotalRunningTime_sec = (float)TotalRuninngTicks_us * tick_us;
  
  printf("\r\n #   Name                            State      Priority  BasePriority  RunningTime(s)  Percent  StackFreelimit");
  int i ;
  for (i = 0; i < NrOfTasks; i++)
    {
    TimeInSeconds = (float)TaskDbg[i].ulRunTimeCounter * tick_us;
    
    printf("\r\n%3u  %-30s  %s  %8u  %12u  %10.2f  %10.2f  %9u",
           (unsigned)TaskDbg[i].xTaskNumber,
           TaskDbg[i].pcTaskName,
           State[TaskDbg[i].eCurrentState],
           (unsigned)TaskDbg[i].uxCurrentPriority,
           (unsigned)TaskDbg[i].uxBasePriority,
           time_s,
           (time_s /  TotalRunningTime_sec) * 100.0,
           TaskDbg[i].usStackHighWaterMark * sizeof(uint32)); // represent in bytes
    }

  return TRUE;
  }
/*******************************************************************************
  Function    : StartTracingTasks()
  Description : API for kicking off task tracing 
*******************************************************************************/
static BOOL StartTracingTasks(BOOL FirstCallInstance, const char* Cmd)
  {
  FirstCallInstance = FirstCallInstance;
  Cmd   = Cmd;
  
  StartTaskTracing();

  return TRUE;
  }

/*******************************************************************************
  Function    : StartTracingTasks()
  Description : dump traces of Task
*******************************************************************************/
static BOOL DumpTrace(BOOL FirstCallInstance, const char* Cmd)
  {
  BOOL MoreDataToArrive;
  char TraceBuff[256];
  
  Command = Command;
  
  MoreDataToArrive = RtosGetTraceInfo(FirstCallInstance, TraceBuff, sizeof(TraceBuff));
  printf(TraceBuff);

  return MoreDataToArrive ;
  }

/*************************************************************************************
  Function    : InstallDebugAction()
  Description : helper function to add debug  traces to list say to display in HMI 
*************************************************************************************/
void InstallDebugAction(void)
  {
  /*  install functions to display trace information for example see below */
  /* in second argument of helper functions below called, invoke hooks by function pointers */

  AddCommandToDebugList(DisplayTaskCmd,
                                    DumpRtosTaskList,
                                    DisplayTaskInformation,
                                    FALSE);
                                    
  AddCommandToDebugList(TraceStartCmd,
                                    StartTracingTasks,
                                    TraceStartInformation,
                                    FALSE);

  AdCommandTdoDebugList(TraceDumpCmd,
                                    DumpTrace,
                                    TraceDumpInformation,
                                    FALSE);
  }
