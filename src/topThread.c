/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/thread.c). */
/*
 * Unit: sdk/sce/thread
 *
 * Functions:
 *   0x00279a28 topThread
 *   0x00279b00 InitThread
 *   0x00279bd8 iWakeupThread
 *   0x00279c70 iRotateThreadReadyQueue
 *   0x00279cf0 iSuspendThread
 */

typedef struct ThreadParam {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    unsigned int attr;
    unsigned int option;
    int waitType;
    int waitId;
    int wakeupCount;
} ThreadParam;

typedef struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
} SemaParam;

typedef struct TopRequest {
    unsigned char mode;
    unsigned char data;
} TopRequest;

typedef struct TopArg {
    int readPos;
    int writePos;
    TopRequest request[0x200];
} TopArg;

enum {
    TOP_WAKEUP,
    TOP_ROTATE,
    TOP_SUSPEND
};

extern int D_00613368[];
extern int D_003EB8E0[];
extern char D_00702A70[];
extern TopArg D_00702E78;
extern char _gp[];

#define topId    D_00613368[0]
#define topSema  D_003EB8E0[0]
#define topStack D_00702A70
#define topArg   D_00702E78

extern int CreateThread(ThreadParam *param);
extern int StartThread(int tid, void *arg);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int priority);
extern int RotateThreadReadyQueue(int priority);
extern int WakeupThread(int tid);
extern int SuspendThread(int tid);
extern int CreateSema(SemaParam *param);
extern int DeleteSema(int sema);
extern int WaitSema(int sema);
extern int iSignalSema(int sema);
extern int kprintf(const char *fmt, ...);


static void topThread(void *arg)
{
    TopArg *top = arg;
    int pos;

    while (1) {
        WaitSema(topSema);
        pos = top->readPos & 0x1FF;
        top->readPos = pos + 1;
        switch (top->request[pos].mode) {
        case TOP_WAKEUP:
            WakeupThread(top->request[pos].data);
            break;
        case TOP_ROTATE:
            RotateThreadReadyQueue(top->request[pos].data);
            break;
        case TOP_SUSPEND:
            SuspendThread(top->request[pos].data);
            break;
        default:
            kprintf("## internel error in libkernl.a!\n");
            break;
        }
    }
}
int InitThread(void);
int iRotateThreadReadyQueue(int priority);
