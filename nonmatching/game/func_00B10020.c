/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_00591E70[];

extern u32 func_00B0F930(void *p, s32 a1, s32 a2, s32 a3);
extern void func_009B3500(void *p, s32 a1, s32 a2);
extern f32 func_00AB4270(void *p);
extern u32 func_009B30B0(s32 a, s32 b);
extern s32 func_00B0B6B0(void *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 f, s32 st0);
extern void func_00AF8180(void *p, s32 a1);
extern void func_00209A00(void *p, s32 a1, s32 a2);
extern f32 func_00AB3C60(void *p, s32 a1);
extern s32 func_00AB3B70(void *p, s32 a1, s32 a2);
extern void func_00AADED0(void *p, s32 a1, s32 a2, s32 a3);
extern void func_00A9D570(void *p);
extern void func_00207390(void *p, s32 a1);

s32 func_00B10020(u8 *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 st0, s32 st1, s32 st2) {
    s32 s0 = a2;
    s32 s4 = a3;
    s32 s5 = a4;
    s32 s3 = a7;
    s32 s1;
    f32 f20;
    s32 v, n;

    s1 = func_00B0F930(p, s3, a2, a3) & 0xFFFF;
    if (s1 == 0x338) {
        func_009B3500(p, 0x338, 0);
        if (*(f32 *)(D_003E7574 + s3 * 4 + 0x7FC) < *(f32 *)D_00591E70 - 32.0f) {
            return 0;
        }
    }
    f20 = func_00AB4270(p);
    if (*(s32 *)(D_003E7574 + 0x50) > 0x1000) {
        if ((func_009B30B0(*(u16 *)(D_003E7574 + 0x58), s4) & 0xFFFF) >= 0x30) {
            if ((func_009B30B0(*(u16 *)(D_003E7574 + 0x58), *(u16 *)(p + 0x10C)) & 0xFFFF) <= 0x40) {
                return 0;
            }
        }
    }
    if ((func_009B30B0(*(u16 *)(p + 0x26), s0) & 0xFFFF) >= 0x38) {
        return 0;
    }
    if (*(s32 *)(D_003E7574 + 0x50) > 0x1D00) goto L2C8;
L148:
    a5 = *(s32 *)(D_003E7574 + 0x50);
    if (a5 < 0x2801) goto L2E8;
    if (!(*(s32 *)(p + 0x1C) < a5)) goto L2E8;
L168:
    if (s1 == 0x339 || s1 == 0x338 || s1 == 0x337) s1 = 0x340;
    else s1 = 0x342;
L198:
    s5 &= 0xFFFF;
L19C:
    s4 = (u16)((s5 - (s4 & 0xFFFF)) + 0x10000) < 0x8001;
    if ((s1 & 0xFFFF) == 0x342 || (s1 & 0xFFFF) == 0x340) {
        if ((func_009B30B0(s0, *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) < 0x11) return 0;
        s4 = (u16)((s5 - *(u16 *)(p + 0x28)) + 0x10000) < 0x8001;
    } else if ((s1 & 0xFFFF) == 0x341) {
        if ((func_009B30B0(s0, *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) < 0x31) return 0;
        s4 = (u16)((s5 - *(u16 *)(p + 0x28)) + 0x10000) < 0x8001;
    }
    n = *(s32 *)(p + 0x1C);
    if (!func_00B0B6B0(p, s1, s0, (n * 9) / 10, s4, st1, s3, 0, f20, st2)) return 0;

    func_00AF8180(p, s0);
    func_00209A00(*(void **)(p + 4), s1, *(u16 *)&st1);
    *(f32 *)(*(u8 **)(p + 4) + 0x28) = func_00AB3C60(p, s3);
    *(u8 *)(*(u8 **)(p + 4) + 0x2D) = s4;
    *(s16 *)(p + 0x2C) = s0;
    *(s16 *)(p + 0x38) = func_00AB3B70(p, s0, s3);
    func_00AADED0(p, s0, 0, s3);
    func_00A9D570(p);
    func_00207390(*(void **)(p + 4), 3);
    p[0x66] = 3;
    p[0x16] = 0xE;
    v = st0 - *(s32 *)(p + 0x1C);
    if (v <= 0) v = -v;
    *(s32 *)(p + 0x90) = v;
    v = *(u16 *)(*(u8 **)(p + 4) + 0x30);
    if (v == 0x36C) {
        *(s16 *)(p + 0x18) = 8;
    } else if (v == 0x341 || v == 0x342 || v == 0x340 || v == 0x33A || v == 0x33C || v == 0x33E ||
               v == 0x33D || v == 0x33F || v == 0x338 || v == 0x337 || v == 0x339) {
        *(s16 *)(p + 0x18) = 0xA0;
    } else {
        *(s16 *)(p + 0x18) = 0x11;
    }
    return 1;

L2C8:
    if ((func_009B30B0(*(u16 *)(D_003E7574 + 0x58), s4) & 0xFFFF) < 0xD) goto L168;
    goto L148;
L2E8:
    if (*(s32 *)(p + 0x58) < *(s32 *)(D_003E7574 + s3 * 4 + 0xFC)) goto L168;
    if (!(*(s32 *)(p + 0x58) < a5)) goto L198;
    if (!(*(s32 *)(D_003E7574 + s3 * 4 + 0x10BC) < -0xBC0)) goto L198;
    goto L168;
}
