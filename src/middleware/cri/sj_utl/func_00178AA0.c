/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/u3_i.c (func_00410720). See THIRD_PARTY.md. */
#include "types.h"
extern s32 func_001C83D8(u8 *, void *, s32);
extern s32 func_00178958(u8 *);
extern void func_00178A68(u8 *, void *);

u8 *func_00178AA0(s32 *r, void *a, void *b, s32 *out) {
    u8 *p;
    u8 *end;
    out[0] = 0;
    out[1] = 0;
    end = (u8 *)r[0] + r[1];
    p = (u8 *)r[0];
    while (p < end) {
        if (func_001C83D8(p, a, 7) == 0) {
            func_00178A68(p, out);
            break;
        }
        if (b != 0 && func_001C83D8(p, b, 7) == 0)
            return 0;
        p += func_00178958(p + 8) + 0x10;
    }
    return p < end ? p : 0;
}
