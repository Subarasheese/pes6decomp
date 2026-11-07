/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef signed int Sint32;
typedef signed long Sint64;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
int func_001051F0(int, int);
int WakeupThread(int);
int func_0015FA00(int);
extern Sint32 volatile D_0037B9C8;
extern Sint64 volatile D_0037B9E8;
extern Sint64 volatile D_0037B9F0;
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
void func_001605C0();
void func_001605C0() {
    while (D_0037B9F0 == 0) {
        D_0037B9E8 = 1;
        func_001051F0(D_0037B9C8, 1);
        WakeupThread(D_0037B9C8);
        func_0015FA00(D_0037B9C8);
    }
    D_0037B9F0 = 0;
    D_0037B9E8 = 0;
    D_0037B9C8 = 0;
}