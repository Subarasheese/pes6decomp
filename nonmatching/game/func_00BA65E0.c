/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591F24[];
extern char D_00591E4D[];
extern char D_00591E4C[];
extern char D_0058E5B0[];
extern char D_005926F2[];
extern char D_00591DC4[];
extern char D_00591F14[];
extern char D_00591F1C[];
extern char D_00591F20[];
extern char D_005926E4[];
extern char D_005926E0[];
extern char D_005926E6[];
extern char D_00591F30[];
extern u32 D_003E7574;

void func_00B798F0(f32 *a, f32 *b, s32 c);
s32 func_009B34C0(s32 i0, s32 i1, s32 i2, s32 i3, f32 a, f32 b, f32 c, f32 d);
s32 func_009B3480(void *a, s32 a1, f32 b, f32 c);
s32 func_009B30B0(s32 a, s32 b);
s32 func_00A09690(void *a);
s32 func_00BBB990(s32 a, s32 b);
s32 func_00BBB9C0(s32 a, s32 b);

void func_00BA65E0(char *s1, s32 a1) {
    f32 px, fy;
    f32 f20, f21, f22, f23;
    char *s0;
    char *g;
    s32 s2;
    s32 idx, t, m, c0, c1, la1, sg;
    u32 sel = *(u8 *)D_00591E4D;
    u32 mode = *(u8 *)D_00591F24;

    if (mode < 9) {
        if (mode == 4) {
            func_00B798F0(&px, &fy, *(u8 *)D_00591E4D);
            f21 = 10265.0f * (f32)(px < 0.0f ? -1 : 1);
            f20 = -3112.0f * (f32)(px < 0.0f ? -1 : 1);
            *(s16 *)(s1 + 0x2C) = func_009B34C0((s32)&px, (s32)&fy, sel, 0, f21, f20, 11417.0f * (f32)(px < 0.0f ? -1 : 1), fy);
            goto store;
        }
        if (mode == 8) {
            func_00B798F0(&px, &fy, *(u8 *)D_00591E4D);
            f21 = 10777.0f * (f32)(px < 0.0f ? -1 : 1);
            f20 = -2600.0f * (f32)(px < 0.0f ? -1 : 1);
            *(s16 *)(s1 + 0x2C) = func_009B34C0((s32)&px, (s32)&fy, sel, 0, f21, f20, 11417.0f * (f32)(px < 0.0f ? -1 : 1), fy);
            goto store;
        }
        if (mode == 5 || mode == 6) {
            func_00B798F0(&px, &fy, *(u8 *)D_00591E4D);
            t = (px < 0.0f ? -1 : 1);
            f21 = (f32)((t - t * 12) << 8);
            f20 = 1704.0f * (f32)(fy < 0.0f ? -1 : 1);
            *(s16 *)(s1 + 0x2C) = func_009B34C0((s32)&px, (s32)&fy, sel, 0, f21, f20, px, fy);
            goto store;
        }
        if (mode == 3) {
            func_00B798F0(&px, &fy, *(u8 *)D_00591E4D);
            f21 = 6681.0f * (f32)(px < 0.0f ? -1 : 1);
            f20 = -2600.0f * (f32)(fy < 0.0f ? -1 : 1);
            *(s16 *)(s1 + 0x2C) = func_009B34C0((s32)&px, (s32)&fy, sel, 0, f21, f20, px, fy);
            goto store;
        }
        if (mode == 2) {
            func_00B798F0(&px, &fy, *(u8 *)D_00591E4D);
            idx = *(u8 *)D_00591E4D;
            if (idx == 0xFF) idx = 1; else idx = idx % 23;
            s0 = D_0058E5B0 + idx * 576;
            a1 = *(s16 *)(s0 + 0x14);
            if (768.0f < (f32)a1 * px) {
                c0 = idx * 576;
                f21 = px - (f32)(a1 * 1280);
            } else {
                t = (s32)px;
                if (t <= 0) t = -t;
                c0 = (u32)t >> 31;
                t = t / 5 + 0x800;
                f21 = px + (f32)(a1 * t);
            }
            f20 = 4136.0f * (f32)(fy < 0.0f ? -1 : 1);
            if (8217.0f <= (f32)a1 * f21) {
                f21 = 8217.0f * (f32)a1;
                f20 = 2344.0f * (f32)(fy < 0.0f ? -1 : 1);
            }
            *(s16 *)(s1 + 0x2C) = func_009B34C0(c0, a1, sel, 0, f21, f20, px, fy);
            goto store;
        }
        if (mode == 1) {
            func_00B798F0(&px, &fy, *(u8 *)D_00591E4D);
            idx = *(u8 *)D_00591E4D;
            if (idx == 0xFF) idx = 1; else idx = idx % 23;
            s0 = D_0058E5B0 + idx * 576;
            a1 = *(s16 *)(s0 + 0x14);
            if ((f32)a1 * px <= 0.0f) {
                s32 r, d, sg;
                f32 f1;
                r = func_009B34C0(idx, (s32)&fy, sel, 0, px, fy, 13465.0f * (f32)a1, 0.0f) & 0xFFFF;
                d = (r - *(u16 *)(s0 + 0x2A) + 0x10000) & 0xFFFF;
                sg = (d < 0x8001) ? -1 : 1;
                s2 = (r - ((sg << 10) & 0xFFFF)) & 0xFFFF;
                f1 = (f32)*(s16 *)(s0 + 0x14) * px;
                if (f1 <= -9241.0f) {
                    func_00B798F0(&px, &fy, *(u8 *)D_00591E4D);
                    f21 = (f32)((px < 0.0f ? -1 : 1) * 3328);
                    f20 = 1704.0f * (f32)(fy < 0.0f ? -1 : 1);
                    *(s16 *)(s1 + 0x2C) = func_009B34C0((s32)&px, (s32)&fy, sel, 0, f21, f20, px, fy);
                    c0 = (s32)&px;
                    c1 = (s32)&fy;
                    goto m5tail;
                }
                f21 = px + (f32)func_00BBB990(s2, 0x1900);
                f20 = fy + (f32)func_00BBB9C0(s2, 0x1900);
                c0 = s2;
                c1 = 0x1900;
                goto m5call;
            } else {
                s32 d, s4;
                s2 = func_009B34C0(idx, (s32)&fy, sel, 0, px, fy, 13465.0f * (f32)a1, 0.0f) & 0xFFFF;
                f21 = px + (f32)func_00BBB990(s2, 0x700);
                f20 = fy + (f32)func_00BBB9C0(s2, 0x700);
                d = ((s2 & 0xFFFF) - *(u16 *)(s0 + 0x2A) + 0x10000) & 0xFFFF;
                if (d < 0x8001)
                    s2 = (s2 + 0x4000) & 0xFFFF;
                else
                    s2 = (s2 - 0x4000) & 0xFFFF;
                if (7705.0f * (f32)*(s16 *)(s0 + 0x14) <= px)
                    s4 = 0x800;
                else
                    s4 = 0x600;
                f21 = f21 + (f32)func_00BBB990(s2, s4);
                f20 = f20 + (f32)func_00BBB9C0(s2, s4);
                c0 = s2;
                c1 = s4;
            }
        m5call:
        m5tail:
            *(s16 *)(s1 + 0x2C) = func_009B34C0(c0, c1, sel, 0, f21, f20, px, fy);
            {
                s32 x1 = *(u16 *)(s1 + 0x2C);
                s32 d = (*(u16 *)(s0 + 0x2A) - x1 + 0x10000) & 0xFFFF;
                s32 q = !(0x8000 < d);
                *(s16 *)(s1 + 0x2C) = x1 + ((q * 2560) & 0xFFFF);
            }
            goto store;
        }
        if (mode == 7) {
            f20 = -2560.0f;
            f21 = 0.0f;
            *(s16 *)(s1 + 0x2C) = 0xC000;
            goto store;
        }
    }

    f21 = *(f32 *)(s1 + 0x6C);
    f20 = *(f32 *)(s1 + 0x70);
    {
        s32 a2 = *(u8 *)D_005926F2;
        s32 ra = (s32)*(u8 *)s1;
        u32 rb = *(u32 *)D_00591DC4;
        if (a2 != 0) {
            ra = ra % a2;
            rb = rb % (u32)a2;
        }
        if (ra != (s32)rb && a1 == 0) goto store;
    }
    {
        u32 flag = *(u8 *)D_00591F14;
        g = (char *)D_003E7574;
        if (flag != 0) {
            f21 = (f32)((*(f32 *)(g + 0x10) < 0.0f ? -1 : 1) * -768);
            f20 = (f32)((*(f32 *)(g + 0x18) < 0.0f ? -1 : 1) * 768);
        } else {
            if (*(u16 *)(g + 0x84) != 1) goto alt;
            if (*(u16 *)(g + 0x6E) < 2) goto alt;
            f21 = (f32)*(s32 *)D_00591F1C;
            f20 = (f32)*(s32 *)D_00591F20;
        }
    again:
        {
            u32 b = *(u8 *)D_00591E4C;
            if (b == 0) {
                s2 = (flag != 0) ? 0 : 1;
                la1 = 0;
                goto dispatch;
            }
            idx = (b == 0xFF) ? 1 : (s32)b % 23;
            s0 = D_0058E5B0 + idx * 576;
            {
                s32 a3 = *(s16 *)(s0 + 0x14);
                f32 f3 = *(f32 *)(s1 + 0xE0);
                f32 f4 = *(f32 *)(s0 + 0xE0);
                f32 f2 = (f32)a3;
                f32 f1 = f2 * f4;
                if (f1 <= f2 * f3) {
                    f32 h;
                    s2 = 0;
                    la1 = a3 * 4;
                    h = f2 * *(f32 *)(g + *(u8 *)D_005926E4 * 4 + 0x47C);
                    if (!(h <= (f32)(a3 * 2560))) {
                        s2 = 1;
                    } else {
                        s32 go = 0;
                        if (h <= (f32)(a3 << 9)) {
                            go = 1;
                        } else {
                            s32 v = (s32)(*(f32 *)(s1 + 0xE8) - *(f32 *)(g + *(u8 *)D_005926E0 * 4 + 0xB7C));
                            if (v <= 0) v = -v;
                            if (v < 0x600) go = 1; else s2 = 2;
                        }
                        if (go) {
                            s32 v = (s32)(f3 - f4);
                            if (v <= 0) v = -v;
                            if (v < 0x401) {
                                s32 r;
                                r = func_00A09690(s0);
                                r = func_009B30B0(*(u16 *)(s0 + 0x2A), r & 0xFFFF);
                                if ((r & 0xFFFF) < 0x49) s2 = 3;
                            }
                        }
                    }
                    if (s2 == 0) s2 = 3; else s2 = 2;
                } else {
                    s2 = 0;
                    if (f1 < 2816.0f && *(s32 *)(s0 + 0x1C) >= 0x400) {
                        s32 r;
                        r = func_00A09690(s0);
                        r = func_009B30B0(*(u16 *)(s0 + 0x2A), r & 0xFFFF);
                        if ((r & 0xFFFF) >= 0x48) s2 = 1;
                    }
                    {
                        f32 w = (f32)*(s16 *)(s0 + 0x14);
                        if (w * *(f32 *)(s1 + 0xE0) <= (-13465.0f * w) / 3.0f) s2 = 2;
                    }
                    if (s2 == 0) s2 = 5; else s2 = 4;
                }
            }
        }
    dispatch:
        if (s2 == 1) {
            s32 r = func_009B3480(s1, la1, f21, *(f32 *)(s1 + 0xE8)) & 0xFFFF;
            f21 = f21 + (f32)func_00BBB990((r + 0x7FFF + 1) & 0xFFFF, 0x800);
        } else if (s2 == 5) {
            s32 a0v = *(s16 *)(s0 + 0x14);
            f21 = f21 - (f32)((a0v * 3) << 9);
        } else if (s2 == 4) {
            f21 = f21 + (f32)(*(s16 *)(s0 + 0x14) << 10);
        } else if (s2 == 3) {
            s32 a0v = *(s16 *)(s0 + 0x14);
            f21 = f21 + (f32)((a0v * 5) << 9);
        } else if (s2 == 2) {
            f21 = f21 - (f32)(*(s16 *)(s0 + 0x14) << 9);
        }
        {
            f32 f1 = *(f32 *)(s1 + 0xE8) - f20;
            sg = (f1 < 0.0f) ? -1 : 1;
            f22 = (f32)((sg * 5) << 9);
            f23 = f20 + f22;
        }
        if (s2 == 2 || s2 == 4) {
            s32 r;
            s32 r2;
            r = func_00A09690(s0);
            r2 = func_009B3480(s0, sg, f21, f23);
            s0 = (char *)(u32)(r & 0xFFFF);
            func_009B30B0((s32)s0, r2 & 0xFFFF);
        } else {
            if (*(u16 *)((char *)D_003E7574 + 0x84) == 1) {
                s32 r = func_009B3480(s1, sg, f21, f23) & 0xFFFF;
                r = func_009B30B0(*(u16 *)((char *)D_003E7574 + 0x58), r) & 0xFFFF;
                if (r < 0x11 || !(r < 0x70)) f22 = f22 * -1.0f;
            }
        }
        {
            f32 f3 = 9241.0f;
            f32 f2 = 5160.0f;
            f32 f1 = f2 + (f2 * -(f3 + f21)) / f3;
            f32 f0;
            f1 = f1;
            f20 = f20 + f22;
            f0 = f1 - 4096.0f;
            if (f20 < f0) f20 = f0;
            f0 = f1 + 4096.0f;
            if (!(f20 <= f0)) f20 = f0;
        }
        {
            s32 v = (s32)f21;
            if (v <= 0) v = -v;
            if (!((f32)v < 6681.0f))
                f21 = 6681.0f * (f32)(f21 < 0.0f ? -1 : 1);
            v = (s32)f20;
            if (v <= 0) v = -v;
            if ((f32)v <= 5160.0f) goto store;
            f20 = 5160.0f * (f32)(f20 < 0.0f ? -1 : 1);
        }
        goto store;
    alt:
        {
            s32 a3 = *(s32 *)D_00591F30;
            if (a3 != 0x7FFF && *(u8 *)D_00591E4C == 0) {
                f21 = (f32)a3;
                f20 = f21;
            } else {
                f20 = *(f32 *)(g + *(u8 *)D_005926E6 * 4 + 0xB7C);
                f21 = *(f32 *)(g + *(u8 *)D_005926E6 * 4 + 0x47C);
            }
            goto again;
        }
    }
store:
    *(f32 *)(s1 + 0x6C) = f21;
    *(f32 *)(s1 + 0x70) = f20;
}
