#include <stdio.h>

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
  char Buf[256];
  
  Command = Command;
  
  MoreDataToArrive = RtosGetTraceInfo(FirstCallInstance, Buf, sizeof(Buf));
  printf(Buf);

  return MoreDataToArrive ;
  }

/*************************************************************************************
  Function    : InstallDebugAction()
  Description : helper function to add debug  traces to list say to display in HMI 
*************************************************************************************/
void InstallDebugAction(void)
  {
  
  }
