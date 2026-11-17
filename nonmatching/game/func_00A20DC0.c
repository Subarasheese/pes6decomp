/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_00591F1A[];
extern char D_005926EC[];
extern char D_005926D8[];
extern char D_005926E4[];
extern char D_00591E00[];
extern char D_0058E5B0[];
extern char D_00592980[];
extern char D_00591E70[];
extern char D_00591E4C[];
extern char D_00592260[];
extern char D_00C9A4F0[];
extern char D_00C9A4F2[];
extern char D_00C9A4F4[];

extern s32 func_009B30B0(void *, u16);
extern s32 func_00B0FA80(void *, s32, void *, u32, s32);
extern f32 func_00AB4270(void);
extern s32 func_009F4DC0(s32, f32);
extern s32 func_00A1C2A0(void *, s32, s32);
extern s32 func_00AA3210(void *, f32, f32);
extern s32 func_00A21680(void *, void *, s32);
extern s32 func_00BBB990(void *, s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_00A9BA00(void);
extern void func_009B3500();
extern s32 func_00B044D0(s32, s32);
extern s32 func_00A22C50(void *, s32, s32, s32, s32, s32, s32, s32, f32);
extern void func_00209A00(void *, s32, s32);
extern f32 func_00AB3C60(void *, s32);
extern void func_00AADED0(void *, s32, s32, s32);
extern s32 func_00AB3B70(void *, s32, s32);
extern void func_00207390(void *, s32);

s32 func_00A20DC0(u8 *s3, s32 unused, u8 *s2, u32 a3, s32 a4)
{
    s32 s0, s1, s4, s5, s6, s7, fp;
    f32 f20;
    s32 tmp2;
    s32 best, bestv, i;
    s16 cand[3];
    s16 *p;
    s32 t;
    u16 ang;

    if (*(u8 *)D_00591F1A < 2) {
        if (*(f32 *)D_005926D8 <= (f32)(u32)*(u8 *)D_005926EC) return 0;
    }
    if (*(s32 *)(D_003E7574 + 0x50) < 0x1100 - s3[0x5C] * 12) {
        if ((u16)func_009B30B0(s2, *(u16 *)(D_003E7574 + 0x58)) >= 0x48) return 0;
    }
    if (func_00B0FA80(s3, 1, D_003E7574, a3, a4) != 0) return 0;
    f20 = func_00AB4270();
    s0 = func_009F4DC0(10, f20);
    if (func_00A1C2A0(s3, s0, 0x9000) != 0) return 0;
    fp = func_00AA3210(s3, *(f32 *)(D_003E7574 + 0x47C + s0 * 4), *(f32 *)(D_003E7574 + 0xB7C + s0 * 4));
    if (func_00A21680(s3, s2, s0) != 0) fp = 0;

    t = (s32)*(f32 *)(D_003E7574 + 0xB7C + *(u8 *)D_005926E4 * 4);
    if (t <= 0) t = -t;
    if ((f32)t < 939.0f) {
        f32 f1 = (f32)(s32)func_00BBB990(s2, 0x200);
        f32 f2 = *(f32 *)(D_003E7574 + 0x47C + *(u8 *)D_005926E4 * 4) + f1;
        f32 f3 = (f32)*(s16 *)(s3 + 0x14) * f2;
        if (f3 < -13465.0f) fp = 0;
    }

    for (s1 = 4; s1 >= 0; s1 -= 2) {
        s7 = func_009F4DC0(10 - s1, f20);
        s6 = s7 * 4;
        if (*(f32 *)(D_003E7574 + 0x7FC + s6) < -384.0f) continue;
        s4 = (u16)func_009B3480(s3, *(f32 *)(D_003E7574 + 0x47C + s6), *(f32 *)(D_003E7574 + 0xB7C + s6));
        func_009B3480(s3, *(f32 *)(D_003E7574 + 0x480 + s6), *(f32 *)(D_003E7574 + 0xB80 + s6));
        tmp2 = (u16)func_009B30B0(s2, *(u16 *)(D_003E7574 + 0x58));
        {
            s32 a0, v3;
            v3 = *(u8 *)(D_00591E00 + 0x53 + ((s3[0x13] ^ 1) << 1));
            if (v3 == 0xFF) a0 = 1; else a0 = v3 % 23;
            if (fp >= 0x90001) {
                if (*(u32 *)(s3 + 0x110) < *(u32 *)(D_0058E5B0 + a0 * 576 + 0x110)) return 0;
            }
        }
        if (fp >= 0x24000) {
            if (*(s32 *)(D_003E7574 + 0x50) < 0x1000) return 0;
            if (func_00A9BA00() >= 0x1000000) return 0;
        }
        func_009B3500(s3, 0x308, 0);
        if (a4 == 0) {
            if (*(f32 *)(D_003E7574 + 0x7FC + s6) < *(f32 *)D_00591E70 - 64.0f) continue;
        }
        cand[0] = *(s16 *)D_00C9A4F0;
        cand[1] = *(s16 *)D_00C9A4F2;
        cand[2] = *(s16 *)D_00C9A4F4;
        best = 0xFF;
        s5 = (D_00592980 + s3[0x12] * 15 * 1792 + s3[0x11] * 15 * 56)[0x68] & 1;
        p = cand;
        bestv = 0;
        for (s0 = 0; s0 < 3; s0++) {
            func_009B3500(s3, *(u16 *)p, 0, D_00592980);
            i = (s32)((f32)(s32)*(f32 *)D_00591E70 - *(f32 *)(D_003E7574 + 0x7FC + s6));
            if (i <= 0) i = -i;
            if (best == 0xFF || i < bestv) {
                bestv = i;
                best = s0;
            }
            p++;
        }
        s0 = (u16)cand[best];
        if (s0 == 0x305) continue;
        ang = s4;
        if (s0 == 0x30A) {
            if ((u16)func_009B30B0((void *)(s32)s4, (u16)a3) >= 0x28) {
                s0 = 0x1C1;
                s5 = (u16)(ang - (u16)a3 + 0x10000) < 0x8001;
                ang = ang - (u16)func_00B044D0(0x1C1, 0x2D) * (s5 ? -1 : 1);
            }
        } else {
            if ((u16)func_009B30B0((void *)(s32)s4, (u16)a3) >= 0x28) {
                s0 = 0x309;
                s5 = (u16)(ang - (u16)a3 + 0x10000) < 0x8001;
                ang = ang - (u16)func_00B044D0(0x309, 0x2D) * (s5 ? -1 : 1);
            }
        }
        if (0x1B00 - s3[0x5C] * 12 < *(s32 *)(s3 + 0x1C)) continue;
        if ((u16)func_009B30B0((void *)(s32)ang, *(u16 *)(s3 + 0x26)) < 0x28) {
            /* fallthrough below */
        } else continue;
        if (func_00A22C50(s3, s0, s5 & 0xFF, s1, s7, ang, (*(s32 *)(s3 + 0x1C) * 95) / 100, 0, f20) == 0) continue;
        s4 = *(s32 *)(s3 + 0x1C);
        if (*(s32 *)D_00592260 + 0x400 < s4) continue;
        {
            s32 v = 0x1B00 - s3[0x5C] * 12;
            if (v < s4) s4 = v;
            if (s4 < 0xC00) s4 = 0xC00;
        }
        if (*(s32 *)D_00592260 >= 0x3001) continue;
        if ((u16)func_009B30B0((void *)(s32)ang, *(u16 *)(D_003E7574 + 0x58)) >= 0x40) {
            if (s4 < *(s32 *)D_00592260) continue;
        }
        if (!(*(s32 *)(D_003E7574 + 0xFC + s6) >= 0x2000 && s3[0] != *(u8 *)D_00591E4C && tmp2 >= 0x21)) {
            if (!(fp < 0xC401)) {
                if (s4 < *(s32 *)D_00592260) continue;
            }
        }
        func_00209A00(*(void **)(s3 + 4), s0, (u16)s1);
        *(f32 *)(*(u8 **)(s3 + 4) + 0x28) = func_00AB3C60(s3, s7);
        (*(u8 **)(s3 + 4))[0x2D] = s5;
        func_00AADED0(s3, ang, 0, s7);
        if (s4 < *(s32 *)(s3 + 0x1C)) *(s32 *)(s3 + 0x1C) = s4;
        if (s4 < *(s32 *)(s3 + 0x20)) *(s32 *)(s3 + 0x20) = s4;
        *(u16 *)(s3 + 0x2C) = ang;
        *(s16 *)(s3 + 0x38) = func_00AB3B70(s3, ang, s7);
        func_00207390(*(void **)(s3 + 4), 6);
        return 1;
    }
    return 0;
}
