/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00C9A520[];
extern char D_00591E4C[];
extern char D_00591E4F[];
extern char D_00591BBC[];
extern char D_005926D8[];
extern char D_005926DE[];
extern char D_005926E0[];
extern char D_005926E4[];
extern char D_005926E8[];
extern char D_0058E5B0[];
extern u8 *D_003E7574;
extern s32 func_00A14020(void *a, char *b);
extern u32 func_009B30B0(u32 a, u32 b);
extern s32 func_002AE670(s32 a);
extern s32 func_00A07C00(void *a);

s32 func_00A2E100(u8 *p) {
    u8 buf[8];
    u8 *e;
    s32 i, k, n;
    u32 d;

    char *src = D_00C9A520;
    u8 *dst = buf;
    i = 7;
    do { *dst++ = *src++; } while (--i > 0);

    if (*(u8 *)D_00591E4C == 0) return func_00A14020(p, src);

    if (p[0x24] == 0 || *(u8 *)D_00591BBC >= 3) {
        d = func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(p + 0x26)) & 0xFFFF;
        if (d < 0x39) {
            d = func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
            if (d < 0x39) return 1;
        }
    }
L170:
    if (!(*(f32 *)D_005926D8 < (f32)(u32)*(u8 *)D_005926DE) && p[0x44] != 0) return 1;

    k = p[0x13] ^ 1;
    k = *(u8 *)(D_00591E4F + k * 2);
    if (k == 0xFF) n = 1; else n = k % 0x17;
    e = (u8 *)D_0058E5B0 + n * 576;

    if (*(u32 *)(p + 0x114) < 0x200 && *(s32 *)(D_003E7574 + 0x50) < 0xC01) return 1;

    if (*(u8 *)D_00591BBC >= 2) {
        d = func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(p + 0x26)) & 0xFFFF;
        if (d < 0x29) {
            if (*(s32 *)(p + 0x1C) < 0xE00 || func_00A07C00(p) != 0) {
                p[0x44] = *(u8 *)D_005926E4;
                return 1;
            }
        }
    }
L254:
    if (p[0x24] != 0 && *(u8 *)D_00591BBC < 4) {
        if (*(f32 *)D_005926D8 < (f32)(u32)*(u8 *)D_005926E4) goto L3F0;
        if (*(f32 *)D_005926D8 < (f32)(u32)*(u8 *)D_005926E8) {
            if (*(u32 *)(p + 0x114) >= 0x400) goto L3F0;
        }
        d = func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(p + 0x26)) & 0xFFFF;
        if (d >= 0x49) goto L3F0;
        d = func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
        if (d < 0x41) return 1;
        if (*(f32 *)D_005926D8 < (f32)(u32)*(u8 *)D_005926E4) goto L3F0;
        if (*(u32 *)(p + 0x114) < 0xC0) goto L3F0;
        return 1;
    } else {
        if (*(f32 *)D_005926D8 < (f32)(u32)*(u8 *)D_005926E0) goto L3F0;
        d = func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(p + 0x26)) & 0xFFFF;
        if (d >= 0x49) goto L3F0;
        d = func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
        if (d < 0x41) return 1;
        if (*(f32 *)D_005926D8 < (f32)(u32)*(u8 *)D_005926E0) goto L3F0;
        if (*(u32 *)(p + 0x114) >= 0xC0) return 1;
    }
L3F0:
    if (p[0x24] == 0 || *(u8 *)D_00591BBC >= 4) {
        d = func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(e + 0x26)) & 0xFFFF;
        if (d < 0x31) {
            if (!(*(f32 *)D_005926D8 < (f32)(u32)*(u8 *)D_005926E0)) {
                d = func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
                if (d < 0x31) {
                    d = func_009B30B0(*(u16 *)(p + 0x128 + e[0] * 2), *(u16 *)(p + 0x10C)) & 0xFFFF;
                    if (d < 0x21) {
                        if (*(u32 *)(p + 0x158 + e[0] * 4) >= 0x19000) return 1;
                        if (*(u32 *)(p + 0x114) >= 0x181) return 1;
                    }
                }
            }
        }
    }
    {
        s32 r;
        if (p[0x24] == 0) r = func_002AE670(buf[4]);
        else r = func_002AE670(buf[*(u8 *)D_00591BBC]);
        if (*(f32 *)D_005926D8 < (f32)r) return 0;
        if (*(u32 *)(p + 0x114) < 0x200 &&
            *(f32 *)D_005926D8 < (f32)(r + *(u8 *)D_005926E0)) return 0;
        d = func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x10C)) & 0xFFFF;
        if (d < 0x60) return 1;
        if (*(f32 *)D_005926D8 < (f32)(r + *(u8 *)D_005926E4)) return 0;
        return 1;
    }
}
