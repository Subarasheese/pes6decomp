/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_005926E8[];
extern s32 func_00207920(void);
extern u32 func_009B30B0(u32 a, u32 b);
extern u32 func_009B3070(u32 a, u32 b);
extern u32 func_009B32D0(u32 a, u32 b, u32 c);
extern u32 func_009B3480(void *p, f32 a, f32 b);


u32 func_00AB3DC0(u8 *p, u32 a1, s32 a2) {
    s32 s0 = a2;
    u32 s3 = 0;
    u32 s5, s4, v, t;
    u8 *g;
    s32 i;
    u8 *obj = *(u8 **)(p + 4);

    t = *(u16 *)(obj + 0x30);
    if (t == 0x16F) {
        if (func_00207920() >= 0xFA0) s3 = 1;
    } else if (t == 0x2D4 || t == 0x2E) {
        return (*(u16 *)(p + 0x26));
    } else if (t == 0 || t == 0x6A || t == 0x6D) {
        if (*(u32 *)(p + 0x114) < 0xE0 && *(s32 *)(D_003E7574 + 0x50) < 0x400) {
            v = func_009B30B0((*(u16 *)(p + 0x10C)), (*(u16 *)(p + 0x26))) & 0xFFFF;
            if ((s32)v < 0x31) return (*(u16 *)(p + 0x26));
        }
    }

    if (s3 == 0) goto L3FB4;
L3EB4:
    if (*(s32 *)(p + 0x1C) >= 0xE01) {
        s4 = (*(u16 *)(p + 0x28));
        s3 = (*(u16 *)(p + 0x26));
        v = func_009B3070(s3, s4) & 0xFFFF;
        s3 = func_009B32D0(s3, s4, (v >> 1) & 0xFFFF) & 0xFFFF;
        if (*(s32 *)(p + 0x1C) >= 0x1301) return s3;
        v = func_009B30B0((*(u16 *)(p + 0x10C)), (*(u16 *)(p + 0x26))) & 0xFFFF;
        if ((s32)v < 0x31) return s3;
        v = func_009B30B0((*(u16 *)(p + 0x26)), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
        if ((s32)v >= 0x21) goto L3F08;
        g = D_003E7574;
        {
            u32 b = *(u8 *)D_005926E8;
            u8 *q = g + b * 4;
            v = func_009B3480(p, *(f32 *)(q + 0x47C), *(f32 *)(q + 0xB7C));
        }
        v = func_009B30B0((*(u16 *)(p + 0x26)), v) & 0xFFFF;
        if ((s32)v >= 0x21) goto L3F08;
        return s3;
    }
L3F08:
    obj = *(u8 **)(p + 4);
    t = *(u16 *)(obj + 0x30);
    if (t == 0x1D0 || t == 0x176 || t == 0x1CF || t == 0x177) {
        if (!(*(f32 *)(obj + 0x38) < 6.0f)) {
            u8 *q = D_003E7574 + a2 * 4;
            s5 = func_009B3480(p, *(f32 *)(q + 0x47C), *(f32 *)(q + 0xB7C)) & 0xFFFF;
            s0 = (*(u16 *)(p + 0x10C));
            v = func_009B3070(s5, s0) & 0xFFFF;
            return func_009B32D0(s5, s0, (v >> 1) & 0xFFFF) & 0xFFFF;
        }
    }
    goto L405C;

L3FB4:
    v = func_009B30B0((*(u16 *)(p + 0x26)), (*(u16 *)(p + 0x28))) & 0xFFFF;
    if ((s32)v >= 0x21) goto L3F08;
    goto L3EB4;

L405C:
    v = func_009B30B0((*(u16 *)(p + 0x10C)), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
    if ((s32)v >= 0x78) {
        v = func_009B30B0((*(u16 *)(p + 0x26)), (*(u16 *)(p + 0x10C))) & 0xFFFF;
        if ((s32)v < 0x11) return (*(u16 *)(p + 0x10C));
    }

    if (s0 >= 0) {
        for (i = 0; i <= s0; i++) {
            u8 *q = D_003E7574 + i * 4;
            s5 = func_009B3480(p, *(f32 *)(q + 0x47C), *(f32 *)(q + 0xB7C)) & 0xFFFF;
            v = func_009B30B0(s5, a1) & 0xFFFF;
            if ((s32)v < 0x21) {
                v = func_009B30B0((*(u16 *)(p + 0x26)), s5) & 0xFFFF;
                if ((s32)v < 0x29) return s5;
            }
        }
    }
    s0 = func_009B30B0((*(u16 *)(p + 0x26)), s5) & 0xFFFF;
    v = func_009B30B0((*(u16 *)(p + 0x26)), s5) & 0xFFFF;
    if ((s32)v < 0x43) {
        if (*(s32 *)(p + 0x1C) >= 0xC01 && (s32)(s0 & 0xFFFF) >= 0x14) return s5;
        if ((s32)(s0 & 0xFFFF) >= 0x20 && (s32)(s0 & 0xFFFF) < 0x41) {
            v = func_009B30B0(s5, *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
            if ((s32)v >= 0x50) return s5;
        }
    }
    v = func_009B30B0((*(u16 *)(p + 0x26)), (*(u16 *)(p + 0x10C))) & 0xFFFF;
    if ((s32)v < 0x2D) {
        if (*(s32 *)(p + 0x1C) >= 0xC01 && (s32)(s0 & 0xFFFF) >= 0x14) return (*(u16 *)(p + 0x10C));
        if ((s32)(s0 & 0xFFFF) >= 0x20 && (s32)(s0 & 0xFFFF) < 0x41) {
            v = func_009B30B0((*(u16 *)(p + 0x10C)), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
            if ((s32)v >= 0x60) return (*(u16 *)(p + 0x10C));
        }
    }
    v = func_009B30B0(s5, (*(u16 *)(p + 0x26))) & 0xFFFF;
    if ((s32)v >= 0x28) s5 = (*(u16 *)(p + 0x26));
    return s5;
}
