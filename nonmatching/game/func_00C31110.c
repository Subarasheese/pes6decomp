/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern char D_00592998[];
extern char D_00592A54[];
extern char D_00592A58[];
extern char D_00592A78[];
extern char D_00592A79[];
extern char D_00592A82[];
extern char D_00CB37B0[];
extern void func_0028F9E0(void *a0, void *a1, void *a2, void *a3);
extern s32 func_00C31960(void *a0, void *a1, void *a2, void *a3, s32 a4);
extern s32 func_00292D30(void);
extern s32 func_00292D50(void);
extern s32 func_0028F230(void *a0, void *a1, s32 a2, void *a3, s32 a4);
extern s32 func_00C32010(void *a0, s32 a1);
extern s32 func_009A0270(void);
extern void func_00277220(void *a0, s32 a1);
extern s32 func_00C31D10(void *a0, s32 a1, s32 a2, s32 a3);

s32 func_00C31110(u8 *p, void *a1, s32 idx, void *a3, u8 a4)
{
    u8 b[11];
    u8 a[11];
    s32 sc[32];
    s32 ent[33];
    s32 i, cnt, best1, best2, s3, s6, s2, s7, fp, s1, s0, v, sp170, n;

    s32 off0 = p[0] * 26880;
    s32 off2, pl1, plx, t, offB1, offB2;

    for (i = 0; i < 11; i++) {
        a[i] = p[0xC0 + i];
        t = p[0x8C + i] * 840;
        if (*(u8 *)(D_00592980 + off0 + t + 0xD6) == 0 && *(u8 *)(D_00592980 + off0 + t + 0xD5) < 2)
            b[i] = 1;
        else
            b[i] = 0;
    }
    func_0028F9E0(ent, b, a, p + 0xAC);
    func_00C31960(p, a1, sc, a3, p[idx + 0xC0]);
    sc[p[idx + 0x8C]] = 0;

    for (s2 = 11; s2 < 32; s2++) {
        s32 pl = p[0x8C + s2];
        plx = p[idx + 0x8C];
        if (*(u8 *)(D_00592980 + (p[0] * 26880) + pl * 840 + 0xC4) == 0)
            continue;
        if (*(u8 *)(D_00592980 + (p[0] * 26880) + p[idx + 0x8C] * 840 + 0xC4) != 0)
            continue;
        cnt = 0;
        for (i = 0; i < 11; i++) {
            if (*(u8 *)(D_00592980 + (p[0] * 26880) + p[0x8C + i] * 840 + 0xC4) != 0)
                cnt++;
        }
        if (cnt < (func_00292D30() & 0xFF))
            continue;
        sc[p[0x8C + s2]] = 0;
    }

    s3 = 0;
    s1 = idx;
    for (i = 0; i < 11; i++) {
        s32 val = sc[p[0x8C + i]];
        if (s3 < val) {
            s3 = val;
            s1 = i;
        }
    }
    s2 = 0;
    s7 = idx;
    s0 = func_00292D50() & 0xFF;
    if (s0 >= 12) {
        for (i = 11; i < s0; i++) {
            s32 val = sc[p[0x8C + i]];
            if (s2 < val) {
                s2 = val;
                s7 = i;
            }
        }
    }
    if (s7 == idx)
        return 0;

    best1 = s1;
    func_00C31960(p, a1, sc, &ent[best1 * 3], p[best1 + 0xC0]);
    s6 = 0;
    fp = idx;
    if (s0 >= 12) {
        for (i = 11; i < s0; i++) {
            s32 val = sc[p[0x8C + i]];
            if (s6 < val) {
                s6 = val;
                fp = i;
            }
        }
    }
    if (fp == idx)
        return 0;

    pl1 = p[0x8C + best1];
    off2 = pl1 * 840;
    {
        s32 d = *(s32 *)(D_00592998 + off0 + off2) / 100;
        n = *(s32 *)(D_00592A58 + off0 + off2) / d;
    }
    if (n >= 0x3D)
        n = 100;
    offB1 = p[0] * 26880;
    s1 = func_0028F230(a1, D_00592980 + offB1 + off2 + 0x68, p[best1 + 0xC0], &ent[best1 * 3], n);
    if (func_00C32010(p, pl1) == 0) {
        v = 0;
    } else if (*(u8 *)(D_00592A78 + offB1 + off2) != 0) {
        v = 0;
    } else if (*(u8 *)(D_00592A79 + offB1 + off2) != 0) {
        v = 0;
    } else {
        s0 = *(u8 *)(D_00592A82 + offB1 + off2);
        if (((u8)func_009A0270()) - 5 < s0) {
            v = 0;
        } else {
            func_00277220(D_00592980 + offB1 + off2 + 0xF0, 1);
            v = 2;
        }
    }
    if (v == 2)
        s1 = s1 / 2;

    {
        s32 lv = ((u8 *)a1)[6];
        if (lv >= 5)
            lv = 4;
        lv = *(u8 *)(D_00CB37B0 + lv);
        plx = p[idx + 0x8C];
        off2 = plx * 840;
        if (*(u8 *)(D_00592A54 + off0 + off2) == 0) {
            sp170 = 0;
        } else {
            s32 d = *(s32 *)(D_00592998 + off0 + off2) / 100;
            s32 q = *(s32 *)(D_00592A58 + off0 + off2) / d;
            n = (lv * q) / 100;
            if (n >= 0x65)
                n = 100;
            if (n >= 0x3D)
                n = 100;
            offB2 = p[0] * 26880;
            sp170 = func_0028F230(a1, D_00592980 + offB2 + off2 + 0x68, p[idx + 0xC0], a3, n);
            if (func_00C32010(p, plx) == 0) {
                v = 0;
            } else if (*(u8 *)(D_00592A78 + offB2 + off2) != 0) {
                v = 0;
            } else if (*(u8 *)(D_00592A79 + offB2 + off2) != 0) {
                v = 0;
            } else {
                s0 = *(u8 *)(D_00592A82 + offB2 + off2);
                if (((u8)func_009A0270()) - 5 < s0) {
                    v = 0;
                } else {
                    func_00277220(D_00592980 + offB2 + off2 + 0xF0, 1);
                    v = 2;
                }
            }
            if (v == 2)
                sp170 = sp170 / 2;
        }
    }

    {
        s32 a0v = s3 + s6;
        s32 a1v = s1 + s2;
        if (a1v < a0v) {
            if (a0v < sp170 + s1)
                return 0;
            v = func_00C31D10(p, idx, fp, a4);
            if (v == 0)
                return 0;
            t = p[idx + 0x8C];
            p[idx + 0x8C] = p[best1 + 0x8C];
            p[best1 + 0x8C] = t;
            return v;
        } else {
            if (a1v < sp170 + s1)
                return 0;
            return func_00C31D10(p, idx, s7, a4);
        }
    }
}
