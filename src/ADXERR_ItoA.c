/* compiler: ee-gcc-2.96 */
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
extern Sint8 D_0050E2E0[32];
void ADXERR_EntryErrFunc(void (*arg0)(void*, Sint8*), void* arg1);
void ADXERR_CallErrFunc2(Sint8* arg0, Sint8* arg1);
#pragma divbyzerocheck
void ADXERR_ItoA(Sint32 value, Sint8* str, strlen_t base) {
    Sint32 i;
    strlen_t len;
    for (i = 0; i < 32; i++) {
        str[i] = value % 10;
        value /= 10;
        if (value == 0) {
            str[i] = '\0';
            break;
        }
    }
    len = func_001C80F0(D_0050E2E0);
    len = (len >= base - 1) ? base - 1 : len;
    for (i = 0; i < len; i++) {
        str[i] = D_0050E2E0[len - i - 1];
    }
    str[i] = '\0';
}
void ADXERR_ItoA2(Sint32 arg0, Sint32 arg1, Sint8* str, Sint32 base);