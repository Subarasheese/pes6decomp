/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001DCFE0(s32, s32);
extern void *func_001E0AC0(void *, void *, s32, s32, s16 *);
extern void *func_001E0BD0(void *, void *, s32, void *);
extern void func_001E14C0(void *, void *, void *, void *, s64, s64, s32, s32);
extern s32 func_001E1B50(void *);
extern char D_003D28B8[];
extern char D_003D28B9[];

void *func_001E06D0(void *a0, void *a1, s32 a2, s32 a3, u8 *a4) {
    s16 spDC[2];
    u8 *obj;
    s32 off, bx, by, w, h;
    s32 s0, s6;
    u8 *s2, *s1;
    s32 i, j, ok, k;
    u8 *p;
    s64 t4, t5, t0, t1, t7, v1, v0, x;

    obj = func_001DCFE0(*(s32 *)a0, a2);
    off = (a3 & 0xFF) * 2;
    bx = *(u8 *)(D_003D28B8 + off);
    s0 = ((((u8 *)a1)[8] - 1) + (obj[0xA] + bx)) / ((u8 *)a1)[8];
    if (s0 <= 0) s0 = 1;
    by = *(u8 *)(D_003D28B9 + off);
    s6 = ((((u8 *)a1)[9] - 1) + (obj[0xB] + by)) / ((u8 *)a1)[9];
    if (s6 <= 0) s6 = 1;
    s2 = *(u8 **)a1;
    s1 = 0;
    while (s2 != 0) {
        if ((a3 & 0xFF) == 0) {
            ok = 1;
        } else if (s2[0x20] == a4[0] && s2[0x21] == a4[1] && s2[0x22] == a4[2] && s2[0x23] == a4[3]
                   && s2[0x24] == a4[4] && s2[0x25] == a4[5] && s2[0x26] == a4[6] && s2[0x27] == a4[7]) {
            ok = 1;
        } else {
            ok = 0;
        }
        if (ok) {
            s1 = func_001E0AC0(a1, s2, s0, s6, spDC);
            if (s1 != 0) break;
        }
        s2 = *(u8 **)(s2 + 4);
    }
    if (s1 == 0) {
        s2 = func_001E0BD0(a0, a1, a3, a4);
        s1 = *(u8 **)(s2 + 0xC);
        spDC[0] = 0;
        spDC[1] = 0;
    }
    *(void **)(s1 + 8) = obj;
    *(u8 **)(s1 + 4) = s2 + 0x10;
    *(s32 *)(s1 + 0x30) = a2;
    s1[0x36] = s0;
    s1[0x37] = s6;
    s1[0x38] = obj[6];
    s1[0x39] = obj[7];
    s1[0x3A] = obj[8] + bx;
    s1[0x3B] = obj[9] + by;
    func_001E1B50(s1);
    {
        u8 *a1p = *(u8 **)s1;
        for (i = 0; i < s1[0x37]; i++) {
            p = s1 + ((((u8 *)(*(u8 **)(a1p + 8)))[0xA] * i) << 6);
            for (j = 0; j < s1[0x36]; j++) {
                *(u16 *)(p + 0x34) = *(u16 *)(p + 0x34) + 1;
                p += 0x40;
            }
        }
        *(u16 *)(a1p + 0x28) = *(u16 *)(a1p + 0x28) + 1;
    }
    t4 = spDC[0] * ((u8 *)a1)[8];
    t5 = spDC[1] * ((u8 *)a1)[9];
    if (*(s32 *)((u8 *)a0 + 0x28) != 1) {
        v1 = (s16)t4;
        v0 = s1[0x3A];
    } else {
        v1 = (s16)(t4 * 2);
        v0 = (s16)(s1[0x3A] * 2);
    }
    v1 = (s16)v1;
    t7 = (v1 + (s16)v0) * 16;
    t1 = (s16)t5;
    t0 = v1 * 16;
    x = ((t1 * 16) << 16);
    *(s64 *)(s1 + 0x10) = t0 | x;
    *(s64 *)(s1 + 0x18) = x | t7;
    x = ((t1 + (s16)s1[0x3B]) * 16) << 16;
    *(s64 *)(s1 + 0x20) = t0 | x;
    *(s64 *)(s1 + 0x28) = t7 | x;
    func_001E14C0(a0, a1, s2, s1, t4, t5, a3, t7);
    return s1;
}
