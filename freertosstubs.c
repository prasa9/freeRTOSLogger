Provides stub functions for when freeRTOS kernel support for Application layer is not needed.

#include <stdlib.h>

/* Stubber macro function for trapping un used parameters of the freeRTOS stubs */
       
#define PARAM_UNUSED(x) {x=x;}

/*********************************************************
      free  RTOS CONIFGURATION, SETUP, & STATUS
**********************************************************/
void ConfigureSystemClockForFreeRTOS(uint32 Clock_Hz,
                                 uint32 TickPeriod_us)
  {
  PARAM_UNUSED(Clock_Hz);
  PARAM_UNUSED(TickPeriod_us);
  }  

void SetFreeRtosTickCallback(void (*Handler)(void))
  {
  PARAM_UNUSED(Handler);
  }  

void SetFreeRtosIdleCallback(void (*Handler)(void))
  {
  PARAM_UNUSED(Handler);
  }  

void SetFreeRtosStackOverflowCallback(void (*Handler)(void))
  {
  PARAM_UNUSED(Handler);
  }  

void SetFreeRtosHeapErrorCallback(void (*Handler)(void))
  {
  PARAM_UNUSED(Handler);
  }  

void SetHeapForFreeRtos(byte*   HeapAddr,
                    uint32 HeapSize)
  {
  PARAM_UNUSED(HeapAddr);
  PARAM_UNUSED(HeapSize);
  }  

/*********************************************************
       freeRTOS start up / shutdown mechanism
**********************************************************/
void StartKernel(void)
  {
         /* Do Nothing */
  }  

void ShutdownKernel(void)
  {
         /* Do Nothing */
  }

void freeRtosInstallInterrupts(void)
  {
         /* Do Nothing */
  }

BOOL freeRtosHasBeenStarted(void)
  {
  return FALSE;
  }  

void freeRtosEnterCritSection(void)
  {
         /* Do Nothing */
  }  

void freeRtosExitCritSection(void)
  {
         /* Do Nothing */
  }  

void freeRtosDisableTasks(void)
  {
         /* Do Nothing */
  }  

void freeRtosEnableTasks(void)
  {
         /* Do Nothing */
  }  

void RtosInstallDebugCommands(void)
  {
        /* Do Nothing */
  }
  
/*********************************************************
       freeRtosTasks.c
**********************************************************/
/*********************************************************
       FREE RTOS TASK SUPPORT
**********************************************************/
void* RtosCreateTask(void (*Task)(void*), 
                     const char* const TaskName, 
                     void*             TaskParam, 
                     uint32           PrioLevel, 
                     uint32           StackSize)
  {
  PARAM_UNUSED(Task);
  PARAM_UNUSED(TaskParameters);
  PARAM_UNUSED(PriorityLevel);
  PARAM_UNUSED(StackSize);
  return NULL;
  }  

uint32 freeRtosGetLastTimeTaskRun(void)
  {
  return 0;
  }  

void RtosTaskDelaySinceLastRun(uint32* LastWakeUpTime, 
                               uint32  Dly_us)
  {
  PARAM_UNUSED(LastWakeUpTime);
  PARAM_UNUSED(Dly_us);
  }  

void freeRtosTaskDelay(uint32 Dly_us)
  {
  PARAM_UNUSED(Dly_us);
  }  

void freeRtosTaskYield(void)
  {
         /* Do Nothing */
  }  

uint32 freeRtosGetTaskPriority(void* Handle)
  {
  PARAM_UNUSED(Handle);
  return 0;
  }  

void freeRtosSetTaskPriority(void*   Handle, 
                         uint32 NewPrio)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(NewPrio);
  }  

void RtosSuspendTask(void* Handle)
  {
  PARAM_UNUSED(Handle);
  }  

void freeRtosResumeTask(void* Handle,
                    BOOL  CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(CalledFromISR);
  }  

void* freeRtosGetCurrentHandle(void)
  {
  return NULL;
  }  

const char* freeRtosGetTaskName(void* Handle)
  {
  PARAM_UNUSED(Handle);
  return "NO RTOS INSTALLED";
  }  

tRtosTaskState freeRtosGetTaskState(void* Handle)
  {
  PARAM_UNUSED(Handle);
  return eRtosTaskRdy;
  }  

/*********************************************************
       free Rtos Sempahores management
**********************************************************/
void* RtosCreateBinarySemaphore(const char* Name)
  {
  return NULL;
  }  

