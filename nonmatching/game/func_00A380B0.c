/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00937180(void *);
extern char D_005926DE[];
extern char D_005926D8[];
extern char D_00591E4C[];
extern char D_00592980[];
extern char D_00591F30[];
extern char D_00591F34[];
extern u8 *D_003E7574;
extern void func_00AB47C0(void *);
extern s32 func_00207E20(void *);
extern s32 func_00A40B80(void *, s32, s32);
extern s32 func_00AB38D0(void *);
extern void func_00A6D860(void *);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_00BBB7F0(s32);
extern s32 func_00A13E50(s32, s32);
extern s32 func_00A1FE80(s32, s32);
extern u32 func_00288670(u32, u32);
extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_00A5E1C0(void *, s32, s32, s32, s32);
extern void func_00284AB0(void *, s32, s32, s32, s32);
extern void func_00995AF0(void *, s32);
extern void func_00287120(void *);
extern void func_0027D650(s32);
extern void func_0098A8B0(s32);
extern void func_002562B0(s32);
extern void func_00284980(void);
extern void func_00AA0470(void *, s32, s32, f32, f32);
extern void func_00BC3A80(void *);
extern void func_009B36C0(void *, u16, s32, u16, u8);
extern void func_00A0D140(void *);
extern void func_00AB3CB0(void *);
extern s32 func_00AD21D0(void *);
extern void func_00A0C040(void *);
extern void func_00ADA160(void *, u8);
extern void func_00AABED0(void *);
extern void func_00AA1110(void *);
extern void func_00A90AD0(void *);

