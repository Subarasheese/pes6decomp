/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/s5a_c.c (func_003F89D8). See THIRD_PARTY.md. */
#include "types.h"
s32 func_001591D0(u8 *p, s32 x, s16 *o2, s8 *a3, s8 *t0, s8 *t1, s8 *t2, s32 *t3, s32 *t6, s32 *t5,
                  s16 *a1) {
    *o2 = p[7] << 4;
    *t2 = (p[9] & 3) + 1;
    *t3 = *((u16 *)(p + 0x2A));
    switch (p[8]) {
    case 0:
        *t0 = 0x10;
        {
            s32 v = *t2;
            *t1 = v << 1;
        }
        *t5 = 1;
        *a1 = 0;
        *t6 = (*((s32 *)(p + 0xC))) / 2;
        break;

    case 1:
        *t0 = 8;
        {
            s32 v = *t2;
            *t1 = v;
        }
        *t5 = 1;
        *a1 = 1;
        *t6 = *((s32 *)(p + 0xC));
        break;

    case 2:

    case 3:
        *t0 = 4;
        {
            s32 v = *t2;
            *t1 = v;
        }
        *t5 = 2;
        *a1 = 2;
        *t6 = (*((s32 *)(p + 0xC))) << 1;
        break;
    }

    *t1 = 2;
    *t5 = 1;
    *t6 = (*((s32 *)(p + 0xC))) / 2;
    *t0 = 0x10;
    *a3 = -1;
    return 0;
}
