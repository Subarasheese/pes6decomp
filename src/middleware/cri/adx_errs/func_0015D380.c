/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/sdk_adx_read_003fcee0.c (func_003FCEE0). See THIRD_PARTY.md. */
#include "types.h"
/* Validate the native ADX read request and forward it to the existing reader. */
typedef struct A {
    u8 p0[4];
    s32 w4;
    u8 p8[4];
    s32 wC;
    u8 p10[4];
    s32 w14;
    s32 w18, w1C, w20;
    u8 p24[8];
    s32 w2C, w30;
} A;
extern char D_003C8060[], D_003C8088[], D_003C80B8[];
extern void func_0015B478(void *);
extern s32 func_0015D228(A *, s32, s32);
s32 func_0015D380(void *object, s32 n, s32 x) {
    A *p = (A *)object;
    if (!p) {
        func_0015B478(D_003C8060);
        return -3;
    }
    if (n < 0) {
        func_0015B478(D_003C8088);
        return -3;
    }
    if (!x) {
        func_0015B478(D_003C80B8);
        return -3;
    }
    {
        s32 result = 0;
        if (((s8 *)p)[1] == 2)
            return result;
        result = func_0015D228(p, n, x);
        ((u8 *)p)[2] = 1;
        return result;
    }
}
