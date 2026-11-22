/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/k1b.c (func_004091A8). See THIRD_PARTY.md. */
#include "types.h"
extern s32 D_00385934;
extern char D_003CA458[];
extern s32 func_001C78F8(char *, char *, s32);
s32 func_0016E298(s32 a, char *buf, s32 n) {
    s32 i, r;
    for (i = 0; i < n; i++)
        buf[i] = 0xAA;
    r = func_001C78F8(buf, D_003CA458, D_00385934);
    D_00385934++;
    return r;
}
