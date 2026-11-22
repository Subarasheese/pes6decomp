/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (adxm_goto_svr_border). See THIRD_PARTY.md. */

extern int func_001051F0(int thread, int priority);
extern void func_00179788(const char *msg);
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
extern AdxmThreadPrmEx D_0037B940;
extern volatile int D_0037B974;
extern char D_003C86B0[];
extern void func_0015F998(int threadId);
extern int func_0015FA00(int threadId);
void func_0015F300(int threadId, int priority) {
    int i;
    if (threadId == 0) {
        return;
    }
    D_0037B974 = 1;
    func_001051F0(threadId, D_0037B940.lockPrio);
    for (i = 0;; i++) {
        func_0015F998(threadId);
        func_0015FA00(threadId);
        if (D_0037B974 == 0) {
            break;
        }
        if (i > 199999999) {
            func_00179788(D_003C86B0);
            break;
        }
    }

    func_001051F0(threadId, priority);
}
