/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_errs.c). */
typedef unsigned int size_t;
typedef int s32;
typedef s32 strlen_t;
typedef char Sint8;
typedef signed int Sint32;
void SVM_SetCbBdr(Sint32 arg0, void (*arg1)(), Sint32 arg2);
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
void* memset(void* s, int c, size_t n);
size_t func_001C80F0(const char* s);
void D_0015B468(void (*arg0)(void*, Sint8*), void* arg1);
void D_0015B4D8(Sint8* arg0, Sint8* arg1);
#pragma divbyzerocheck
void func_0015B540(Sint32 value, Sint8* str, strlen_t base);
void ADXERR_ItoA2(Sint32 arg0, Sint32 arg1, Sint8* str, Sint32 base) {
    func_0015B540(arg0, str, base);
    func_001C8228(str, " ", base - func_001C80F0(str) - 1);
    func_0015B540(arg1, &str[func_001C80F0(str)], 4 - func_001C80F0(str));
}