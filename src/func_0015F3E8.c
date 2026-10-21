/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef signed int Sint32;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
extern Sint32 D_0037B940[12];
extern Sint32 volatile D_0037B9DC;
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
void func_0015F300(Sint32 tid, Sint32 priority);
void func_0015F3E8() {
    func_0015F300(D_0037B9DC, D_0037B940[6]);
}