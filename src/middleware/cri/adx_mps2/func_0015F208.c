/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef signed int Sint32;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
int func_001051F0(int, int);
int func_00105250(void);
extern Sint32 D_0037B940[12];
extern Sint32 D_0037B970;
extern Sint32 volatile D_0037B9C8;
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
extern Sint32 D_00383260;
extern Sint32 D_00383264;
Sint32 func_0015FA00(Sint32 tid);
void func_0015F208() {
    if (D_0037B970 == 0) {
        Sint32 tid = func_00105250();
        D_00383260 = func_001051F0(tid, D_0037B940[0]);
        D_00383264 = tid;
        func_0015FA00(D_0037B9C8);
        D_0037B9C8;
        D_0037B970 += 1;
        D_0037B970 -= 1;
    }
    D_0037B970 += 1;
}
void D_0015F618(Sint32 tid, Sint32 priority);
Sint32 func_0015FA00(Sint32 tid);