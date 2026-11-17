/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001A54F0(f32 *);
extern void func_002871C0(f32 *);
extern s32 func_002BE420(void);
extern s32 func_009B45F0(void);
extern s32 func_00270570(void);
extern s32 func_009E1C90(s32);
extern s32 func_002AE670(s32);
extern f32 *func_002A96B0(s32);
extern void func_00270530(void *, f32 *, s32);
extern f32 func_001CD9E0(f32);
extern void func_00B798F0(f32 *, f32 *, s32);
extern void func_001A5670(void *, f32);
extern void func_001A56D0(f32, f32);

extern char D_003A89F0[];
extern char D_00592743[];
extern char D_0059274A[];
extern char D_00591F24[];
extern char D_00592742[];
extern char D_00591E4C[];
extern char D_00591E57[];
extern char D_00591DB5[];
extern char D_0059274C[];
extern char D_0059273C[];
extern char D_0058E5B0[];
extern char D_00591E4D[];
extern char D_00592746[];
extern char D_00591F38[];
extern char D_00591F30[];
extern char D_00591F34[];
extern u8 D_003E9994;
extern u8 D_003E9998;
extern u8 D_003E99B8;
extern u8 D_003E99A0;
extern f32 D_003E9CA0;
extern f32 *D_003E74CC;
extern u8 *D_003E7574;