void* freeRtosCreateCountingSemaphore(uint32 MaxCnt, const char* Name)
  {
  PARAM_UNUSED(MaxCnt);
  return NULL;
  }  

void freeRtosReleaseSemaphore(void* Handle, 
                          BOOL  CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(CalledFromInterruptRoutine);
  }  

BOOL freeRtosTakeSemaphore(void*   Handle, 
                       uint32 Blocked_us, 
                       BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(Blocked_us);
  PARAM_UNUSED(CalledFromISR);
  return TRUE;
  }  

void* freeRtosCreateMutex(const char* Name)
  {
  return NULL;
  }  

void freeRtosReleaseMutex(void* Handle, 
                      BOOL  CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(CalledFromISR);
  }  

BOOL freeRtosTakeMutex(void*   Handle, 
                   uint32 Blocked_us, 
                   BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return TRUE;
  }  

void* freeRtosCreateRecursiveMutex(const char* Name)
  {
  return NULL;
  }  

void freeRtosReleaseRecursiveMutex(void* Handle)
  {
  PARAM_UNUSED(Handle);
  }  

BOOL freeRtosTakeRecursiveMutex(void*   Handle, 
                            uint32 Blocked_us)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(Blocked_us);
  return TRUE;
  }  

/*********************************************************
       free Rtos message Queue management
**********************************************************/
/*********************************************************
       FreeRTOS QUEUESAPI
**********************************************************/
void* freeRtosCreateQueue(const char* Name, 
                      uint32     Length, 
                      uint32     ItemSize)
  {
  PARAM_UNUSED(Name);
  PARAM_UNUSED(Length);
  PARAM_UNUSED(ItemSize);
  return NULL;
  }  
                        
BOOL freeRtosQueueSend(void*   Handle, 
                   void*   Data, 
                   uint32 MaxWaitTime_us, 
                   BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(Data);
  PARAM_UNUSED(MaxWaitTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL freeRtosQueuePrioSendToHead(void*   Handle, 
                          void*   Data, 
                          uint32 MaxWaitTime_us, 
                          BOOL    CalledFromISR)
  {
  PARAM_UNUSED(QueueHandle);
  PARAM_UNUSED(Data);
  PARAM_UNUSED(MaxWaitTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL freeRtosQueueRead(void*   Handle, 
                   void*   Data, 
                   uint32 MaxWaitTime_us, 
                   BOOL    CalledFromInterruptRoutine)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(Data);
  PARAM_UNUSED(MaxWaitTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL freeRtosPeekQueue(void*   Handle, 
                   void*   Data, 
                   uint32 MaxWaitTime_us, 
                   BOOL CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(Data);
  PARAM_UNUSED(MaxWaitTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL freeRtosQueueFullCheck(void* Handle, 
                     BOOL  CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(CalledFromISR);
  return TRUE;
  }  

BOOL freeRtosQueueIsEmpty(void* Handle,
                      BOOL  CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

uint32 freeRtosCountNumberOfQueueMsg(void* Handle, 
                                    BOOL  CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(CalledFromISR);
  return 0;
  }  


/*********************************************************
       freeRtosTimers API
**********************************************************/
/*********************************************************
       freeRTOS TIMERS management
**********************************************************/
void* freeRtosCreateTimer(const char* Name, 
                      uint32     Period_us, 
                      BOOL        Reload, // autoreload
                      void        (*TimerHook)(void* Name))
  {
  PARAM_UNUSED(Name);
  PARAM_UNUSED(Period_us);
  PARAM_UNUSED(Reload);
  PARAM_UNUSED(TimerHook);
  return NULL;
  }  

BOOL freeRtosStartTimer(void*   Handle,
                    uint32 BlockTime_us,
                    BOOL    CalledFromInterruptRoutine)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL freeRtosStopTimer(void*   Handle,
                   uint32 BlockTime_us,
                   BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL freeRtosChangeTimerPeriod(void*   Handle, 
                           uint32 NewPeriod_us,
                           uint32 BlockTime_us,
                           BOOL    CalledFromInterruptRoutine)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(NewPeriod_us);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL freeRtosTimerReset(void*   Handle,
                    uint32 BlockTime_us,
                    BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL freeRtosTimerIsRunning(void* Handle)
  {
  PARAM_UNUSED(Handle);
  return FALSE;
  }  

const char* freeRtosGetTimerName(void* Handle)
  {
  PARAM_UNUSED(Handle);
  return "FREE RTOS IS  NOT started up yet ";
  }  



