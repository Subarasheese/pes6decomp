/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_008B142D[];
extern char D_00591E4C[];
extern char D_00591E19[];
extern char D_00591E18[];
extern char D_00591E57[];
extern char D_00591E67[];
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];
extern char D_00591F30[];
extern char D_00591F38[];
extern char D_00592742[];
extern char D_005926E2[];
extern char D_00591BE4[];
extern char D_00591BF8[];
extern char D_00591C00[];
extern char D_0058E5B0[];
extern char D_003AB9C0[];
extern char D_003AB9C4[];
extern char D_003AB9C8[];
extern char D_003AB9CC[];
extern char D_00375B30[];
extern char *D_003E7574;
extern f32 *D_003E74CC;

extern s32 func_002DCA30(void);
extern s32 func_008481D0(void);
extern f32 func_0084B4C0(s32 a);
extern f32 func_0011D238(f32 x);
extern void func_00103FF8(void *out, void *in, f32 ang);
extern void func_001040A0(void *out, void *in, f32 ang);
extern void func_0012BB50(void *out, void *axis, f32 ang);
extern void func_0012BFE0(void *a, void *b, void *c);
extern s32 func_00BBB990(s32 a, s32 b);
extern s32 func_00BBB9C0(s32 a, s32 b);
extern s32 func_00BBB8C0(s32 a);
extern s32 func_002953D0(void);
extern f32 func_00295540(void);
extern f32 func_001CD9E0(f32 x);
extern s32 func_00288580(void);
extern void func_00991D60(void);
extern s16 *func_009B0970(void);
extern void func_0027D650(s32 a);
extern void func_009B3560(void *a, s32 b, s32 c, s32 d, f32 e);
extern void func_009B36C0(void *a, s32 b, s32 c, s32 d, s32 e);
extern f32 fabsf(f32 x);

