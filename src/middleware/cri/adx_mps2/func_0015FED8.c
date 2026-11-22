/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (ADXM_SetupThrd). See THIRD_PARTY.md. */

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
extern int func_00105250(void);
extern int func_00105260(int thread, struct ThreadParam *status);
extern int func_001051F0(int thread, int priority);
typedef void (*SvmFunc)(void *obj);
extern void func_00179D90(int id, SvmFunc func, void *obj);
extern void func_00179E68(SvmFunc func, void *obj);
extern void func_00179E80(SvmFunc func, void *obj);
extern void func_0017A188(void);
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
typedef struct AdxmThreadPrm {
    int lockPrio;
    int safePrio;
    int vsyncPrio;
    int fsPrio;
    int mainPrio;
    int mwIdlePrio;
} AdxmThreadPrm;
typedef struct AdxmCallback {
    void (*func)(void *arg);
    void *arg;
} AdxmCallback;
extern int D_0037B934;
extern AdxmThreadPrmEx D_0037B940;
extern volatile int D_0037B98C;
extern volatile int D_0037B9D8;
extern int D_00383268;
extern AdxmCallback D_0050E310;
extern AdxmCallback D_0050E318;
extern char *volatile D_0037B930;
extern void D_0015F208(void *obj);
extern void D_0015F290(void *obj);
extern void D_0015F3E8(void *obj);
extern void func_0015FAC8(void);
extern void func_0015FC28(void);
extern void func_0015FCB0(void);
extern void func_0015FD38(void);

void func_0015FED8(AdxmThreadPrm *tprm) {
    struct ThreadParam param;
    D_0037B930;
    D_0037B98C = 0;
    if (D_0037B934 == 0) {
        func_0017A188();
        func_00179E68(D_0015F208, 0);
        func_00179E80(D_0015F290, 0);
        D_0050E310.func = 0;
        D_0050E310.arg = 0;
        D_0050E318.func = 0;
        D_0050E318.arg = 0;
        if (tprm == 0) {
            D_0037B940.mainPrio = 24;
            D_0037B940.lockPrio = 1;
            D_0037B940.safePrio = 8;
            D_0037B940.vsyncPrio = 16;
            D_0037B940.fsPrio = 18;
            D_0037B940.mwIdlePrio = 25;
        } else {
            D_0037B940.mainPrio = tprm->mainPrio;
            D_0037B940.lockPrio = tprm->lockPrio;
            D_0037B940.safePrio = tprm->safePrio;
            D_0037B940.vsyncPrio = tprm->vsyncPrio;
            D_0037B940.fsPrio = tprm->fsPrio;
            D_0037B940.mwIdlePrio = tprm->mwIdlePrio;
        }
        D_0037B9D8 = func_00105250();
        func_00105260(D_0037B9D8, &param);
        D_00383268 = param.currentPriority;
        func_0015FAC8();
        func_0015FC28();
        func_0015FCB0();
        func_0015FD38();
        func_001051F0(D_0037B9D8, D_0037B940.mainPrio);
        func_00179D90(6, D_0015F3E8, 0);
    }
    D_0037B934++;
}
