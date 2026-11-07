/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef signed int Sint32;
typedef signed long Sint64;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
int func_001051F0(int, int);
int WakeupThread(int);
int func_0015FA00(int);
extern Sint32 volatile D_0037B9D0;
extern Sint64 volatile D_0037BA08;
extern Sint64 volatile D_0037BA10;
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
void func_001602F0();
void func_001602F0() {
    while (D_0037BA10 == 0) {
        D_0037BA08 = 1;
        func_001051F0(D_0037B9D0, 1);
        WakeupThread(D_0037B9D0);
        func_0015FA00(D_0037B9D0);
    }
    D_0037BA10 = 0;
    D_0037BA08 = 0;
    D_0037B9D0 = 0;
}