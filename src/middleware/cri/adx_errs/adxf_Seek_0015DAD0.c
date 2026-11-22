/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/hk9_d.c (func_003FD308). See THIRD_PARTY.md. */
#include "types.h"
extern u8 D_003C8278[];
extern u8 D_003C82A0[];
extern void func_0015B8B8(s32, s32, u8 *, s32, s32);
extern void func_0015B478(u8 *);
extern s32 func_0015D738(void *);

s32 adxf_Seek(u8 *p, s32 a, s32 b) {
    s32 v;
    s32 t;
    s32 v3;
    func_0015B8B8(6, 0, p, a, b);
    if (p == 0) {
        func_0015B478(D_003C8278);
        return -3;
    }
    v = *(s8 *)(p + 1);
    if (v == 2) {
        func_0015D738(p);
    }
    if (b == 0) {
        *(s32 *)(p + 0x14) = a;
    } else if (b == 1) {
        *(s32 *)(p + 0x14) = *(s32 *)(p + 0x14) + a;
    } else if (b == 2) {
        *(s32 *)(p + 0x14) = *(s32 *)(p + 0xC) + a;
    } else {
        func_0015B478(D_003C82A0);
        return -3;
    }
    t = *(s32 *)(p + 0x14);
    if (t < 0) {
        *(s32 *)(p + 0x14) = 0;
    } else {
        v3 = *(s32 *)(p + 0xC);
        if (v3 < t) {
            *(s32 *)(p + 0x14) = v3;
        }
    }
    func_0015B8B8(6, 1, p, a, b);
    return *(s32 *)(p + 0x14);
}
