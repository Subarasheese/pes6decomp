/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
s32 func_00288670(s32, s32);
s32 func_0027D2F0(s32);
f32 func_001CD9E0(f32);
s32 func_009B3480(char *, f32, f32);
s32 func_009BABB0(char *);
s32 func_009B33A0(char *, s32, s32);
void func_009B3500(char *, s32, s32);
void func_009B36C0(char *, s32, s32, s32, s32);
s32 func_009B34C0(f32, f32, f32, f32);
s32 func_00C48170(char *, s32, s32, s32, s32, s32);
s32 func_00C484F0(char *, s32, s32);
s32 func_00C40770(char *);
s32 func_009B30B0(s32, s32);
s32 func_00AB3B70(char *, s32, s32);
s32 func_00BBB990(s32, s32);
s32 func_00990590(char *, s32, s32, s32, s32);
extern char D_00CA80E0[];
extern char D_00CA80D0[];
extern char D_00CA80C0[];
extern char D_00591E70[];
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00591BEC[];
extern char D_00592980[];
extern char D_005926EC[];
extern char D_005926F0[];
extern char D_005926D8[];
extern char D_00591E4C[];
extern char D_00591E67[];
extern char *D_003E7574;
extern char *D_003E74CC;

s32 func_00C3F190(char *p, char *out) {
    s32 fp, a4, dir, s0, v, s7, s6, s1, s2, s3, i, d, t, best;
    s32 ang0;
    s16 tab[5];
    f32 fx, fy, fd;

    fp = func_002AE670(0xC);
    a4 = func_009B3480(p, *(f32 *)(p + 0x88), *(f32 *)(p + 0x8C)) & 0xFFFF;
    s0 = (((a4 - *(s32 *)(p + 0xA8)) + 0x10000) & 0xFFFF) < 0x8001;
    dir = s0 ? -1 : 1;
    *(s16 *)(p + 0x2C) = a4 + (dir << 14);
    *(u8 *)(p + 0x62) = func_009BABB0(p);
    *(u8 *)(p + 0x48) = 0;
    v = func_009B33A0(p, (s32)*(f32 *)(p + 0x88), (s32)*(f32 *)(p + 0x8C));
    ang0 = *(u16 *)(p + 0x2C);
    if (v >= 0x19001) {
        char *src = D_00CA80E0;
        s7 = *(s32 *)(p + 0x98);
        for (i = 0; i < 5; i++) tab[i] = ((s16 *)src)[i];
    } else {
        s7 = *(s32 *)(p + 0x98);
        for (i = 0; i < 5; i++) tab[i] = ((s16 *)D_00CA80D0)[i];
    }
    s1 = 0xFF;
    for (i = 0; i < 5; i++) {
        func_009B3500(p, (u16)tab[i], 0);
        d = (s32)*(f32 *)D_00591E70 - s7;
        if (d <= 0) d = -d;
        if (s1 == 0xFF || d < s6) {
            s6 = d;
            s1 = i;
        }
    }
    s2 = (u16)tab[s1];
    *(u16 *)(p + 0x38) = 0;

    s1 = *(u16 *)(p + 0x2C);
    func_009B36C0(p, s2, 0xC, s1, s0);
    fx = *(f32 *)(p + 0x88) - *(f32 *)D_00591E6C;
    fy = *(f32 *)(p + 0x8C) - *(f32 *)D_00591E74;
    fd = func_001CD9E0(fy * fy + fx * fx);
    s3 = (s32)(*(f32 *)D_00591BEC * (f32)(s32)fd / (f32)(fp + 1));
    s6 = func_009B34C0(*(f32 *)D_00591E6C, *(f32 *)D_00591E74, *(f32 *)(p + 0x88), *(f32 *)(p + 0x8C)) & 0xFFFF;
    s7 = func_00C48170(p, s2, s3, *(s32 *)(p + 0x1C), s6, 0x400);

    t = *(u8 *)(D_00592980 + *(u8 *)(p + 0x12) * 26880 + *(u8 *)(p + 0x11) * 840 + 0x8C);
    t = (t & 0xFF) >> 2;
    if (*(s32 *)(p + 0x98) < (-(t + 0x94) * 576) / 183) {
        *(u8 *)(p + 0x48) = 1;
    } else {
        s32 y = (s32)*(f32 *)(p + 0x8C);
        if (y <= 0) y = -y;
        if ((f32)y < 1099.0f) {
            if (y <= 0) y = -y;
            if (!((f32)y <= 875.0f)) {
                s32 q = func_00BBB990(s6, s3);
                s32 m = (s32)((f32)q / *(f32 *)D_00591BEC) * *(u8 *)D_005926EC;
                f32 f = *(f32 *)(p + 0x88) + (f32)m;
                if ((f32)*(s16 *)(p + 0x14) * f < -13465.0f) {
                    *(u8 *)(p + 0x48) = 1;
                }
            }
        }
    }

    if (v < 0x4C900) {
        if (func_00C484F0(p, s1, s0 & 0xFF) != 0) goto L770;
        if (*(u8 *)(p + 0x48) != 0) goto L824;
        if (*(u16 *)(D_003E7574 + 0x84) == 9) goto L770;
        if (*(u8 *)D_00591E4C != 0) {
            if (*(u8 *)(D_00591E67 + *(u8 *)(p + 0x12)) != 1) goto L770;
        }
        if (*(u16 *)(p + 0x30) != 0) {
            if (*(u16 *)(D_003E7574 + 0x84) == 0xD) goto L770;
        } else {
            if (!(*(f32 *)D_005926D8 <= (f32)func_002AE670(0x18))) goto L770;
        }
        if (s7 < 0x801) goto L770;
        if (!(s3 < s7)) {
            s32 r = func_002AE670(0xC);
            if (func_0027D2F0(*(s32 *)(D_003E7574 + r * 4 + 0xFC)) < 0x41) goto L770;
        }
        if (s7 < s3) goto L824;
        s7 = *(s32 *)(D_003E7574 + 0x50);
        t = func_00288670(*(u8 *)(D_00592980 + *(u8 *)(p + 0x12) * 26880 + *(u8 *)(p + 0x11) * 840 + 0x6B) & 0x7F, 0x14);
        if (t * 40 + 0x6000 < s7) goto L824;
        {
            u32 x = *(u8 *)D_005926F0;
            if (*(f32 *)D_005926D8 < (f32)x) goto L824;
        }
    }
L770:
    goto L774;

L824:
    {
        s32 r = func_002AE670(0x12);
        s32 q = (s32)((f32)(*(s32 *)(D_003E7574 + 0x50) * r) / *(f32 *)D_00591BEC);
        s32 t1, t2;
        s7 = q * q;
        t1 = func_00990590(p, *(u16 *)(p + 0x10C), 0x2000, s7, 2) & 0xFF;
        t2 = func_00990590(p, *(u16 *)(p + 0x10C), 0x2000, s7, 1) & 0xFF;
        t = (t1 + t2) & 0xFF;
        if (*(u8 *)(p + 0x48) == 0 && t <= 0 && *(s32 *)(D_003E7574 + 0x50) < 0x6001) {
            if (!(*(f32 *)D_005926D8 <= (f32)func_002AE670(0x28))) goto L774;
        }
    }
    *(u8 *)(p + 0x48) = 1;
    s6 = *(s32 *)(p + 0x98);
    for (i = 0; i < 5; i++) tab[i] = ((s16 *)D_00CA80C0)[i];
    s1 = 0xFF;
    for (i = 0; i < 5; i++) {
        func_009B3500(p, (u16)tab[i], 0);
        d = (s32)*(f32 *)D_00591E70 - s6;
        if (d <= 0) d = -d;
        if (s1 == 0xFF || d < best) {
            best = d;
            s1 = i;
        }
    }
    s1 = (u16)tab[s1];
    *(u16 *)(p + 0x38) = 0x1554 / func_002AE670(*(s32 *)(D_003E74CC + s1 * 4 + 0x2FD8));
    s2 = s1 & 0xFFFF;
    dir = s0 ? -1 : 1;
    s1 = (ang0 - dir * (*(u16 *)(p + 0x38) * 12)) & 0xFFFF;
    func_009B36C0(p, s2, 0xC, s1, s0);
    s6 = func_009B34C0(*(f32 *)D_00591E6C, *(f32 *)D_00591E74, *(f32 *)(p + 0x88), *(f32 *)(p + 0x8C)) & 0xFFFF;
    fx = *(f32 *)(p + 0x88) - *(f32 *)D_00591E6C;
    fy = *(f32 *)(p + 0x8C) - *(f32 *)D_00591E74;
    fd = func_001CD9E0(fy * fy + fx * fx);
    *(u16 *)(p + 0x2C) = s1;
    s3 = (s32)(*(f32 *)D_00591BEC * (f32)(s32)fd / (f32)(fp + 1));

L774:
    s3 = func_00C48170(p, s2, s3, *(s32 *)(p + 0x1C), s6, 0x400);
    *(s32 *)(p + 0xA4) = s2 & 0xFFFF;
    if (func_00C40770(p) != 0) {
        if ((func_009B30B0(*(u16 *)(p + 0x26), s1) & 0xFFFF) < 0x21) {
            *(u16 *)(p + 0x38) = func_00AB3B70(p, *(u16 *)(p + 0x2C), fp);
            *(u16 *)(out + 8) = s2;
            *(u16 *)(out + 0xA) = s6;
            *(s32 *)out = s3;
            *(u16 *)(out + 0xC) = s1;
            *(u8 *)(out + 0x10) = s0;
            return 1;
        }
    }
    return 0;
}
