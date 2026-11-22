/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/s5.c (func_003F9948). See THIRD_PARTY.md. */
#include "types.h"
extern char D_003C7CB8[];
extern s32 func_001C4698(void *, void *, s32);

s32 func_0015A0A8(u8 *p, s32 len, short *out) {
    s32 n;
    s32 end;
    s32 off;
    if (len < 0x10)
        return 0;
    if ((p[1] | (p[0] << 8)) != 0x8000)
        return 0;
    n = (p[2] << 8) | p[3];
    end = n + 4;
    off = n - 2;
    if (len <= 0x7FFF)
        return 0;
    if (func_001C4698(p + off, D_003C7CB8, 6) != 0)
        return 0;
    if (out)
        *out = end;
    return 1;
}
