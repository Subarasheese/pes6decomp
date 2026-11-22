/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (adxm_create_usridle_thrd). See THIRD_PARTY.md. */

struct ThreadParam {
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
};
extern int func_00105160(struct ThreadParam *param);
extern int func_001064A0(int thread, void *arg);
extern int func_001051F0(int thread, int priority);
extern char _gp[];
typedef struct AdxmThreadPrmEx {
    int lockPrio;
    int safePrio;
    int usrVsyncPrio;
    int vsyncPrio;
    int fsPrio;
    int mainPrio;
    int mwIdlePrio;
    int usrIdlePrio;
    void *usrVsyncStack;
    int usrVsyncStackSize;
    void *usrIdleStack;
    int usrIdleStackSize;
} AdxmThreadPrmEx;
extern void func_001610B0(const char *format, ...);
extern AdxmThreadPrmEx D_0037B940;
extern volatile int D_0037B9DC;
extern volatile int D_0037B9E0;
extern char D_00381260[];
extern int D_00383268;
extern char D_003C8720[];
extern void D_0015F870(void *arg);
extern int func_0015FA68(int threadId);

void func_0015FDD0(void *stack, int stackSize) {
    struct ThreadParam param;
    param.entry = D_0015F870;
    if (stack == 0) {
        param.stack = D_00381260;
        param.stackSize = 8192;
    } else {
        param.stack = stack;
        param.stackSize = stackSize;
        func_001610B0(D_003C8720, stack, stackSize);
    }
    param.initPriority = D_00383268;
    param.gpReg = _gp;
    D_0037B9E0 = func_00105160(&param);
    D_0037B9E0;
    func_001064A0(D_0037B9E0, 0);
    func_001051F0(D_0037B9E0, D_0037B940.usrIdlePrio);
    func_0015FA68(D_0037B9E0);
    D_0037B9DC;
}
