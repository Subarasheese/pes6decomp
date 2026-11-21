/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_mps2.c (adxm_SetupMwIdleThrd).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned int u_int;
typedef signed int Sint32;
struct ThreadParam {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    u_int attr;
    u_int option;
    int waitType;
    int waitId;
    int wakeupCount;
};
extern int func_00105160(struct ThreadParam *);
extern int func_001064A0(int, void *arg);
extern int func_001051F0(int, int);
extern Sint32 D_0037B940[12];
extern volatile Sint32 D_0037B9DC;
extern Sint32 D_0037F260[0x800];
extern Sint32 D_00383268;
extern void *_gp;
extern void func_0015F738(void *);
extern Sint32 func_0015FA68(Sint32 tid);

void func_0015FD38(void) {
    struct ThreadParam param;
    param.entry = func_0015F738;
    param.stack = D_0037F260;
    param.stackSize = sizeof(D_0037F260);
    param.initPriority = D_00383268;
    param.gpReg = &_gp;
    D_0037B9DC = func_00105160(&param);
    D_0037B9DC;
    func_001064A0(D_0037B9DC, 0);
    func_001051F0(D_0037B9DC, D_0037B940[6]);
    func_0015FA68(D_0037B9DC);
    D_0037B9DC;
}
