/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_00591DC4[];
extern char D_00591F24[];
extern char D_00CBCC62[];
extern char D_00591E4D[];
extern char D_005926DE[];
extern char D_00591E4C[];

extern void func_00A99360(void *p, s32 a);
extern void func_00B798F0(f32 *a, f32 *b, s32 c);
extern s32 func_009B3480(void *p, f32 a, f32 b);
extern s32 func_009B30B0(s32 a, s32 b);
extern s32 func_009B32D0(s32 a, s32 b, s32 c);
extern void func_00B00970(void *p, s32 a);
extern s32 func_00A1FE80(s32 a, s32 b);
extern s32 func_00207D10(void *q);
extern void func_00930240(void *p);
extern s32 func_009B3070(s32 a, s32 b);
extern void func_00AFB490(void *p, s32 a, s32 b);
extern s32 func_009B3220(s32 a, s32 b, s32 c);
extern void func_00209540(void *q, s32 a, s32 b);
extern void func_00207390(void *q, s32 a);
extern s32 func_00207920(void);
extern void func_00209A00(void *q, s32 a, s32 b);
extern void func_0097A6D0(void *p, s32 a, s32 b);
extern void func_0097C490(void *p, s32 a, s32 b, s32 c);
extern s32 func_0090AD50(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_00A09950(void *p);
extern void func_00208610(void *q, s32 a, s32 b);
extern s32 func_00A09C00(void *p, s32 a, s32 b);
extern s32 func_00A09A50(void *p, s32 a, s32 b);
extern s32 func_00BA1DF0(void *p, s32 a, s32 b, s32 c);

void func_0097CF20(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p = arg0;
    u8 *pb = (u8 *)p;
    u16 *ph = (u16 *)p;
    s32 *pw = (s32 *)p;
    f32 *pf = (f32 *)p;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 s3;
    s32 v;
    s32 ev;
    s32 a2v;
    s32 a1v;
    f32 fx;
    f32 fy;
    f32 f1;
    f32 f2;
    s32 i3;
    s32 i2;
    s32 sgn;
    s32 shv;
    s32 pw7;
    u8 *q;
    f32 sa;
    f32 sb;
    s32 b1 = 0x46526400;
    s32 b2 = 0x446DC000;
    s32 b0 = 0;
    f32 c1 = *(f32 *)&b1;
    f32 c2 = *(f32 *)&b2;
    f32 c0 = *(f32 *)&b0;

    func_00A99360(p, -0x64);
    if ((*(s32 *)D_00591DC4 & 1) == (pb[0] & 1)) {
        goto L354;
    }
    if (*(u8 *)D_00591F24 == 1 || *(u8 *)D_00591F24 == 3 || *(u8 *)D_00591F24 == 6 || *(u8 *)D_00591F24 == 2) {
        if (*(u8 *)D_00CBCC62 == 0) {
            func_00B798F0(&sa, &sb, *(u8 *)D_00591E4D);
            v = func_009B3480(p, sa, sb) & 0xFFFF;
        } else {
            v = ph[0x86];
        }
    } else {
        v = ph[0x86];
    }
    ph[0x18] = v;
    s3 = v & 0xFFFF;
    s2 = ph[0x50];
L014:
    s1 = func_009B30B0(s2, s3) & 0xFFFF;
    q = (u8 *)pw[1];
    ev = ((u16 *)q)[0x18];
    s0 = 0;
    if (ev == 0x122) {
        if (s1 >= 0x5C) {
            s1 = 0x61;
        }
        s0 = 1;
        goto L278;
    }
    if (ev == 0x126) {
        if (s1 < 0x21 && s1 >= 0x1C) {
            s1 = 0x21;
        } else if (s1 >= 0x60 && s1 < 0x65) {
            s1 = 0x5F;
        }
        s0 = 1;
        goto L278;
    }
    if (ev == 0x124) {
        if (s1 < 0x25) {
            s1 = 0x1F;
        }
        s0 = 1;
        goto L278;
    }
    if (ev == 0x13 || ev == 0xC1) {
        goto L128;
    }
    if (ev == 0xBB) {
        goto L0D0;
    }
    if (ev == 0xB7) {
        goto L088;
    }
    goto L27C;

L088:
    ph[0x13] = func_009B32D0(ph[0x1B], ph[0x13], ph[0x1C]);
    func_00B00970(p, 0x400);
    pw[7] = func_00A1FE80(pw[7], 0x400);
    if (func_00207D10((void *)pw[1]) != 0) {
        goto L4FC;
    }
    return;

L0D0:
    pb[0x41] = *(u8 *)D_005926DE;
    q = (u8 *)pw[1];
    a1v = q[0x2D];
    sgn = 1;
    if (a1v != 0) {
        sgn = -1;
    }
    v = ph[0x1C] * sgn;
    ph[0x13] = ph[0x13] + (v & 0xFFFF);
    func_00930240(p);
    if (func_00207D10((void *)pw[1]) != 0) {
        goto L564;
    }
    return;

L128:
    ph[0x1E] = 0;
    a1v = ph[0x1A];
    shv = ph[0x1C];
    v = func_009B3070(ph[0x13], a1v) & 0xFFFF;
    if (!(shv < v)) {
        ph[0x13] = ph[0x1A];
    } else {
        q = (u8 *)pw[1];
        sgn = 1;
        if (q[0x2D] != 0) {
            sgn = -1;
        }
        v = shv * sgn;
        ph[0x13] = ph[0x13] + (v & 0xFFFF);
    }
    v = pw[0x24] * 24;
    func_00AFB490(p, v / 16, pb[0x5C] + 0xC);
    ph[0x14] = func_009B3220(ph[0x1B], ph[0x14], 0x400);
    ph[0x21] = ph[0x14];
    if (func_00207D10((void *)pw[1]) == 0) {
        func_00930240(p);
        return;
    }
    func_00209540((void *)pw[1], 0x11F, 0);
    pw[8] = pw[7];
    func_00207390((void *)pw[1], 4);
    goto L278;

L4FC:
    v = func_009B30B0(ph[0x13], ph[0x1B]) & 0xFFFF;
    if (v < 0x21) {
        ph[0x13] = ph[0x1B];
    }
    if (pw[7] < 0x400) {
        func_00209A00((void *)pw[1], 0, 0);
        pw[7] = 0;
    } else {
        func_00209A00((void *)pw[1], 2, 0x10);
        pb[0x41] = 0;
    }
    goto L278;

L564:
    func_00208610((void *)pw[1], a1v, arg2);
    ph[0x14] = ph[0x1A];
    ph[0x21] = ph[0x1A];
    pb[0x41] = 0;
    goto L278;

L278:
L27C:
    pw7 = pw[7];
    if (pw7 >= 0x801) {
        v = func_009B3070(s2, ph[0x14]) & 0xFFFF;
        if (v >= 0x4000) {
            ph[0xC] = 0xA;
            return;
        }
        v = func_009B3070(s3, ph[0x13]) & 0xFFFF;
        if (v >= 0x4000) {
            ph[0xC] = 0xA;
            return;
        }
    }
    v = s1 & 0xFFFF;
    if (v >= 0x61) {
        if (func_00A09C00(p, s3, s2) != 0) {
            return;
        }
        q = (u8 *)pw[1];
        if (((u16 *)q)[0x18] != 0x122) {
            if (s0 != 0) {
                func_00209540(q, 0x122, func_00207920());
            } else {
                func_00209A00(q, 0x122, 0);
            }
            func_00207390((void *)pw[1], 4);
        }
        goto L2F4;
    }
    if (v >= 0x21) {
        if (func_00A09C00(p, s3, s2) != 0) {
            return;
        }
        if (func_00A09A50(p, s3, s2) != 0) {
            return;
        }
        v = ((s2 & 0xFFFF) - (s3 & 0xFFFF) + 0x10000) & 0xFFFF;
        ((u8 *)pw[1])[0x2D] = v < 0x8001;
        q = (u8 *)pw[1];
        if (((u16 *)q)[0x18] != 0x126) {
            if (s0 != 0) {
                func_00209540(q, 0x126, func_00207920());
            } else {
                func_00209A00(q, 0x126, 0);
            }
            func_00207390((void *)pw[1], 4);
        }
        goto L2F4;
    }
    q = (u8 *)pw[1];
    if (((u16 *)q)[0x18] != 0x124) {
        if (s0 != 0) {
            func_00209540(q, 0x124, func_00207920());
        } else {
            func_00209A00(q, 0x124, 0);
        }
        func_00207390((void *)pw[1], 4);
    }
L2F4:
    ph[0x1D] = 4;
    s0 = func_009B3070(ph[0x13], s2) & 0xFFFF;
    a2v = func_009B30B0(s3, ph[0x14]) & 0xFFFF;
    if (arg1 < 0x100 && arg1 < ((s16 *)p)[0xE6]) {
        pw[0x2E] = 0;
        func_0097A6D0(p, s3, a2v);
        ph[0xC] = 0xB;
        return;
    }
    func_0097C490(p, s2, a2v, arg1);
    ph[0x21] = ph[0x14];
    if (pb[0x62] != 0) {
        return;
    }
    pb[0x4A] = func_0090AD50(p, s2, s1, s0, arg1, arg2, 1);
    v = pb[0x4A];
    if (v == 4) {
        ph[0xC] = 1;
        return;
    }
    if (v == 0) {
        func_0097A6D0(p, s3, s1);
        ph[0xC] = 0x1D;
        return;
    }
    if (v == 1) {
        return;
    }
    if (v != 3) {
        return;
    }
    if (*(u8 *)D_00591E4C == 0) {
        if (func_00A09950(p) == 0) {
            if ((u32)pw[0x45] < 0x90000) {
                return;
            }
        }
    }
    v = func_009B30B0(ph[0x14], s2) & 0xFFFF;
    if (v < 0x11) {
        ph[0xC] = 1;
    }
    return;

L354:
    s3 = ph[0x18];
    a1v = func_009B3480(p, pf[0x1B], pf[0x1C]) & 0xFFFF;
    f2 = pf[0x3A];
    i3 = (s32)f2;
    if (i3 <= 0) {
        i3 = -i3;
    }
    i2 = (s32)pf[0x38];
    if (i2 <= 0) {
        i2 = -i2;
    }
    f1 = (f32)i2;
    if (!(f1 <= c1)) {
        f1 = (f32)i3 - c2;
        v = (s32)f1;
        if (v <= 0) {
            v = -v;
        }
        if (v < 0x101) {
            sgn = f1 < c0 ? -1 : 1;
            shv = sgn << 8;
            i2 = f2 < c0 ? -1 : 1;
            v = func_009B3480(p, c0, (f32)(s32)((c2 + (f32)shv) * (f32)i2)) & 0xFFFF;
            goto L4E0;
        }
    }
    if (*(u8 *)D_00591F24 == 6 || *(u8 *)D_00591F24 == 3 || *(u8 *)D_00591F24 == 1 || *(u8 *)D_00591F24 == 2) {
        a1v = func_00BA1DF0(p, a1v, arg2, arg3) & 0xFFFF;
    }
    v = a1v & 0xFFFF;
L4E0:
    s2 = v & 0xFFFF;
    pw[0x28] = s2;
    goto L014;
}
