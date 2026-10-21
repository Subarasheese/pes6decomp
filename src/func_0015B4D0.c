/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_errs.c). */
typedef int s32;
typedef s32 strlen_t;
typedef char Sint8;
typedef signed int Sint32;
typedef char Char8;
void func_001796E0(const Char8* format, ...);
void SVM_SetCbBdr(Sint32 arg0, void (*arg1)(), Sint32 arg2);
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
extern void (*D_00378088)(void*, Sint8*);
extern void* D_0037808C;
extern char D_00378090[0x100];
void ADXERR_EntryErrFunc(void (*arg0)(void*, Sint8*), void* arg1);
void func_0015B4D0(Sint8* arg0, Sint8* arg1) {
    strncpy(D_00378090, arg0, 0x100 - 1);
    func_001C8228(D_00378090, arg1, 0x100 - 1);
    if (D_00378088 != 0) {
        D_00378088(D_0037808C, D_00378090);
    }
    func_001796E0(D_00378090);
}
#pragma divbyzerocheck
void ADXERR_ItoA(Sint32 value, Sint8* str, strlen_t base);
void ADXERR_ItoA2(Sint32 arg0, Sint32 arg1, Sint8* str, Sint32 base);