void Pes6Ball_IntegratePhysics(s32 skip, u8 *state, f32 dt, s32 *spd, f32 *pa, f32 *px, f32 *py, f32 *pz, u16 *ang,
                   s32 *lat, u16 *cnt, u8 *dir)
{
    f32 loc[3] = {0.0f, 0.0f, 0.0f};
    f32 vec[4] __attribute__((aligned(16)));
    f32 mat[16] __attribute__((aligned(16)));
    f32 buf[4] __attribute__((aligned(16)));
    char *cam;
    char *g;
    char *obj;
    char *e;
    s32 s5, t, a0, a1, a2, sold, base;
    f32 x, y, f, fadd, d20, d21, d22;
    u16 dd;
    s16 *p16;

    if (dt == 0.0f) {
        dt = 1.0f;
    }
    if (func_002DCA30() != 0 && func_008481D0() != 0 && *(s8 *)D_008B142D == 0) {
        f = func_0084B4C0(1);
        dt = dt * (1.0f / f);
        if (*state == 3) {
            if (*(u8 *)D_00591E4C == 0) {
                *(u8 *)D_00591E4C = *(u8 *)D_00591E19;
            }
        }
    }

    if (*state == 2) {
        goto state2;
    }
    if (*state == 3) {
        goto state3;
    }
    if (*state == 1) {
        goto state1;
    }
    if (*state != 4) {
        *spd = 0;
        *pa = 0.0f;
        *py = -28.0f;
        return;
    }

    /* state 4 */
    if (skip == 0) {
        g = D_003E7574;
        if (*(s32 *)(g + 0x80) != 0) {
            d20 = (f32)(-*lat);
            d21 = (f32)(u32)*ang;
            cam = *(char **)g;
            x = 0.0f;
            vec[0] = *(f32 *)D_003AB9C0;
            vec[1] = *(f32 *)D_003AB9C4;
            vec[2] = *(f32 *)D_003AB9C8;
            vec[3] = *(f32 *)D_003AB9CC;
            x = x - func_0011D238(x);
            if (!(x <= 0.5f)) {
                x -= 1.0f;
            }
            func_00103FF8(mat, D_00375B30, 3.14159274f * (2.0f * x));
            __asm__ volatile("lqc2 $vf8, 0x0(%0)\n lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x10(%1)\n lqc2 $vf6, 0x20(%1)\n lqc2 $vf7, 0x30(%1)\n vmulax.xyzw ACC, $vf4, $vf8x\n vmadday.xyzw ACC, $vf5, $vf8y\n vmaddaz.xyzw ACC, $vf6, $vf8z\n vmaddw.xyzw $vf8, $vf7, $vf8w\n sqc2 $vf8, 0x0(%0)" : : "r"(vec), "r"(mat) : "memory");
            d21 = 0.159154937f * (-9.58738019e-05f * d21);
            d21 = d21 - func_0011D238(d21);
            if (!(d21 <= 0.5f)) {
                d21 -= 1.0f;
            }
            func_001040A0(mat, D_00375B30, 3.14159274f * (2.0f * d21));
            __asm__ volatile("lqc2 $vf8, 0x0(%0)\n lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x10(%1)\n lqc2 $vf6, 0x20(%1)\n lqc2 $vf7, 0x30(%1)\n vmulax.xyzw ACC, $vf4, $vf8x\n vmadday.xyzw ACC, $vf5, $vf8y\n vmaddaz.xyzw ACC, $vf6, $vf8z\n vmaddw.xyzw $vf8, $vf7, $vf8w\n sqc2 $vf8, 0x0(%0)" : : "r"(vec), "r"(mat) : "memory");
            func_0012BB50(buf, vec, d20 / 10240.0f);
            func_0012BFE0(cam + 0x40, buf, cam + 0x40);
        }
    }
    if (*pa != 0.0f || *py < -36.0f) {
        *state = 1;
    } else {
        *state = 2;
    }
    return;

state1:
    if (*cnt != 0) {
        dd = (u16)(u32)(((2048.0f * dt) * (f32)*spd) / (f32)((*cnt * 7) << 12));
        if (*dir != 0) {
            *ang = *ang + dd;
        } else {
            *ang = *ang - dd;
        }
    }
    if (skip == 0) {
        loc[1] = (f32)(u32)*ang;
    }
    *px = *px + dt * ((f32)func_00BBB990(*ang, *spd) / 256.0f);
    *py = *py + (*pa / 256.0f) * dt;
    *pz = *pz + dt * ((f32)func_00BBB9C0(*ang, *spd) / 256.0f);
    if (*py < -64.0f) {
        s5 = (u16)func_002953D0();
        f = func_00295540();
        t = (s32)((256.0f * f) / (f32)(*(u8 *)D_00591BE4 * 10));
        *px = *px + dt * (f32)func_00BBB990(s5, t);
        *pz = *pz + dt * (f32)func_00BBB9C0(s5, t);
    }
    if (skip == 0) {
        if (*cnt != 0) {
            s5 = 0x3A980 / *cnt;
            if (*lat != 0) {
                if (s5 * 2 < 0x3A99) {
                    loc[0] = (f32)(s5 * 2);
                } else {
                    loc[0] = 15000.0f;
                }
                s5 = (s32)func_001CD9E0((f32)(s5 * s5 + *lat * *lat));
            } else {
                loc[0] = 15000.0f;
            }
            if (*dir == 0) {
                loc[0] = -loc[0];
            }
        } else {
            s5 = *lat;
            loc[0] = 0.0f;
            if (s5 <= 0) {
                s5 = -s5;
            }
        }
        if (*lat > 0) {
            s5 = -s5;
            loc[0] = -loc[0];
        }
        vec[0] = *(f32 *)D_003AB9C0;
        vec[1] = *(f32 *)D_003AB9C4;
        vec[2] = *(f32 *)D_003AB9C8;
        vec[3] = *(f32 *)D_003AB9CC;
        cam = *(char **)D_003E7574;
        d22 = loc[1];
        x = 0.159154937f * (9.58738019e-05f * loc[0]);
        x = x - func_0011D238(x);
        if (!(x <= 0.5f)) {
            x -= 1.0f;
        }
        func_00103FF8(mat, D_00375B30, 3.14159274f * (2.0f * x));
        __asm__ volatile("lqc2 $vf8, 0x0(%0)\n lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x10(%1)\n lqc2 $vf6, 0x20(%1)\n lqc2 $vf7, 0x30(%1)\n vmulax.xyzw ACC, $vf4, $vf8x\n vmadday.xyzw ACC, $vf5, $vf8y\n vmaddaz.xyzw ACC, $vf6, $vf8z\n vmaddw.xyzw $vf8, $vf7, $vf8w\n sqc2 $vf8, 0x0(%0)" : : "r"(vec), "r"(mat) : "memory");
        y = 0.159154937f * (-9.58738019e-05f * d22);
        y = y - func_0011D238(y);
        if (!(y <= 0.5f)) {
            y -= 1.0f;
        }
        func_001040A0(mat, D_00375B30, 3.14159274f * (2.0f * y));
        __asm__ volatile("lqc2 $vf8, 0x0(%0)\n lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x10(%1)\n lqc2 $vf6, 0x20(%1)\n lqc2 $vf7, 0x30(%1)\n vmulax.xyzw ACC, $vf4, $vf8x\n vmadday.xyzw ACC, $vf5, $vf8y\n vmaddaz.xyzw ACC, $vf6, $vf8z\n vmaddw.xyzw $vf8, $vf7, $vf8w\n sqc2 $vf8, 0x0(%0)" : : "r"(vec), "r"(mat) : "memory");
        func_0012BB50(buf, vec, (f32)s5 / 10240.0f);
        func_0012BFE0(cam + 0x40, buf, cam + 0x40);
    }

    if (!(*pa <= 0.0f) && (-28.0f - (*pa * dt) / 1024.0f <= *py)) {
        goto a80;
    }
    if (*py <= -28.0f) {
        goto f50;
    }
a80:
    if (skip == 0) {
        *(s32 *)D_00591F38 = 0x7FFF;
        *(s32 *)D_00591F30 = 0x7FFF;
        func_00991D60();
    }
    s5 = ((s32)((f32)*spd / fabsf(1.0f + *pa))) << 1;
    if (s5 >= 0x1D) {
        s5 = 0x1C;
    }
    if (func_00288580() != 0) {
        s5 = s5 + 2;
    }
    sold = *spd;
    t = 0x28 - s5;
    a0 = sold * t;
    *spd = *spd - a0 / 256;
    if (!(*pa <= 6016.0f)) {
        a2 = (s32)(8.0f * (f32)(s32)(*pa - 6016.0f) / 10.0f);
        a0 = (*spd << 2) / 10;
        if (a0 < a2) {
            a2 = a0;
        }
        *spd = *spd - a2;
    }
    g = D_003E7574;
    a0 = *(s32 *)(g + 0x50) / 512;
    a1 = a0 + 0x88;
    if (a1 >= 0xA1) {
        a1 = 0xA0;
    }
    if (*pa < 9024.0f) {
        *pa = (-(*pa * (f32)a1)) / 256.0f;
    } else {
        a0 = (a1 * 0x2340) / 256;
        *pa = (-(184.0f * (*pa - 9024.0f))) / 256.0f;
        *pa = *pa - (f32)a0;
    }
    *py = -28.0f;
    if (*cnt != 0) {
        a2 = 0xC000 / (s32)*cnt;
        a1 = *spd;
        if (a1 < 0x4001) {
            a1 = (a2 * (0x5000 - a1)) / 6144;
        } else {
            a1 = a1 - 0x3000;
            a0 = a1 / 4096;
            a1 = a2 / a0;
        }
        if (a1 >= 0xC001) {
            a1 = 0xC000;
        }
        if (*dir != 0) {
            *ang = *ang + (u16)a1;
        } else {
            *ang = *ang - (u16)a1;
        }
        *cnt = *cnt + 0x40;
    }
    a1 = *spd / 2;
    a0 = (t + 0x1C) / 2;
    a2 = a1 - *lat;
    a2 = a2 / 8;
    a2 = a0 * (a2 * a2);
    a2 = a2 / 512;
    a0 = a2 / 28;
    if (*lat - a1 < 0) {
        *spd = *spd - a0;
    } else {
        *spd = *spd + a0;
    }
    *pa = *pa - (f32)(((sold - *spd) * 28) / 256);
    a1 = *spd / 2;
    t = a1 / 2 + (*lat * 8) / 10 + 0x400;
    if (a1 < t) {
        t = a1;
    }
    *lat = t;
    if (skip == 0) {
        *(u8 *)D_00592742 = 0;
    }
    if (*spd < 0) {
        p16 = func_009B0970();
        p16[1] = 0;
        *ang = *ang + 0x8000;
        *spd = (-*spd * 7) / 10;
        *lat = (-*lat * 4) / 10;
    }
    if (*pa > -376.0f * *D_003E74CC) {
        *pa = 0.0f;
        *state = 2;
    }
    goto common;

f50:
    *pa = *pa + dt * (188.0f + ((f32)*spd * ((f32)(*lat * *spd) / *(f32 *)D_00591C00)) / 24576.0f);

common:
    a2 = (s32)func_001CD9E0((f32)(*spd * *spd) + *pa * *pa);
    if (a2 >= 0x5801) {
        a2 = a2 - 0x2333;
    }
    a1 = *spd;
    *spd = (s32)((f32)a1 - dt * ((f32)(a2 * a1) / *(f32 *)D_00591BF8));
    *pa = *pa - dt * (((f32)a2 * *pa) / *(f32 *)D_00591BF8);
    if (*spd < 0) {
        *spd = 0;
    }
    return;

state3:
    a0 = *(u8 *)D_00591E4C;
    if (a0 == 0) {
        a0 = *(u8 *)D_00591E18;
    }
    if (a0 == 0xFF) {
        a0 = 1;
    } else {
        a0 = a0 % 23;
    }
    e = D_0058E5B0 + a0 * 0x240;
    if (skip != 0) {
        *state = 2;
        a0 = *(u8 *)D_00591E4C;
        if (a0 == 0xFF) {
            a0 = 1;
        } else {
            a0 = a0 % 23;
        }
        *ang = *(u16 *)(D_0058E5B0 + a0 * 0x240 + 0x28);
        goto state2;
    }
    base = *(u8 *)(e + 0x12);
    D_00591E67[base] = 0;
    D_00591E67[base ^ 1] = 1;
    *ang = *(u16 *)(e + 0x26);
    loc[1] = (f32)(u32)*ang;
    *spd = *(s32 *)(e + 0x1C);
    *pa = 0.0f;
    *lat = 0;
    func_0027D650(0);
    a2 = *(u8 *)D_00591E18;
    *(u8 *)D_00591E4C = a2;
    *(u8 *)D_00592742 = 0;
    *(u8 *)D_00591E57 = a2;
    *(s32 *)D_00591F30 = 0x7FFF;
    *(s32 *)D_00591F38 = 0x7FFF;
    obj = *(char **)(e + 4);
    func_009B3560(e, *(u16 *)(obj + 0x30), *(u16 *)(e + 0x26), *(u8 *)(obj + 0x2D), *(f32 *)(obj + 0x38));
    obj = *(char **)(e + 4);
    fadd = 0.0f;
    a1 = 0;
    if (*(u8 *)(obj + 0x4C) != 0) {
        a0 = *(u16 *)(obj + 0x30);
        if (a0 == 0x27F || a0 == 0x3E7 || a0 == 0x281) {
            fadd = *(f32 *)(obj + 0x48);
            a1 = 1;
        } else if (a0 == 0x3AC) {
            a1 = 1;
        }
    }
    if (a1 == 1) {
        d22 = *(f32 *)D_00591E70;
        d21 = *(f32 *)D_00591E74;
        d20 = *(f32 *)(obj + 0x48) + fadd;
        x = *(f32 *)D_00591E6C;
        if (!(d20 < 1.0f)) {
            d20 = 1.0f;
        }
        func_009B36C0(e, *(u16 *)(obj + 0x3C), (s32)*(f32 *)(obj + 0x40), *(u16 *)(obj + 0x44), *(u8 *)(obj + 0x46));
        *(f32 *)D_00591E6C = x * d20 + *(f32 *)D_00591E6C * (1.0f - d20);
        *(f32 *)D_00591E70 = d22 * d20 + *(f32 *)D_00591E70 * (1.0f - d20);
        *(f32 *)D_00591E74 = d21 * d20 + *(f32 *)D_00591E74 * (1.0f - d20);
    }
    a0 = *(u16 *)(*(char **)(e + 4) + 0x30);
    if (a0 == 0x238 || a0 == 0x333 || a0 == 0x6F || a0 == 0) {
        *py = -28.0f;
        return;
    }
    g = D_003E7574;
    a1 = *(u8 *)D_005926E2;
    a0 = *(u8 *)(g + 0x66);
    if (a1 < a0) {
        *px = *(f32 *)D_00591E6C;
        *py = *(f32 *)D_00591E70;
        *pz = *(f32 *)D_00591E74;
    } else {
        a2 = a1 + 1 - a0;
        x = (f32)a2;
        y = (f32)(a2 + 1);
        *px = (*(f32 *)D_00591E6C + *px * x) / y;
        *py = (*(f32 *)D_00591E70 + *py * x) / y;
        *pz = (*(f32 *)D_00591E74 + *pz * x) / y;
    }
    g = D_003E7574;
    a0 = *(u8 *)(g + 0x66);
    if (a0 < 0x20) {
        *(u8 *)(g + 0x66) = a0 + 1;
    }
    return;

state2:
    a0 = *spd;
    *spd = (s32)((f32)a0 - dt * ((f32)(a0 - *lat) / 32.0f));
    *lat = (s32)((f32)*lat + (f32)(*spd / 20 + 0x180) * dt);
    *px = *px + (dt * (f32)func_00BBB990(*ang, *spd)) / 256.0f;
    *pz = *pz + (dt * (f32)func_00BBB9C0(*ang, *spd)) / 256.0f;
    if (skip != 0) {
        *py = -28.0f;
        *cnt = 0;
    } else {
        loc[1] = (f32)(u32)*ang;
        if (*cnt == 0) {
            a1 = *lat;
            loc[0] = 0.0f;
        } else {
            a1 = 0x3A980 / *cnt;
            if (*lat == 0) {
                loc[0] = 15000.0f;
            } else {
                if (a1 * 2 < 0x3A99) {
                    loc[0] = (f32)(a1 * 2);
                } else {
                    loc[0] = 15000.0f;
                }
                a1 = *lat;
            }
            if (*dir == 0) {
                loc[0] = -loc[0];
            }
            *cnt = *cnt + 1;
        }
        if (*lat > 0) {
            loc[0] = -loc[0];
        }
        d21 = loc[1];
        vec[0] = *(f32 *)D_003AB9C0;
        vec[1] = *(f32 *)D_003AB9C4;
        vec[2] = *(f32 *)D_003AB9C8;
        vec[3] = *(f32 *)D_003AB9CC;
        cam = *(char **)D_003E7574;
        x = 0.159154937f * (9.58738019e-05f * loc[0]);
        x = x - func_0011D238(x);
        if (!(x <= 0.5f)) {
            x -= 1.0f;
        }
        func_00103FF8(mat, D_00375B30, 3.14159274f * (2.0f * x));
        __asm__ volatile("lqc2 $vf8, 0x0(%0)\n lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x10(%1)\n lqc2 $vf6, 0x20(%1)\n lqc2 $vf7, 0x30(%1)\n vmulax.xyzw ACC, $vf4, $vf8x\n vmadday.xyzw ACC, $vf5, $vf8y\n vmaddaz.xyzw ACC, $vf6, $vf8z\n vmaddw.xyzw $vf8, $vf7, $vf8w\n sqc2 $vf8, 0x0(%0)" : : "r"(vec), "r"(mat) : "memory");
        y = 0.159154937f * (-9.58738019e-05f * d21);
        y = y - func_0011D238(y);
        if (!(y <= 0.5f)) {
            y -= 1.0f;
        }
        func_001040A0(mat, D_00375B30, 3.14159274f * (2.0f * y));
        __asm__ volatile("lqc2 $vf8, 0x0(%0)\n lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x10(%1)\n lqc2 $vf6, 0x20(%1)\n lqc2 $vf7, 0x30(%1)\n vmulax.xyzw ACC, $vf4, $vf8x\n vmadday.xyzw ACC, $vf5, $vf8y\n vmaddaz.xyzw ACC, $vf6, $vf8z\n vmaddw.xyzw $vf8, $vf7, $vf8w\n sqc2 $vf8, 0x0(%0)" : : "r"(vec), "r"(mat) : "memory");
        func_0012BB50(buf, vec, (f32)(-a1) / 10240.0f);
        func_0012BFE0(cam + 0x40, buf, cam + 0x40);
        *pa = 0.0f;
        if (*spd >= 0x1801 && *lat > 0) {
            *py = -28.0f - (f32)func_00BBB8C0(10);
        } else {
            *py = -28.0f;
        }
        *(s32 *)D_00591F30 = 0x7FFF;
    }
    g = D_003E7574;
    if (*spd >= 0x4001) {
        *spd = (s32)((f32)*spd - ((f32)*spd * dt) / *(f32 *)(g + 0xF8));
    } else {
        f = (f32)*spd;
        y = *(f32 *)(g + 0xF8) - f / 600.0f;
        if (y < 2.0f) {
            *spd = (s32)((f32)*spd - (f * dt) / 2.0f);
        } else {
            *spd = (s32)(f - (f * dt) / y);
        }
    }
    if (*spd >= 0x14) {
        *spd = *spd - 0x14;
    }
    a1 = *spd;
    if (a1 >= 0x5801) {
        a0 = (a1 - 0x5800) / 3 + 0x5800;
    } else {
        a0 = a1;
    }
    *spd = (s32)((f32)*spd - dt * ((f32)(a0 * a0) / *(f32 *)D_00591BF8));
    if (*spd < *lat) {
        *lat = *spd;
    }
    if (*spd < 0x100) {
        *state = 0;
    }
}
