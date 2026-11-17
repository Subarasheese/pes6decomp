/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00592264[];
extern char D_0059225C[];
extern char D_0059226C[];
extern char D_00592980[];
extern u8 *D_003E7574;
extern s32 func_009B30B0(s32 a, s32 b);
extern s32 func_00A19D40(void *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 f);
extern s32 func_00A22C50(void *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 f);
extern s32 func_00AB3590(void *p, s32 a1);
extern s32 func_00AA32C0(void *p);
extern s32 func_00A08690(void *p);
extern s32 func_00B044D0(s32 a, s32 b);


s32 func_00A8B6A0(u8 *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 s1, s32 fp, s32 x100, f32 f)
{
    s32 s0, s5, s6, s7, r, d;
    s32 h, ang, s4, sg;
    u32 d0;

    *(s32 *)D_00592264 = 0;
    d0 = func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x28)) & 0xFFFF;
    s5 = a3;
    s4 = a3 & 0xFFFF;
    h = a4 & 0xFFFF;
    ang = a1 & 0xFFFF;
    s0 = (((s4 - ang) + 0x10000) & 0xFFFF) < 0x8001;
    if (h >= 0x1001) {
        if (s0 == (((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x68] & 1)) goto L764;
        if (h < 0x1801) goto L894;
        goto L764;
    }
    goto L894;

L764:
    s6 = a3 & 0xFFFF;
    {
        s32 x = (((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x8C] >> 2) + 0x94;
        s32 q = (x * -96) / 183;
        if (*(f32 *)(D_003E7574 + a6 * 4 + 0x7FC) < (f32)q) {
            s5 = 0xDE;
            goto L28;
        }
    }
    if (s1 >= 0x1001) {
        s7 = 0xCF;
        r = func_00AB3590(p, 0xCF) & 0xFFFF;
        sg = a5 ? -1 : 1;
        s6 = (s4 - r * sg) & 0xFFFF;
    } else if (h >= 0x3001) {
        s7 = 0xD4;
        r = func_00AB3590(p, 0xD4) & 0xFFFF;
        sg = a5 ? -1 : 1;
        s6 = (s4 + r * sg) & 0xFFFF;
    } else {
        s7 = 0xD3;
    }
    if (func_00A19D40(p, s7, fp, s6, a5 & 0xFF, a6, f) != 0) {
        *(s16 *)D_0059226C = s6;
        *(s32 *)D_0059225C = s0;
        return s7;
    }
    if (*(s32 *)(p + 0x1C) >= 0x1000 && d0 < 0x21) {
        *(s16 *)D_0059226C = s6;
        *(s32 *)D_0059225C = s0;
        return s7;
    }
    d = func_009B30B0(ang, *(u16 *)(p + 0x28)) & 0xFFFF;
    if (d < 0x11 && func_00A08690(p) != 0) {
        s32 a2v;
        s32 u = *(u16 *)(p + 0x26);
        s32 w = *(u16 *)(p + 0x28);
        s0 = (((u - w) + 0x10000) & 0xFFFF) < 0x8001;
        r = func_00B044D0(0x18B, 0x5A) & 0xFFFF;
        sg = s0 ? -1 : 1;
        a2v = r * sg;
        *(s32 *)D_0059225C = s0;
        *(s16 *)D_0059226C = *(u16 *)(p + 0x26) + a2v;
        return 0x18B;
    }
    if (s1 < 0x1200) {
        r = func_00B044D0(s7, 0xA) & 0xFFFF;
        sg = a5 ? -1 : 1;
        s5 = 0xE1;
        s6 = (s4 + r * sg) & 0xFFFF;
        goto L28;
    }
    s6 = a3 & 0xFFFF;
    s5 = 0xE4;
    goto L28;

L894:
    s0 = (((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x68] & 1);
    s6 = a3 & 0xFFFF;
    if (a5 == s0 || x100 == 1) {
        if (s1 < 0x1200) s7 = 0xE0; else s7 = 0xE4;
        s0 = a5;
    } else {
        s7 = 0xE3;
    }
    if (func_00A22C50(p, s7, s0, fp, a6, s5, a7, 0, f) != 0) {
        *(s16 *)D_0059226C = s5;
        *(s32 *)D_0059225C = s0;
        *(s32 *)D_00592264 = 1;
        return s7;
    }
    if (*(s32 *)(p + 0x1C) < 0x1000 || (func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x28)) & 0xFFFF) < 0x20) {
        if (func_00A19D40(p, s7, fp, s5, a5 & 0xFF, a6, f) == 0) return 0;
    }
    if (s1 < 0xE00) {
        if ((func_00AA32C0(p) < 0x14400) ) goto L9A8;
        d = func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
        if (d >= 0x11) goto L9A8;
        if (*(s32 *)(p + 0x1C) >= 0x1500) goto L9A8;
        if (*(s32 *)(D_003E7574 + 0x50) >= 0x1300) goto L9A8;
        return 0;
    }
L9A8:
    if (s1 >= 0x1C01) {
        if (fp < 5) {
            s5 = 0xD8;
        } else {
            d = func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
            if (d < 0x11) return 0;
            s5 = 0xD8;
        }
    } else if (s1 < 0x1401) {
        s5 = 0xD2;
    } else {
        s5 = 0xCE;
    }
    {
        s32 a0 = (((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x68] & 1);
        if (a5 != a0 && x100 != 1) {
            s0 = a0;
            if (fp >= 5) goto L28;
            if (s1 < 0x1000) {
                s5 = 0xD6;
                r = func_00AB3590(p, 0xD6) & 0xFFFF;
                sg = a5 ? -1 : 1;
                s6 = (s4 - r * sg) & 0xFFFF;
                goto L28;
            }
            s5 = (s1 < 0x1C00) ? 0x255 : 0xD5;
            r = func_00AB3590(p, s5) & 0xFFFF;
            sg = a5 ? -1 : 1;
            s6 = (s4 + r * sg) & 0xFFFF;
            goto L28;
        }
    }
    if (h < 0x801) goto L28;
    {
        s32 v = ((*(u16 *)(p + 0x26) - ang + 0x10000) & 0xFFFF) < 0x8001;
        if (a5 == v) goto L28;
        if (fp >= 5) goto L28;
        if (x100 == 0) {
            s0 = ((ang - s4 + 0x10000) & 0xFFFF) < 0x8001;
        }
        if (s1 < 0x1000) {
            s5 = 0xD6;
            r = func_00AB3590(p, 0xD6) & 0xFFFF;
            sg = a5 ? -1 : 1;
            s6 = (s4 - r * sg) & 0xFFFF;
            goto L28;
        }
        s5 = (s1 < 0x1C00) ? 0x255 : 0xD5;
        r = func_00AB3590(p, s5) & 0xFFFF;
        sg = a5 ? -1 : 1;
        s6 = (s4 + r * sg) & 0xFFFF;
    }
L28:
    *(s16 *)D_0059226C = s6;
    *(s32 *)D_0059225C = s0;
    return s5;
}
