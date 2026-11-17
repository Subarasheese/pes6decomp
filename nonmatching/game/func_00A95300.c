/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern f32 func_00AB4270(void);
extern s32 func_00A92890(void *);
extern s32 func_009F4C40(s32, f32);
extern s32 func_009B34C0(f32, f32, f32, f32);
extern s32 func_00A1FE80(s32, s32);
extern s32 func_00AB3DC0(void *, s32, s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_00A9C670(void *);
extern s32 func_00A135D0(void *, s32, s32, s32, s32, s32, s32);
extern s32 func_00A21A90(void *, s32, s32, s32, s32);
extern s32 func_00A12A40(void *, s32, s32, s32, s32, s32, s32);
extern s32 func_00A96BB0(void *, s32, s32, s32, s32, s32, s32);
extern s32 func_00A0A1B0(void *, s32, s32, s32, s32, s32);
extern s32 func_00A970D0(void *, s32, s32, s32, s32);
extern s32 func_00A126F0(void *, s32, s32, s32, s32);
extern s32 func_00A974D0(void *, s32, s32, s32, s32);
extern s32 func_00A94580(void *, s32, s32, s32);
extern s32 func_00A94120(void *, s32, s32, s32, s32);
extern s32 func_00288670(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009F4DC0(s32, f32);
extern s32 func_009F4B70(s32, s32, f32);
extern s32 func_00A22C50(void *, s32, s32, s32, s32, s32, s32, s32, f32);
extern void func_00209A00(void *, s32, s32);
extern f32 func_00AB3C60(void *, s32);
extern s32 func_00AB3B70(void *, s32, s32);
extern void func_00AADED0(void *, s32, s32, s32);
extern void func_00207390(void *, s32);

extern u8 *D_003E7574;
extern char D_0059225C[];
extern char D_0059226E[];
extern char D_00592980[];

void func_00A95300(u8 *arg0) {
    f32 f20;
    s32 s0, s1, s2, s3, s5, s6, s7, i, ok, v, r, ptr;
    s32 dx, dy, F, k;
    u8 *p4;
    u8 *row;

    f20 = func_00AB4270();
    arg0[0x48] = func_00A92890(arg0);
    s2 = *(s32 *)(arg0 + 0x9C);
    s0 = func_009F4C40(0xC, f20);
    s1 = s0 * 4;
    s5 = func_009B34C0(*(f32 *)(D_003E7574 + s1 + 0x47C), *(f32 *)(D_003E7574 + s1 + 0xB7C),
                       (f32)s2, (f32)*(s32 *)(arg0 + 0xA0)) & 0xFFFF;
    dx = (s32)(*(f32 *)(D_003E7574 + s1 + 0x47C) - (f32)s2);
    dy = (s32)(*(f32 *)(D_003E7574 + s1 + 0xB7C) - (f32)*(s32 *)(arg0 + 0xA0));
    s6 = dx * dx + dy * dy;
    if (arg0[0x4C] >= 2) s6 = func_00A1FE80(s6, 0x4000000);
    s3 = func_00AB3DC0(arg0, s5, s0) & 0xFFFF;
    F = (u16)func_009B3070(s5, s3);
    *(s32 *)(arg0 + 0x90) = s5;
    *(s32 *)(arg0 + 0x94) = F;
    s1 = (u16)(s3 - s5) < 0x8001;
    s0 = func_00A9C670(arg0);
    s2 = s6 < 0x2400001;

    row = (u8 *)D_00592980 + arg0[0x12] * 0x6900 + arg0[0x11] * 0x348;

    if (F >= 0x7000) {
        if (func_00A135D0(arg0, s5, s3, s1, s0, s6, s2) != 0) {
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0x30;
        }
        return;
    }
    if (F >= 0x2000) {
        if (func_00A21A90(arg0, s1 & 0xFF, s3, s5, s0) != 0) {
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0x90;
            return;
        }
    }
    if (F >= 0x5400) {
        if (func_00A12A40(arg0, s5, s3, s1, s0, s6, s2) != 0) {
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0x30;
        }
        return;
    }
    if (F >= 0x2C00) {
        s2 = func_00A94120(arg0, s5, s3, s1, s6) & 0xFFFF;
        s7 = *(u16 *)D_0059226E;
        if (s2 == 0x227) {
            r = func_00A96BB0(arg0, s3, s5, F, s1, s0, s6);
            if (r == 1) {
                arg0[0x16] = 9;
                *(s16 *)(arg0 + 0x18) = 0xA0;
            } else if (r == 2) {
                arg0[0x16] = 9;
                *(s16 *)(arg0 + 0x18) = 0xB0;
            }
            return;
        }
        if (s1 != (row[0x68] & 1) && F < 0x3201 &&
            func_00288670(row[0x80] & 0x7F, 0x28) >= 0x55 &&
            ((row[0x84] >> 3) & 7) + 1 < 4) {
            r = func_00A0A1B0(arg0, s3, s5, s1, s0, s6);
            if (r == 1) {
                arg0[0x16] = 9;
                *(s16 *)(arg0 + 0x18) = 0xB0;
                return;
            }
            if (r == 2) return;
        }
        i = (u16)func_009B30B0(*(u16 *)(arg0 + 0x28), *(u16 *)(D_003E7574 + 0x58)) >> 4;
        if (i >= 7) i = 6;
        while (i >= 0) {
            v = func_009F4B70(s2, i, f20);
            if (func_00A22C50(arg0, s2, s1, i, v, s7, s0, 0, f20) != 0) {
                func_00209A00(*(void **)(arg0 + 4), s2, i & 0xFFFF);
                *(f32 *)(*(u8 **)(arg0 + 4) + 0x28) = func_00AB3C60(arg0, v);
                *(s16 *)(arg0 + 0x38) = func_00AB3B70(arg0, s7, v);
                *(u16 *)(arg0 + 0x2C) = s7;
                p4 = *(u8 **)(arg0 + 4);
                p4[0x2D] = s1;
                arg0[0x16] = 9;
                *(s16 *)(arg0 + 0x18) = 0x10;
                func_00AADED0(arg0, s7, 0, v);
                func_00207390(*(void **)(arg0 + 4), 4);
                return;
            }
            i--;
        }
        return;
    }
    if (F < 0xA00) s1 = row[0x68] & 1;
    if (func_00A21A90(arg0, s1 & 0xFF, s3, s5, s0) != 0) {
        arg0[0x16] = 9;
        *(s16 *)(arg0 + 0x18) = 0x90;
        return;
    }
    if (F > 0x1000 && s6 < 0x1900000) {
        r = func_00A96BB0(arg0, s3, s5, F, s1, s0, s6);
        if (r == 1) {
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0xA0;
        } else if (r == 2) {
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0xB0;
        }
        return;
    }
    if (s6 < 0x2400000) {
        r = func_00A0A1B0(arg0, s3, s5, s1, s0, s6);
        if (r == 1) {
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0xB0;
            return;
        }
        if (r == 2) return;
    }
    if (s6 < 0x1900000) {
        if (F < 0x1000) s1 = row[0x68] & 1;
        if (func_00A974D0(arg0, s3, s5, s1, s0) != 0) {
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0x60;
        }
        return;
    }
    if (s6 < 0x2400000) {
        if (func_00A970D0(arg0, s3, s5, s1, s0) != 0) {
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0x70;
        }
        return;
    }
    r = func_00A126F0(arg0, s3, s5, s1, s0);
    if (r == 1) {
        arg0[0x16] = 9;
        *(s16 *)(arg0 + 0x18) = 0x20;
        return;
    }
    if (r == 0xFF) return;
    s6 = func_00A94580(arg0, s5, s3, s1) & 0xFFFF;
    k = s3;
    s3 = *(u16 *)D_0059226E;
    s2 = *(s32 *)D_0059225C;
    i = (u16)func_009B30B0(*(u16 *)(D_003E7574 + 0x58), k) >> 4;
    if (i >= 7) i = 6;
    while (i >= 0) {
        v = func_009F4DC0(0x10 - i, f20);
        if (func_00A22C50(arg0, s6, s2, i, v, s3, s0, 0, f20) != 0) {
            func_00209A00(*(void **)(arg0 + 4), s6, i & 0xFFFF);
            *(f32 *)(*(u8 **)(arg0 + 4) + 0x28) = func_00AB3C60(arg0, v);
            *(s16 *)(arg0 + 0x38) = func_00AB3B70(arg0, s3, v);
            *(u16 *)(arg0 + 0x2C) = s3;
            (*(u8 **)(arg0 + 4))[0x2D] = s2;
            func_00AADED0(arg0, s3, 0, v);
            func_00207390(*(void **)(arg0 + 4), 4);
            arg0[0x16] = 9;
            *(s16 *)(arg0 + 0x18) = 0x20;
            return;
        }
        i--;
    }
}
