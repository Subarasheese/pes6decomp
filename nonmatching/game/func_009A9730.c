/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0011F4F8(f32);
s32 func_0011C7D0(s32);
s32 func_0011FFE0(s32);
s32 func_009A99F0(char *, s32);
s32 func_009A9A90(char *, s32);
s32 func_009A9F50(f32 *, char *);
s32 func_009AB0E0(f32 *, f32 *, s32);

s32 func_009A9730(char *arg0, s32 arg1, s32 arg2, s64 arg3) {
    f32 a[4];
    f32 b[4];
    s32 (*fn)(char *, s32);
    s32 base;
    s32 idx;
    s32 i;
    s32 j;
    s32 *q;
    f32 *r;
    char *p;

    base = arg1 + 0x70;
    if ((s8)arg3 == 1) {
        fn = func_009A9A90;
    } else {
        fn = func_009A99F0;
    }
    if (func_009AB0E0(a, b, arg2) == 0) {
        return 0;
    }
    idx = func_0011FFE0(func_0011C7D0(func_0011F4F8((951.0f + a[2]) / 118.875f)));
    if (idx < 0 || idx >= 0x10) {
        return 0;
    }
    i = 0;
    j = (idx * 7) & 0xFFFF;
    do {
        *(s32 *)(arg0 + 0) = base + ((j + 7) << 5);
        *(s32 *)(arg0 + 4) = base + ((j + 8) << 5);
        *(s32 *)(arg0 + 8) = base + (j << 5);
        *(s32 *)(arg0 + 0xC) = base + ((j + 1) << 5);
        if (func_009A9F50(a, arg0) == 0) {
            i++;
        } else {
            if (fn(arg0, arg2) == 0) {
                return 0;
            }
            *(f32 *)(arg0 + 0x28) = 0.0f;
            goto done;
        }
        j++;
    } while (i < 6);
    return 0;
done:
    *(f32 *)(arg0 + 0x2C) = 0.0f;
    *(f32 *)(arg0 + 0x30) = 0.0f;
    p = *(char **)(arg0 + 0);
    *(f32 *)(arg0 + 0x28) = *(f32 *)(arg0 + 0x28) + *(f32 *)(p + 4);
    *(f32 *)(arg0 + 0x2C) = *(f32 *)(arg0 + 0x2C) + *(f32 *)(p + 8);
    *(f32 *)(arg0 + 0x30) = *(f32 *)(arg0 + 0x30) + *(f32 *)(p + 0xC);
    p = *(char **)(arg0 + 4);
    *(f32 *)(arg0 + 0x28) = *(f32 *)(arg0 + 0x28) + *(f32 *)(p + 4);
    *(f32 *)(arg0 + 0x2C) = *(f32 *)(arg0 + 0x2C) + *(f32 *)(p + 8);
    *(f32 *)(arg0 + 0x30) = *(f32 *)(arg0 + 0x30) + *(f32 *)(p + 0xC);
    p = *(char **)(arg0 + 8);
    *(f32 *)(arg0 + 0x28) = *(f32 *)(arg0 + 0x28) + *(f32 *)(p + 4);
    *(f32 *)(arg0 + 0x2C) = *(f32 *)(arg0 + 0x2C) + *(f32 *)(p + 8);
    *(f32 *)(arg0 + 0x30) = *(f32 *)(arg0 + 0x30) + *(f32 *)(p + 0xC);
    p = *(char **)(arg0 + 0xC);
    *(f32 *)(arg0 + 0x28) = *(f32 *)(arg0 + 0x28) + *(f32 *)(p + 4);
    *(f32 *)(arg0 + 0x2C) = *(f32 *)(arg0 + 0x2C) + *(f32 *)(p + 8);
    *(f32 *)(arg0 + 0x30) = *(f32 *)(arg0 + 0x30) + *(f32 *)(p + 0xC);
    *(f32 *)(arg0 + 0x28) = *(f32 *)(arg0 + 0x28) / 4.0f;
    *(f32 *)(arg0 + 0x2C) = *(f32 *)(arg0 + 0x2C) / 4.0f;
    *(f32 *)(arg0 + 0x30) = *(f32 *)(arg0 + 0x30) / 4.0f;
    *(f32 *)(arg0 + 0x10) = b[0];
    *(f32 *)(arg0 + 0x14) = b[1];
    *(f32 *)(arg0 + 0x18) = b[2];
    *(f32 *)(arg0 + 0x1C) = a[0];
    *(f32 *)(arg0 + 0x20) = a[1];
    *(f32 *)(arg0 + 0x24) = a[2];
    return 1;
}
