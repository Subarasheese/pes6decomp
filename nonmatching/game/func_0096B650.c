/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 func_00BF0520(void);
extern void func_00B798F0(f32 *a, f32 *b, s32 c);
extern u32 func_009B34C0(f32 a, f32 b, f32 c, f32 d);
extern s32 func_00BBB990(s32 a, s32 b);
extern s32 func_00BBB9C0(s32 a, s32 b);
extern char D_0058E5B0[];
extern char D_00591F24[];
extern char D_00592374[];

void func_0096B650(f32 *out, u8 *p, s32 mode) {
    u8 *e;
    u32 ang;
    u32 ang2;
    s32 idx;
    s32 flag;
    s32 sign;
    s32 r;
    s32 t;
    u8 m;
    f32 v[3];
    f32 fz;
    f32 fx;

    if ((func_00BF0520() & 0xFF) == 0xFF) {
        idx = 1;
    } else {
        idx = (func_00BF0520() & 0xFF) % 0x17;
    }
    e = (u8 *)D_0058E5B0 + idx * 0x240;
    func_00B798F0(&fx, &fz, *e);
    ang = func_009B34C0(fx, fz, fx, 0.0f) & 0xFFFF;
    flag = ((s32)((*(u16 *)(e + 0x2A) - ang + 0x10000) & 0xFFFF)) < 0x8001;
    m = *(u8 *)D_00591F24;
    if (m == 6 || m == 7 || m == 1) {
        r = 0xA00;
    } else if (m == 3) {
        r = ((u8 *)D_00592374)[p[0x12]] ? 0xA00 : 0x500;
    } else if (m == 2) {
        r = ((u8 *)D_00592374)[p[0x12]] ? 0xB00 : 0x700;
    } else {
        r = 0xA00;
    }
    r += 0x100;
    if (mode >= 3) {
        s32 q = *(s16 *)(e + 0x14);
        v[0] = *(f32 *)(e + 0xE0);
        if (mode == 4) {
            v[0] += (f32)(q * 3 << 8);
            sign = (*(f32 *)(e + 0xE8) < 0.0f) ? -1 : 1;
            v[2] = 4008.0f * (f32)sign;
        } else {
            v[0] += (f32)(q * 3 << 9);
            sign = (*(f32 *)(e + 0xE8) < 0.0f) ? -1 : 1;
            v[2] = 4392.0f * (f32)sign;
        }
    } else {
        if (mode == 2) {
            sign = flag & 0xFF ? -1 : 1;
            ang = (ang + ((sign * 9 << 10) & 0xFFFF)) & 0xFFFF;
        } else if (mode == 1) {
            f32 a = fx;
            if (a < 0.0f) a = -a;
            if (a < 12057.0f) {
                sign = flag & 0xFF ? -1 : 1;
                ang = (ang - ((sign * 9 << 10) & 0xFFFF)) & 0xFFFF;
            } else {
                sign = flag & 0xFF ? -1 : 1;
                ang = (ang - ((sign * 3 << 11) & 0xFFFF)) & 0xFFFF;
            }
        } else {
            f32 a;
            ang2 = func_009B34C0(fx, fz, 0.0f, 0.0f) & 0xFFFF;
            flag = ((s32)((ang2 - ang + 0x10000) & 0xFFFF)) < 0x8001;
            a = fx;
            if (a < 0.0f) a = -a;
            if (!(a < 12057.0f)) {
                sign = flag & 0xFF ? -1 : 1;
                ang = (ang - ((sign << 11) & 0xFFFF)) & 0xFFFF;
            }
        }
        t = func_00BBB990(ang, r);
        v[0] = fx + (f32)t;
        v[1] = -28.0f;
        t = func_00BBB9C0(ang, r);
        v[2] = fz + (f32)t;
    }
    {
        f32 a = v[0];
        if (a < 0.0f) a = -a;
        if (!(a < 12953.0f)) {
            v[0] = 12953.0f * (f32)(v[0] < 0.0f ? -1 : 1);
        }
    }
    out[0] = v[0];
    out[1] = v[1];
    out[2] = v[2];
}
