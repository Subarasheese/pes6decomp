/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBCDF4[];
extern char D_005926FD[];
extern char D_00CBCDE8[];
extern char D_00CBD2A0[];
extern s8 D_003EA754;
extern char D_00591C09[];
extern char D_00591E58[];
extern char D_00591E5C[];
extern char D_00591E60[];
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];
extern char D_00CBCDD0[];
extern char D_00CBCDD4[];
extern char D_00CBCDD8[];
extern char D_00CBCDDC[];
extern char D_00CBCDE5[];
extern char D_00CBCDE6[];
extern char D_0058E5B4[];
extern char D_00CBCDE0[];
extern char D_00CBCDE4[];
extern char D_00592800[];
extern char D_00591DCD[];
extern char D_00591E0C[];
extern char D_00592A64[];
extern char D_00592A55[];
extern char D_00592A66[];
extern char D_00CBCDE1[];
extern char D_00CBCDF0[];
extern char D_00591BE4[];
extern char D_00CBCDEE[];

s32 func_00BBB8C0(s32);
u8 *func_00BA9400(s32);
s32 func_009A01D0(void);
s32 func_00B297D0(void);
s32 func_00BDBB60(f32, f32);

s32 func_00B98610(u8 *a0, u8 *a1, s32 a2, s16 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 prev;
    s32 saved;
    s32 id;
    s32 r;
    s32 q;
    s32 i;
    s32 mode;
    s32 ix;
    s32 lim;
    s32 t;
    s32 cur;
    s32 lo;
    s32 res;
    s16 v;
    u8 *p;
    f32 m0, m1, m2, m3;
    f32 x, y, z;
    f32 pos[3];
    s16 A[8];
    s16 B[8];

    x = pos[0];
    y = pos[1];
    z = pos[2];
    prev = *(u8 *)D_00CBCDF4;
    mode = a2;
    v = a3;
    *(u8 *)D_00CBCDF4 = 0;
    if (!(v > 0)) {
        return 0;
    }
    if (*(u8 *)D_005926FD != 0) {
        return 0;
    }
    if (*(u16 *)D_00CBCDE8 > 0) {
        return 0;
    }
    if (*(u16 *)D_00CBD2A0 > 0) {
        return 0;
    }
    if (mode == 1) {
        x = *(f32 *)(a0 + 0xE0);
        y = *(f32 *)(a0 + 0xE4);
        z = *(f32 *)(a0 + 0xE8);
    } else if (mode == 3 || mode == 2 || mode == 0) {
        y = *(f32 *)(a1 + 0xE4);
        z = *(f32 *)(a1 + 0xE8);
        x = *(f32 *)(a1 + 0xE0);
    }
    saved = a0[0];
    id = a1[0];
    r = func_00BBB8C0(D_003EA754);
    if (r != 0) {
        r = r * (a0[0x12] != 0 ? -1 : 1);
        q = r / 9;
        v = v - (s16)(s32)(2.5f * (f32)(s16)q);
        if (v < 0) {
            v = 0;
        }
    }
    if (v < 20) {
        s32 negv = -*(s16 *)(a0 + 0x14);
        if (negv == func_00BDBB60(x, z)) {
            p = func_00BA9400(0);
            if (p[0x12] < func_00BBB8C0(99) || v < 9) {
                v = v - 10;
            }
            if (v < 0) {
                v = 0;
            }
        }
    }
    if (*(u8 *)D_00591C09 == 5) {
        if (func_00B297D0() == 0) {
            return 0;
        }
        v = 1;
    }
    if (v <= 0) {
        return 0;
    }
    *(f32 *)D_00591E58 = x;
    *(f32 *)D_00591E60 = z;
    *(u8 *)D_00CBCDE2 = saved;
    *(f32 *)D_00591E5C = y;
    *(u8 *)D_00CBCDE3 = id;
    if (a5 != 0 && mode == 0) {
        *(u8 *)D_00CBCDD0 = 1;
        *(u32 *)D_00CBCDD4 = 0;
        *(u8 *)D_00CBCDD8 = 0;
        *(u32 *)D_00CBCDDC = 0;
    } else if (mode == 0) {
        *(u8 *)D_00CBCDD0 = 0;
        *(u32 *)D_00CBCDD4 = 0;
        *(u8 *)D_00CBCDD8 = 1;
        *(u32 *)D_00CBCDDC = 0;
    } else {
        *(u8 *)D_00CBCDD0 = 0;
        *(u32 *)D_00CBCDD4 = 0;
        *(u8 *)D_00CBCDD8 = 0;
        *(u32 *)D_00CBCDDC = 0;
        *(u16 *)D_00CBCDE8 = a4;
    }
    if (prev == 0) {
        *(u8 *)D_00CBCDE5 = 0;
        if (id == 0xFF) {
            q = 1;
        } else {
            q = id % 23;
        }
        *(u8 *)D_00CBCDE6 = *(u8 *)(*(s32 *)(*(s32 *)(D_0058E5B4 + q * 576) + 4) + 12);
    }
    *(u8 *)D_00CBCDE0 = mode;
    *(u8 *)D_00CBCDE4 = 0;
    for (i = 0; i < 8; i++) {
        if (id == *(u8 *)(D_00592800 + i * 40 + 16)) {
            *(u8 *)D_00CBCDE4 = *(u8 *)(D_00592800 + i * 40) + 1;
            break;
        }
    }
    p = func_00BA9400(0);
    B[0] = 35;
    B[4] = 35;
    B[1] = 50;
    B[5] = 50;
    B[2] = 100;
    B[6] = 100;
    B[3] = 100;
    B[7] = 100;
    m0 = (49.5f - (f32)(u32)p[0xE]) / 49.5f;
    B[4] = B[4] + (s16)(s32)(0.5f * (m0 * ((f32)B[0] / 2.0f)));
    m1 = (49.5f - (f32)(u32)p[0xF]) / 49.5f;
    B[5] = B[5] + (s16)(s32)(0.5f * (m1 * ((f32)B[1] / 2.0f)));
    m2 = (49.5f - (f32)(u32)p[0x10]) / 49.5f;
    B[6] = B[6] + (s16)(s32)(0.5f * (m2 * ((f32)B[2] / 2.0f)));
    m3 = (49.5f - (f32)(u32)p[0x11]) / 49.5f;
    A[0] = 10;
    A[4] = 10;
    A[1] = 40;
    A[5] = 40;
    A[2] = 40;
    A[6] = 40;
    A[3] = 100;
    A[7] = 100;
    B[7] = B[7] + (s16)(s32)(0.5f * (m3 * ((f32)B[3] / 2.0f)));
    A[4] = A[4] + (s16)(s32)(0.5f * (m0 * ((f32)A[0] / 2.0f)));
    A[5] = A[5] + (s16)(s32)(0.5f * (m1 * ((f32)A[1] / 2.0f)));
    A[6] = A[6] + (s16)(s32)(0.5f * (m2 * ((f32)A[2] / 2.0f)));
    A[7] = A[7] + (s16)(s32)(0.5f * (m3 * ((f32)A[3] / 2.0f)));

    ix = a0[0x12] * 26880 + a0[0x11] * 840;
    lo = *(s16 *)(D_00592A64 + ix);
    cur = (s16)(v + lo);
    res = 1;
    t = *(u8 *)(D_00592A55 + ix);
    lim = *(u8 *)D_00591DCD;
    if (lim == 0) {
        goto L_flag;
    }
    if (lim == 1) {
        if ((u32)(func_009A01D0() * 15) < *(u32 *)D_00591E0C) {
            goto L_flag;
        }
    }
    goto L_next;
L_flag:
    if (lo < B[4] && !(cur < B[4]) && cur < B[5] && A[4] < v) {
        res = 2;
    }
L_next:
    if (t != 0) {
        if (lo < B[6] && !(cur < B[6])) {
            if (A[6] < v) {
                res = 3;
            } else {
                cur = (s16)(B[6] - 1);
            }
        }
    } else {
        if (lo < B[5] && !(cur < B[5]) && cur < B[7]) {
            if (A[5] < v) {
                res = 3;
            } else {
                cur = (s16)(B[5] - 1);
            }
        }
    }
    if (lo < B[7] && !(cur < B[7])) {
        if (A[7] < v) {
            res = 4;
        } else {
            if (t == 0) {
                res = 3;
            }
            cur = (s16)(B[7] - 1);
        }
    }
    if (*(u8 *)D_00591C09 == 5) {
        res = 1;
    }
    if (!(res > 0 && res < 5)) {
        res = 1;
    }
    *(u8 *)D_00CBCDE1 = res;
    *(s16 *)(D_00592A66 + ix) = cur;
    *(u32 *)D_00CBCDF0 = 0;
    *(u8 *)D_00CBCDEE = (*(u8 *)D_00591BE4 * 4) / 3;
    return 1;
}
