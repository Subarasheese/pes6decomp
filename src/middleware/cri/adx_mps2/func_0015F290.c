/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef signed int Sint32;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
int func_001051F0(int, int);
int func_00105250(void);
extern Sint32 D_0037B970;
extern Sint32 volatile D_0037B9C8;
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
extern Sint32 D_00383260;
Sint32 func_0015FA68(Sint32 tid);
void func_0015F290() {
    if (--D_0037B970 == 0) {
        func_0015FA68(D_0037B9C8);
        D_0037B9C8;
        func_001051F0(func_00105250(), D_00383260);
    }
    if (D_0037B970 < 0) {
        D_0037B970 = 0;
    }
}
void D_0015F618(Sint32 tid, Sint32 priority);
Sint32 func_0015FA68(Sint32 tid);