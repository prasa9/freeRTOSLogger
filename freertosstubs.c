Provides stub functions for when an RTOS is not being used. 

#include <stdlib.h>

// Stubber macro function for trapping un used parameters of the freeRTOS stubs
#define PARAM_UNUSED(x) {x=x;}

/*********************************************************
       RTOS CONIFGURATION, SETUP, & STATUS
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
       RTOS CONTROL AND SUPPORT
**********************************************************/
void StartRtos(void)
  {
  }  

void TerminateRtos(void)
  {
  }

void RtosInstallInterrupts(void)
  {
  }

BOOL RtosHasBeenStarted(void)
  {
  return FALSE;
  }  

void RtosEnterCriticalSection(void)
  {
  }  

void RtosExitCriticalSection(void)
  {
  }  

void RtosDisableTasks(void)
  {
  }  

void RtosEnableTasks(void)
  {
  }  

void RtosInstallDebugCommands(void)
  {
  }
  
/*********************************************************
       RtosTasks.c
**********************************************************/
/*********************************************************
       RTOS TASK SUPPORT
**********************************************************/
void* RtosCreateTask(void (*Task)(void*), 
                     const char* const TaskName, 
                     void*             TaskParameters, 
                     uint32           PriorityLevel, 
                     uint32           StackSize)
  {
  PARAM_UNUSED(Task);
  PARAM_UNUSED(TaskParameters);
  PARAM_UNUSED(PriorityLevel);
  PARAM_UNUSED(StackSize);
  return NULL;
  }  

UWORD32 RtosGetLastTimeTaskRun(void)
  {
  return 0;
  }  

void RtosTaskDelaySinceLastRun(uint32* LastWakeTime, 
                               uint32  Delay_us)
  {
  PARAM_UNUSED(LastWakeTime);
  PARAM_UNUSED(Delay_us);
  }  

void RtosTaskDelay(uint32 Delay_us)
  {
  PARAM_UNUSED(Delay_us);
  }  

void RtosTaskYield(void)
  {
  }  

UWORD32 RtosGetTaskPriority(void* TaskHandle)
  {
  PARAM_UNUSED(TaskHandle);
  return 0;
  }  

void RtosSetTaskPriority(void*   TaskHandle, 
                         uint32 NewPriority)
  {
  PARAM_UNUSED(TaskHandle);
  PARAM_UNUSED(NewPriority);
  }  

void RtosSuspendTask(void* TaskHandle)
  {
  PARAM_UNUSED(TaskHandle);
  }  

void RtosResumeTask(void* TaskHandle,
                    BOOL  CalledFromISR)
  {
  PARAM_UNUSED(TaskHandle);
  PARAM_UNUSED(CalledFromISR);
  }  

void* RtosGetCurrentTaskHandle(void)
  {
  return NULL;
  }  

const char* RtosGetTaskName(void* TaskHandle)
  {
  PARAM_UNUSED(TaskHandle);
  return "NO RTOS INSTALLED";
  }  

tRtosTaskState RtosGetTaskState(void* TaskHandle)
  {
  PARAM_UNUSED(TaskHandle);
  return eRtosTaskReady;
  }  

/*********************************************************
       RtosSempahores.c
**********************************************************/
void* RtosCreateBinarySemaphore(const char* Name)
  {
  return NULL;
  }  

void* RtosCreateCountingSemaphore(uint32 MaxCount, const char* Name)
  {
  PARAM_UNUSED(MaxCount);
  return NULL;
  }  

void RtosReleaseSemaphore(void* Handle, 
                          BOOL  CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(CalledFromInterruptRoutine);
  }  

BOOL RtosTakeSemaphore(void*   Handle, 
                       uint32 BlockTime_us, 
                       BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return TRUE;
  }  

void* RtosCreateMutex(const char* Name)
  {
  return NULL;
  }  

void RtosReleaseMutex(void* Handle, 
                      BOOL  CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(CalledFromISR);
  }  

