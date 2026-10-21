/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef unsigned int u_int;
typedef signed int Sint32;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
struct ThreadParam {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int attr;
    u_int option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int func_00105160(struct ThreadParam*);
int func_001064A0(int, void* arg);
int func_001051F0(int, int);
extern Sint32 D_0037B940[12];
extern Sint32 volatile D_0037B9D4;
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
extern Sint32 D_0037E260[0x400];
extern Sint32 D_00383268;
extern void* _gp;
void func_0015F648();
void func_0015FCB0() {
    struct ThreadParam param;
    param.entry = func_0015F648;
    param.stack = D_0037E260;
    param.stackSize = sizeof(D_0037E260);
    param.initPriority = D_00383268;
    param.gpReg = &_gp;
    D_0037B9D4 = func_00105160(&param);
    D_0037B9D4;
    func_001064A0(D_0037B9D4, 0);
    func_001051F0(D_0037B9D4, D_0037B940[4]);
}