void func_00A380B0(u8 *s0) {
    s32 s1, s2, s3, s4;
    s32 t, u, x, r, v;
    u8 *g;
    u8 *o;
    u32 c;
    f32 f;
    s32 st;

    st = *(u16 *)(s0 + 0x18);
    if (st == 3) {
        o = *(u8 **)(s0 + 4);
        f = 0.5f + *(f32 *)(o + 0x38);
        c = (u32)f;
        func_009B36C0(s0, *(u16 *)(o + 0x30), (u8)c, *(u16 *)(s0 + 0x26), o[0x2D]);
        func_00A0D140(s0);
        func_00937180(s0);
        func_00AB3CB0(s0);
        if (func_00AD21D0(s0) != 0) {
            func_00A0C040(s0);
        }
    } else if (st == 2) {
        func_00937180(s0);
        if (*(f32 *)D_005926D8 <= (f32)*(u8 *)D_005926DE) {
            s0[0x16] = 0x18;
            *(u16 *)(s0 + 0x18) = 0;
            *(u16 *)(s0 + 0x1A) = 0xFF;
        } else {
            func_00AB47C0(s0);
            if (func_00207E20(*(void **)(s0 + 4)) != 0) {
                *(u16 *)(s0 + 0x18) = *(u16 *)(s0 + 0x18) + 1;
                v = func_00A40B80(s0, 0, 1);
                if ((u8)v == 0) {
                    if (s0[0] == *(u8 *)D_00591E4C) {
                        *(u8 *)D_00591E4C = 0;
                    }
                    s0[0x66] = 3;
                } else {
                    v = func_00AB38D0(s0);
                    if (v == 8) {
                        func_00A6D860(s0);
                    } else {
                        f = (f32)*(s16 *)(s0 + 0x14) * *(f32 *)(s0 + 0xE0);
                        if (f <= 4096.0f) {
                            s2 = *(u16 *)(s0 + 0x94);
                            s1 = (u16)func_009B30B0(s2, *(u16 *)(s0 + 0x26));
                            s1 = (u16)(s1 >> 1);
                            r = func_00BBB8C0(0xB);
                            t = *(u16 *)(s0 + 0x68) * (r + 0x46);
                            r = func_00A13E50(t / 100, 0x6800);
                            s1 = (r * (0x200 - (u16)s1)) / 512;
                            s3 = func_00BBB7F0(0x10) + 0x38;
                            g = D_003E7574;
                            t = *(u16 *)(*(u8 **)(s0 + 4) + 0x30);
                            if (t == 0x29C) {
                                if (s1 < 0x1001) s1 = 0x1000;
                                x = func_00288670(((u8 *)D_00592980)[s0[0x12] * 26880 + s0[0x11] * 840 + 0x76] & 0x7F, 0x28);
                                x = 99 - x;
                                r = func_00BBB7F0(0x1800 + x * 20);
                                s4 = (u16)(s2 + (u16)r);
                                s1 = func_00A13E50(s1, 0x4800);
                                s3 = func_00A1FE80(s3, 0x30);
                                s2 = func_00BBB8C0(8);
                            } else if (t == 0x107) {
                                if (s1 < 0x1001) s1 = 0x1000;
                                x = func_00288670(((u8 *)D_00592980)[s0[0x12] * 26880 + s0[0x11] * 840 + 0x76] & 0x7F, 0x28);
                                x = 99 - x;
                                r = func_00BBB7F0(0x1800 + x * 20);
                                s4 = (u16)(s2 + (u16)r);
                                s1 = func_00A13E50(s1, 0x2800);
                                s3 = func_00A1FE80(s3, 0x40);
                                s2 = func_00BBB8C0(8);
                            } else {
                                if (t == 0xFF) {
                                } else if (t == 0xFD) {
                                    s1 = (s1 * 9) / 10;
                                }
                                if (s1 < 0x2001) s1 = 0x2000;
                                x = func_00288670(((u8 *)D_00592980)[s0[0x12] * 26880 + s0[0x11] * 840 + 0x76] & 0x7F, 0x28);
                                x = 99 - x;
                                r = (u16)func_00BBB7F0(0xE00 + x * 10);
                                s4 = (u16)func_009B32D0((u16)(s2 + r), *(u16 *)(s0 + 0x26),
                                                        (u16)(0x5000 - (*(s32 *)(s0 + 0x90) * 7) / 10));
                                s2 = func_00BBB7F0(8);
                                g = D_003E7574;
                                if ((u16)func_009B30B0(*(u16 *)(g + 0x58), *(u16 *)(s0 + 0x26)) >= 0x40) {
                                    s2 += *(s32 *)(D_003E7574 + 0x50) / 4096;
                                }
                                if (s2 >= 0x19) s2 = 0x18;
                            }
                            t = *(u16 *)(*(u8 **)(s0 + 4) + 0x30);
                            if (t == 0x28B) {
                                if (s3 < 0x48) s2 = 0x48 - s3;
                            }
                            s3 = s3 + s2;
                            r = func_00BBB7F0(0x40);
                            u = s2 * (r + 0xBC);
                            *(u16 *)(s0 + 0x2C) = s4;
                            g = D_003E7574;
                            g[0x6C] = (((u16)(s4 - *(u16 *)(s0 + 0x26) + 0x10000)) < 0x8001);
                            s1 = s1 - u;
                            s2 = (u16)func_009B30B0(s4, *(u16 *)(s0 + 0x26));
                            if (s2 >= 0x31) s2 = 0x30;
                            r = func_00BBB8C0(4);
                            if (r == 0) {
                                s1 = (s1 * 9) / 10;
                                r = func_00BBB8C0(0x20);
                                *(u16 *)(D_003E7574 + 0x6A) = r + 0x30;
                            } else {
                                r = func_00BBB8C0((u16)s2 + 0x30);
                                *(u16 *)(D_003E7574 + 0x6A) = 0x80 - r;
                            }
                            *(u16 *)(s0 + 0x2C) = s4;
                            *(s32 *)(D_003E7574 + 0x74) = (-s1) / 16;
                            *(f32 *)(D_003E7574 + 0x14) = *(f32 *)(D_003E7574 + 0x7FC);
                            r = func_00A13E50(s1, 0xA000);
                            u = func_00A1FE80(r, 0x2800);
                            t = *(u16 *)(*(u8 **)(s0 + 4) + 0x30);
                            if (t == 0x168 || t == 0x1BD || t == 0x1BC || t == 0x1BA || t == 0x204
                                || t == 0x2AD || t == 0x2AB || t == 0x1BB || t == 0x2AC || t == 0x1BE
                                || t == 0x2AF || t == 0x2AE || t == 0x2B0 || t == 0x131 || t == 0x205) {
                                r = func_00A13E50(u, 0x5000);
                                u = func_00A5E1C0(s0, r, s3, 0x1800, 0x1800);
                            }
                            func_00284AB0(s0, s4, u, s3, 0);
                            func_00995AF0(s0, 2);
                            func_00287120(s0);
                            func_0027D650(2);
                            func_0098A8B0(s0[0x48]);
                            D_003E7574[0x67] = 1;
                            D_003E7574[0x62] = 4;
                            func_002562B0(2);
                            func_00284980();
                            *(s32 *)D_005926D8 = 0;
                            func_00AA0470(s0, 1, 1, (f32)*(s32 *)D_00591F30, (f32)*(s32 *)D_00591F34);
                            func_00BC3A80(s0);
                        } else {
                            s0[0x4C] = 0;
                            s0[0x4D] = 0;
                            func_00A90AD0(s0);
                        }
                    }
                }
            }
        }
    }
    func_00ADA160(s0, s0[0x4D]);
    func_00AABED0(s0);
    func_00AA1110(s0);
}