BOOL RtosTakeMutex(void*   Handle, 
                   uint32 BlockTime_us, 
                   BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return TRUE;
  }  

void* RtosCreateRecursiveMutex(const char* Name)
  {
  return NULL;
  }  

void RtosReleaseRecursiveMutex(void* Handle)
  {
  PARAM_UNUSED(Handle);
  }  

BOOL RtosTakeRecursiveMutex(void*   Handle, 
                            uint32 BlockTime_us)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  return TRUE;
  }  

/*********************************************************
       RtosQueue.c
**********************************************************/
/*********************************************************
       RTOS QUEUES
**********************************************************/
void* RtosCreateQueue(const char* Name, 
                      uint32     QueueLength, 
                      uint32     ItemSize)
  {
  PARAM_UNUSED(Name);
  PARAM_UNUSED(QueueLength);
  PARAM_UNUSED(ItemSize);
  return NULL;
  }  
                        
BOOL RtosQueueSend(void*   QueueHandle, 
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

BOOL RtosQueueSendToFront(void*   QueueHandle, 
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

BOOL RtosQueueRead(void*   QueueHandle, 
                   void*   Data, 
                   uint32 MaxWaitTime_us, 
                   BOOL    CalledFromInterruptRoutine)
  {
  PARAM_UNUSED(QueueHandle);
  PARAM_UNUSED(Data);
  PARAM_UNUSED(MaxWaitTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL RtosQueuePeek(void*   QueueHandle, 
                   void*   Data, 
                   uint32 MaxWaitTime_us, 
                   BOOL CalledFromISR)
  {
  PARAM_UNUSED(QueueHandle);
  PARAM_UNUSED(Data);
  PARAM_UNUSED(MaxWaitTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL RtosQueueIsFull(void* QueueHandle, 
                     BOOL  CalledFromISR)
  {
  PARAM_UNUSED(QueueHandle);
  PARAM_UNUSED(CalledFromISR);
  return TRUE;
  }  

BOOL RtosQueueIsEmpty(void* QueueHandle,
                      BOOL  CalledFromISR)
  {
  PARAM_UNUSED(QueueHandle);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

UWORD32 RtosNumberOfMessagesInQueue(void* QueueHandle, 
                                    BOOL  CalledFromISR)
  {
  PARAM_UNUSED(QueueHandle);
  PARAM_UNUSED(CalledFromISR);
  return 0;
  }  


/*********************************************************
       RtosTimers.c
**********************************************************/
/*********************************************************
       RTOS TIMERS
**********************************************************/
void* RtosCreateTimer(const char* Name, 
                      uint32     Period_us, 
                      BOOL        AutoReload, 
                      void        (*TimerCallback)(void* Name))
  {
  PARAM_UNUSED(Name);
  PARAM_UNUSED(Period_us);
  PARAM_UNUSED(AutoReload);
  PARAM_UNUSED(TimerCallback);
  return NULL;
  }  

BOOL RtosStartTimer(void*   Handle,
                    uint32 BlockTime_us,
                    BOOL    CalledFromInterruptRoutine)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL RtosStopTimer(void*   Handle,
                   uint32 BlockTime_us,
                   BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL RtosChangeTimerPeriod(void*   Handle, 
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

BOOL RtosTimerReset(void*   Handle,
                    UWORD32 BlockTime_us,
                    BOOL    CalledFromISR)
  {
  PARAM_UNUSED(Handle);
  PARAM_UNUSED(BlockTime_us);
  PARAM_UNUSED(CalledFromISR);
  return FALSE;
  }  

BOOL RtosTimerIsRunning(void* Handle)
  {
  PARAM_UNUSED(Handle);
  return FALSE;
  }  

const char* RtosGetTimerName(void* Handle)
  {
  PARAM_UNUSED(Handle);
  return "FREE RTOS IS  NOT INSTALLED YET";
  }  



