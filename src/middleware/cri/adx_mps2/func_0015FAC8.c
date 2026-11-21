/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_mps2.c (adxm_SetupSafeThrd).
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
extern volatile Sint32 D_0037B9C8;
extern Sint32 D_0037BA60[0x200];
extern Sint32 D_00383268;
extern void *_gp;
extern void func_0015F450(void *);
extern Sint32 func_0015FA68(Sint32 tid);

void func_0015FAC8(void) {
    struct ThreadParam param;
    param.entry = func_0015F450;
    param.stack = D_0037BA60;
    param.stackSize = sizeof(D_0037BA60);
    param.initPriority = D_00383268;
    param.gpReg = &_gp;
    D_0037B9C8 = func_00105160(&param);
    D_0037B9C8;
    func_001064A0(D_0037B9C8, 0);
    if (D_0037B9C8 != 0) {
        func_0015FA68(D_0037B9C8);
        D_0037B9C8;
    }
    func_001051F0(D_0037B9C8, D_0037B940[1]);
}