void func_00200120(f32 *out, s32 flag) {
    f32 p9c;
    f32 p98;
    f32 v88[3];
    f32 v78[3];
    f32 v60[4];
    s32 s0;
    s16 *s1;
    f32 *vp;
    s32 t;
    s32 i;
    s32 idx;
    s32 lim;
    s32 o2;
    f32 f;
    f32 g;
    f32 k;
    f32 f6;
    s32 st;

    func_001A54F0(v88);
    func_002871C0(v78);
    s0 = func_002BE420() & 0xffff;
    st = *(u8 *)D_00592743;
    *(s16 *)D_0059274A = 0x4000;
    s1 = (s16 *)(D_003A89F0 + st * 18);
    if (st == 7) {
        t = *(u8 *)D_00591F24;
        if (t == 3 || t == 6 || t == 2 || t == 1) {
            if (func_009B45F0() == 0 && func_00270570() == 0 && (func_009E1C90(1) & 0xff) == 14
                && (func_009E1C90(2) & 0xff) == 16) {
                if (*(u8 *)D_00592743 == 6 || *(u8 *)D_00592743 == 7) {
                    D_003E99B8 = 0;
                    D_003E9998 = 0;
                    D_003E9994 = 0;
                }
            }
        }
    }
    func_001A5670(D_003A89F0, 1960.0f);
    if (*(u8 *)D_00592743 == 6) {
        D_003E9994 = 0;
    }
    if (D_003E9994 != 0) {
        D_003E99B8 = D_003E99B8 + 1;
    }
    if (D_003E9994 == 3) {
        func_001A56D0(512.0f, 16000.0f);
    } else {
        func_001A56D0(50.0f, 16000.0f);
    }
    if (!(D_003E9CA0 <= 60.0f)) {
        D_003E9CA0 = 60.0f;
    }

    st = *(u8 *)D_00592742;
    if (st == 3) {
        t = *(u8 *)D_00591F24;
        if (t == 7 || t == 2) {
            func_001A5670(D_003A89F0, 1960.0f);
            if (*(u8 *)D_00591F24 == 2 && func_009B45F0() == 0 && func_00270570() == 0
                && (func_009E1C90(1) & 0xff) == 14 && (func_009E1C90(2) & 0xff) == 16) {
                func_00B798F0(&p9c, &p98, *(u8 *)D_00591E4D);
            } else {
                p9c = v78[0];
                p98 = v78[2];
            }
        } else {
            i = *(u8 *)D_00591E4D;
            idx = (i == 0xff) ? 1 : i % 23;
            i = s1[0] * *(s16 *)(D_0058E5B0 + idx * 576 + 0x14);
            *(s16 *)D_0059274C = i;
            if (t == 6 && func_009B45F0() == 0 && func_00270570() == 0 && (func_009E1C90(1) & 0xff) == 14
                && (func_009E1C90(2) & 0xff) == 16) {
                func_00B798F0(&p9c, &p98, *(u8 *)D_00591E4D);
                p9c = p9c + (f32)*(s16 *)D_0059274C;
            } else {
                p98 = v78[2];
                p9c = v78[0] + (f32)*(s16 *)D_0059274C;
            }
        }
        lim = s1[7];
        f = (f32)lim;
        if (f < p9c) {
            p9c = f;
        } else {
            lim = -lim;
            f = (f32)lim;
            if (p9c < f) {
                p9c = f;
            }
        }
        f = (f32)s1[6];
        if (f < p98) {
            p98 = f;
        } else {
            f = (f32)s1[5];
            if (p98 < f) {
                i = (s32)v78[0];
                if (i < 0) i = -i;
                if (i - 0x2219 > 0) {
                    lim = (s32)v78[2];
                    if (lim < 0) lim = -lim;
                    g = (f32)lim;
                    i = (s32)v78[0];
                    if (i < 0) i = -i;
                    f = (f32)i;
                    f = 8729.0f - f;
                    g = 4648.0f - g;
                    lim = (s32)func_001CD9E0(g * g + f * f);
                    p98 = (f32)s1[5] - 0.5f * (f32)lim;
                } else {
                    p98 = (f32)s1[5];
                }
            }
        }
        vp = func_002A96B0(0);
        out[0] = vp[0];
        out[1] = vp[1];
        out[2] = vp[2];
        t = *(u8 *)D_00591F24;
        if (t == 7 || t == 2) {
            out[4] = p9c;
            out[5] = (f32)s1[1];
            out[6] = p98;
        } else if (flag != 0) {
            out[4] = (0.0f + p9c + 5.0f * out[4]) / 6.0f;
            out[5] = (0.0f + (f32)s1[1] + 5.0f * out[5]) / 6.0f;
            out[6] = (0.0f + p98 + 5.0f * out[6]) / 6.0f;
        } else {
            out[4] = p9c;
            out[5] = (f32)s1[1];
            out[6] = p98;
        }
        *(s16 *)D_00592746 = 0;
    } else if (st == 1) {
        if (D_003E9994 == 3) {
            D_003E9998 = 0;
            func_001A5670(D_003A89F0, 6050.0f);
        } else {
            D_003E9998 = 0;
        }
        if (*(s32 *)D_0059273C != 0) {
            *(s16 *)D_00592746 = 0;
        } else if (*(s32 *)D_00591F38 == 0x7FFFF) {
            *(u8 *)D_00592742 = 0;
        } else {
            f = (f32)*(s16 *)D_0059274C;
            f = v78[0] + f;
            p9c = (0.0f + (f32)(3 * *(s32 *)D_00591F30) + 7.0f * f) / 10.0f;
            p98 = (v78[2] + (f32)*(s32 *)D_00591F34) / 2.0f;
            f = (f32)s1[7];
            if (f < p9c) {
                p9c = f;
            } else {
                lim = -(s32)s1[7];
                g = (f32)lim;
                if (p9c < g) {
                    p9c = g;
                }
            }
            f = (f32)s1[6];
            if (f < p98) {
                p98 = f;
            } else {
                f = (f32)s1[5];
                if (p98 < f && D_003E9994 == 0) {
                    p98 = f;
                }
            }
            if (flag == 0) {
                D_003E9CA0 = 0.0f;
            } else {
                D_003E9CA0 = 15.0f;
            }
            f = (f32)(s32)p9c;
            out[4] = (0.0f + f + v88[0] * D_003E9CA0) / (1.0f + D_003E9CA0);
            f = (f32)s1[1];
            out[5] = (0.0f + f + v88[1] * D_003E9CA0) / (1.0f + D_003E9CA0);
            f = (f32)(s32)p98;
            g = 10.0f + D_003E9CA0;
            k = 10.0f + (1.0f + D_003E9CA0);
            out[6] = (0.0f + f + v88[2] * g) / k;
            if (D_003E9994 != 0) {
                s0 = D_003E99B8;
                if (func_002AE670(60) < s0) {
                    vp = func_002A96B0(0);
                    out[0] = vp[0];
                    out[1] = vp[1];
                    out[2] = vp[2];
                    func_001A5670(D_003A89F0, 1960.0f);
                    D_003E9994 = 0;
                    func_001A56D0(50.0f, 16000.0f);
                }
            } else {
                vp = func_002A96B0(0);
                out[0] = vp[0];
                out[1] = vp[1];
                out[2] = vp[2];
            }
        }
    } else if (st == 0) {
        if (*(u8 *)D_00591E4C == 0) {
            s0 = 0;
        }
        if (*(u8 *)D_00592743 == 7) {
            t = D_003E9994;
            if (t == 4) {
                if (s0 < func_002AE670(100)) {
                    goto L740;
                }
                i = (s32)v78[2];
                if (i < 0) i = -i;
                f = (f32)i;
                if (f < 4392.0f) {
                    i = (s32)v78[0];
                    if (i < 0) i = -i;
                    f = (f32)i;
                    if (!(f <= 9241.0f)) {
                        goto L7B0;
                    }
                }
                goto L740;
            } else if (t == 3) {
                func_001A5670(D_003A89F0, 6050.0f);
                if (s0 < func_002AE670(100)) {
                    goto L740;
                }
                if (v78[2] < -4904.0f) {
                    goto L7B0;
                }
                goto L740;
            } else if (t == 2) {
                if (!(v78[0] < 3072.0f) || v78[0] <= -3072.0f || v78[2] <= 4904.0f) {
                    goto L554;
                }
                goto L7B0;
            } else if (t == 1) {
                if ((v78[0] < 9241.0f && !(v78[0] <= -9241.0f)) || v78[2] < 4904.0f) {
                    goto L554;
                }
                goto L7B0;
            } else if (t == 0) {
                D_003E99B8 = 0;
                D_003E9998 = 0;
                if (!(v78[2] <= 4904.0f) && func_002AE670(60) < s0) {
                    f = v78[0];
                    if (f <= 9241.0f && !(f < -9241.0f)) {
                        if (f < 3072.0f) {
                            if (!(f <= -3072.0f)) {
                                D_003E9998 = 5;
                                D_003E9994 = 2;
                            }
                        }
                    } else {
                        D_003E9998 = (f <= 9241.0f) ? 4 : 6;
                        D_003E9994 = 1;
                    }
                    goto L7B0;
                }
                if (v78[2] < -4904.0f && !(func_002AE670(100) < s0)) {
                    out[6] = v88[2];
                    D_003E9998 = 0;
                    func_001A5670(D_003A89F0, 6050.0f);
                    D_003E9994 = 3;
                }
                goto L7B0;
            } else {
                D_003E9998 = 0;
                goto L7B0;
            }
        L554:
            s0 = D_003E99B8;
            if (func_002AE670(90) < s0) {
                D_003E9998 = 0;
                D_003E9994 = 0;
            }
            goto L7B0;
        L740:
            s0 = D_003E99B8;
            if (func_002AE670(90) < s0) {
                f = (f32)s1[5];
                if (v78[2] < f) {
                    out[6] = v88[2];
                } else {
                    g = (f32)s1[6];
                    if (v78[2] <= g) {
                        out[6] = v78[2];
                    } else {
                        out[6] = g;
                    }
                }
                D_003E9994 = 0;
                D_003E99B8 = 0;
                func_001A5670(D_003A89F0, 1960.0f);
                D_003E9998 = 0;
            }
        L7B0:
            vp = func_002A96B0(D_003E9998);
        } else {
            vp = func_002A96B0(0);
        }
        out[0] = vp[0];
        out[1] = vp[1];
        out[2] = vp[2];

        /* common part */
        i = *(u8 *)D_00591E57;
        idx = (i == 0xff) ? 1 : i % 23;
        vp = (f32 *)(D_0058E5B0 + idx * 576);
        o2 = idx * 576;
        t = D_003E9998;
        if (D_003E99A0 != t && t != 0) {
            out[4] = v78[0];
            *(u32 *)&out[5] = 0xC3440000;
            out[6] = v78[2];
        }
        D_003E99A0 = t;
        if (*(s8 *)D_00591DB5 == 0) {
            if (D_003E9994 != 0) {
                *(s16 *)D_0059274C = 0;
            } else if (((u8 *)vp)[0x13] == 0) {
                f = (f32)*(s16 *)D_0059274C;
                i = (s32)(0.0f + f + 24.0f * *D_003E74CC);
                *(s16 *)D_0059274C = i;
                if (!((s16)i < s1[0])) {
                    *(s16 *)D_0059274C = s1[0];
                }
            } else {
                f = (f32)*(s16 *)D_0059274C;
                lim = -(s32)s1[0];
                i = (s32)(0.0f + f - 24.0f * *D_003E74CC);
                *(s16 *)D_0059274C = i;
                if (!(lim < (s16)i)) {
                    *(s16 *)D_0059274C = lim;
                }
            }
        }

        if (*(u8 *)D_00591E4C != 0 && *(s32 *)D_0059273C == 0) {
            i = *(u8 *)D_00591E4C;
            idx = (i == 0xff) ? 1 : i % 23;
            func_00270530(D_0058E5B0 + idx * 576, v60, o2);
            f = v60[2] - v78[2];
            g = v60[0] - v78[0];
            s0 = (s32)func_001CD9E0(f * f + g * g);
            if (!(s0 >= 0x180 && func_009B45F0() == 0 && func_00270570() == 0)) {
                p98 = v60[2];
                p9c = v60[0] + (f32)*(s16 *)D_0059274C;
            } else {
                if (s0 < 0x481) {
                    f6 = (f32)(0x480 - s0) / 76.8f;
                } else {
                    f6 = 0.0f;
                }
                if (flag != 0) {
                    k = 10.0f;
                    f = k - f6;
                    g = v78[0] * f + v60[0] * f6;
                    p98 = (v78[2] * f + v60[2] * f6) / k;
                    p9c = (f32)*(s16 *)D_0059274C + g / k;
                } else {
                    p98 = v78[2];
                    p9c = v78[0] + (f32)*(s16 *)D_0059274C;
                }
                if (s0 >= 0x281) {
                    if (*(u16 *)(D_003E7574 + 0x84) == 5) {
                        D_003E9CA0 = 60.0f;
                        *(u8 *)D_00591E4C = 0;
                    }
                }
            }
        } else {
            p98 = v78[2];
            p9c = v78[0] + (f32)*(s16 *)D_0059274C;
        }

        t = *(u8 *)D_00591F24;
        if (t == 6 || t == 2) {
            if (func_009B45F0() == 0 && func_00270570() == 0 && (func_009E1C90(1) & 0xff) == 14
                && (func_009E1C90(2) & 0xff) == 16) {
                func_00B798F0(&p9c, &p98, *(u8 *)D_00591E4D);
            }
        }
        if (D_003E9994 != 0) {
            lim = s1[7] + 0x500;
            f = (f32)lim;
            if (f < p9c) {
                p9c = f;
            } else {
                lim = -lim;
                f = (f32)lim;
                if (p9c < f) {
                    p9c = f;
                }
            }
        } else {
            lim = s1[7];
            f = (f32)lim;
            if (f < p9c) {
                p9c = f;
            } else {
                lim = -lim;
                f = (f32)lim;
                if (p9c < f) {
                    p9c = f;
                }
            }
        }
        f = (f32)s1[6];
        if (f < p98) {
            p98 = f;
        } else {
            f = (f32)s1[5];
            if (p98 < f && D_003E9994 == 0) {
                i = (s32)v78[0];
                if (i < 0) i = -i;
                if (i < 0x2419) {
                    p98 = (f32)s1[5];
                } else {
                    lim = (s32)v78[2];
                    if (lim < 0) lim = -lim;
                    g = (f32)lim;
                    f = (f32)i;
                    f = 8729.0f - f;
                    g = 4648.0f - g;
                    lim = (s32)func_001CD9E0(g * g + f * f);
                    p98 = (f32)s1[5] - 0.3f * (f32)lim;
                }
            }
        }

        if (*(s32 *)D_0059273C != 0) {
            if (D_003E9CA0 <= 16.0f) {
                D_003E9CA0 = 16.0f;
            } else {
                D_003E9CA0 = D_003E9CA0 - 1.0f;
            }
        } else {
            if (D_003E9CA0 <= 10.0f) {
                D_003E9CA0 = 10.0f;
            } else {
                D_003E9CA0 = D_003E9CA0 - 1.0f;
            }
        }

        if (D_003E9994 != 0) {
            if (flag != 0) {
                out[4] = (0.0f + p9c + 2.0f * v88[0]) / 3.0f;
                out[5] = (0.0f + (f32)s1[1] + v88[1] * D_003E9CA0) / (1.0f + D_003E9CA0);
                out[6] = (0.0f + p98 + v88[2] * D_003E9CA0) / (1.0f + D_003E9CA0);
            } else {
                out[4] = p9c;
                out[5] = (f32)s1[1];
                out[6] = p98;
            }
        } else if (flag != 0) {
            out[4] = (0.0f + p9c + v88[0] * D_003E9CA0) / (1.0f + D_003E9CA0);
            out[5] = (0.0f + (f32)s1[1] + v88[1] * D_003E9CA0) / (1.0f + D_003E9CA0);
            i = (s32)v78[0];
            if (i < 0) i = -i;
            f = (f32)i;
            if (!(f <= 7193.0f) && v78[2] < -4648.0f) {
                k = 180.0f;
            } else {
                k = 20.0f;
            }
            out[6] = (0.0f + p98 + v88[2] * (k + D_003E9CA0)) / (k + (1.0f + D_003E9CA0));
        } else {
            out[4] = p9c;
            out[5] = (f32)s1[1];
            out[6] = p98;
        }
    }
}
