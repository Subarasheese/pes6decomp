/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef unsigned int u_int;
typedef signed int Sint32;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
void func_001608B0(void);
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
int func_00105260(int, struct ThreadParam*);
int WakeupThread(int);
extern Sint32 volatile D_0037B98C;
extern Sint32 volatile D_0037B9D8;
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
void func_001608B0() {
    struct ThreadParam param;
    if (D_0037B98C != 1) {
        return;
    }
    func_00105260(D_0037B9D8, &param);
    if ((param.status != 0x04) && (param.status != 0x0c)) {
        return;
    }
    if (WakeupThread(D_0037B9D8) != D_0037B9D8) {
        return;
    }
    D_0037B98C = 0;
}