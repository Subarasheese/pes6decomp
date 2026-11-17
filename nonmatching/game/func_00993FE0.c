/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 fabsf(f32);
extern s32 func_009909D0(void *a, s32 b, s32 c);
extern s32 func_0098F220(void *a, s32 b, void *c);
extern s32 func_009B3070(u16 a, u16 b);
extern s32 func_002AE670(s32 a);
extern char *D_003E7A08;
extern char *D_003E7574;
extern char D_0058E5B0[];
extern char D_0058E5C3[];
extern char D_00591E80[];
extern char D_00591F30[];
extern char D_00591F34[];

s32 func_00993FE0(char *arg0, s32 arg1, s32 arg2) {
    f32 f20;
    f32 f1, f2, f3, x;
    char *p;
    s32 s0, i, idx, v, s2, s1, s0b;

    f20 = (f32)*(s16 *)(arg0 + 0x14);
    if (!(func_009909D0(arg0, 0x640000, arg2) & 0xFF)) return 0;
    if (!(*(f32 *)(arg0 + 0xE0) * f20 <= -4488.3335f)) return 0;
    p = D_003E7A08;
    s0 = 0;
    for (i = 0; i < 6; i++, p += 0x40) {
        v = *(u8 *)(p + 8);
        if (v == 0 || v == 0xFF) continue;
        idx = v % 23;
        if (*(u8 *)(arg0 + 0x13) != *(u8 *)(D_0058E5B0 + idx * 0x240 + 0x13)) {
            s0 = 1;
            break;
        }
    }
    if (func_009909D0(arg0, 0x100000, 0x17)) s0 = 1;
    if (s0 == 0) return 0;
    if ((*(s32 *)D_00591F30) == 0x7FFF) goto L280;
    f1 = *(f32 *)(arg0 + 0xE0) * f20;
    if (!(f1 < -9241.0f)) goto L1A8;
    f1 = (f32)(*(s32 *)D_00591F30) * f20;
    if (!(f1 <= -6732.5f)) return 1;
    if (f1 <= -8217.0f) {
        x = (f32)(*(s32 *)D_00591F34);
        if (fabsf(*(f32 *)(arg0 + 0xE8) - x) <= 4136.0f) goto L1A8;
        if (fabsf(x) <= 4136.0f) goto L1A8;
    }
    s2 = 0;
    s0b = 0;
    if (func_002AE670(0x30) > 0) {
        s1 = 0;
        do {
            if (*(f32 *)(D_003E7574 + s1 + 0x7FC) < -1024.0f) s2 = 1;
            s1 += 4;
            s0b++;
        } while (s0b < func_002AE670(0x30));
    }
    if (s2 != 0) return 1;
L1A8:
    f1 = (f32)(*(s32 *)D_00591F30);
    f2 = *(f32 *)(arg0 + 0xE0) * f20;
    f3 = f1 * f20;
    if (!(f3 <= 6732.5f + f2)) {
        if (f2 < -6732.5f) {
            if (*(f32 *)(D_00591E80 + *(u8 *)(arg0 + 0x13) * 4) * f20 < 0.0f) return 1;
        }
    }
    if (f3 < -13465.0f) return 1;
    x = (f32)(*(s32 *)D_00591F34);
    if (!(fabsf(x) <= 8729.0f)) return 1;
L280:
    p = D_003E7A08;
    v = *(u8 *)(p + 8);
    idx = (v != 0xFF) ? v % 23 : 1;
    if (*(u8 *)(arg0 + 0x13) == *(u8 *)(D_0058E5C3 + idx * 0x240)) return 0;
    if (*(s32 *)(p + 4) != 1) return 0;
    if (!func_0098F220(arg0, *(u8 *)(arg0 + 0x13), p)) return 0;
    if ((func_009B3070(*(u16 *)(arg0 + 0x2A), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) >= 0x2000) return 0;
    if (*(s32 *)(D_003E7574 + 0x50) < 0x2501) return 0;
    return 1;
}
