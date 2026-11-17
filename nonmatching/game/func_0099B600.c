/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592800[];
extern char D_0058E5B0[];
extern char D_0058E7F0[];
extern char D_005900B0[];
extern char D_00591F24[];
extern char D_00591E4C[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591E14[];
extern char D_00591DCD[];
extern char D_00591C09[];
extern char D_005926FF[];
extern char D_005926DC[];
extern char D_00592942[];
extern u8 *D_003E7574;

void func_0099B4F0(void);
void *func_001C48E8(void *, s32, s32);
void func_0099C460(s32);
void func_0099C790(void);
void func_0099C680(void);
void func_0099C5D0(void);
u32 func_009B33A0(void *, s32, s32);
s32 func_00B29B50(void);
s32 func_00BF3FC0(void);
s32 func_00BF04E0(void);

void func_0099B600(void) {
    u8 cnt[2];
    u8 list[8];
    u8 flag[8];
    u8 ids[8];
    u32 keys[8];
    u8 saved;
    u8 *S = (u8 *)D_00592800;
    u8 *P = (u8 *)D_0058E5B0;
    s32 i, j, k, s0, s3, nl, d, idx;
    u8 *e, *s2, *s4;

    func_0099B4F0();
    func_001C48E8(cnt, 0, 2);
    func_001C48E8(list, 0xFF, 8);
    func_001C48E8(flag, 0, 8);

    for (i = 0; i < 8; i++) {
        e = S + i * 0x28;
        if (e[3] != 0 || e[0] == 8) continue;
        for (j = 0; j < 8; j++) {
            u8 *f = S + j * 0x28;
            if (i == j) continue;
            if (e[0x10] != f[0x10]) continue;
            if (e[0x10] == 0xFF) continue;
            flag[j] = 1;
            cnt[f[1]]++;
            break;
        }
    }

    nl = 0;
    for (i = 0; i < 8; i++) {
        e = S + i * 0x28;
        if (flag[i] != 0) continue;
        if (e[0] == 0xFF) continue;
        if (e[3] < 2) {
            list[nl++] = e[0x10];
            continue;
        }
        {
            s32 found = 0xFF;
            for (j = 0; j < 8; j++) {
                u8 *f = S + j * 0x28;
                u8 t = f[0x18];
                if (t == 8) {
                    if (e[0x10] == f[0x1A]) {
                        found = j & 0xFF;
                        break;
                    }
                    continue;
                }
                if (e[0] == t) {
                    found = j & 0xFF;
                    break;
                }
            }
            if (found == 0xFF) {
                flag[i] = 1;
                cnt[e[1]]++;
            } else {
                u8 *f = S + found * 0x28;
                u8 t2 = f[0x19];
                if (t2 != e[1]) {
                    cnt[e[1]]++;
                    flag[i] = 1;
                } else if (t2 == 0xFF) {
                    flag[i] = 1;
                    cnt[e[1]]++;
                } else {
                    flag[i] = 2;
                    list[nl++] = f[0x1A];
                    e[0x10] = f[0x1A];
                }
            }
        }
    }

    for (s3 = 0; s3 < 2; s3++) {
        if (cnt[s3] == 0) continue;
        func_001C48E8(ids, 0, 8);
        func_001C48E8(keys, -1, 0x20);
        if ((*(u8 *)D_00591DCD & 1) == 0) {
            s4 = (s3 == 0) ? (u8 *)D_0058E7F0 : (u8 *)D_005900B0;
        } else {
            s4 = (s3 == 0) ? (u8 *)D_005900B0 : (u8 *)D_0058E7F0;
        }
        for (s0 = 0; s0 < 11; s0++, s4 += 0x240) {
            u32 key;
            if (s4[0x10] == 0) continue;
            if (*(u8 *)(*(u8 **)(s4 + 4) + 0x2C) == 0) continue;
            if (*(u8 *)D_00591F24 == 1) {
                if (s4[0] == *(u8 *)D_00591E4E) continue;
            }
            {
                s32 hit = 0;
                for (j = 0; j < 8; j++) {
                    u8 a = list[j];
                    if (a == 0xFF) break;
                    if (a == s4[0]) {
                        hit = 1;
                        break;
                    }
                }
                if (hit) continue;
            }
            {
                u8 *g = D_003E7574 + *(u8 *)D_005926DC * 4;
                s32 x = (s32)*(f32 *)(g + 0x47C);
                s32 y = (s32)*(f32 *)(g + 0xB7C);
                key = func_009B33A0(s4, x, y);
            }
            for (j = 0; j < 8; j++) {
                if (!(key < keys[j])) continue;
                if (j != 7) {
                    for (k = 7; k >= j + 1; k--) {
                        keys[k] = keys[k - 1];
                        ids[k] = ids[k - 1];
                    }
                }
                keys[j] = key;
                ids[j] = s4[0];
                break;
            }
        }
        {
            u8 *g = ids;
            for (i = 0; i < 8; i++) {
                if (flag[i] == 1 && S[i * 0x28 + 1] == s3) {
                    S[i * 0x28 + 0x10] = *g;
                    g++;
                }
            }
        }
    }

    {
        u32 mode = *(u8 *)D_00591F24;
        if (mode <= 8) {
            if (mode == 0) {
                if (*(u8 *)D_00591E4C != 0) func_0099C460(*(u8 *)D_00591E4C);
            } else if (mode == 7) {
                d = *(u8 *)D_00591E4D;
                idx = (d == 0xFF) ? 1 : d % 23;
                s2 = P + idx * 0x240;
                saved = s2[0x24];
                func_0099C460(d);
                {
                    s32 a4 = s2[0x12];
                    s32 count = 0;
                    for (i = 0; i < 8; i++) {
                        e = S + i * 0x28;
                        if (e[1] == 0xFF) continue;
                        if (e[0] >= 9) continue;
                        {
                            s32 v = e[0x10];
                            s32 ix = (v == 0xFF) ? 1 : v % 23;
                            if (P[ix * 0x240 + 0x12] == a4) count++;
                        }
                    }
                    if (count >= 2) func_0099C460(*(u8 *)D_00591E4E);
                }
            } else if (mode == 1 || mode == 2 || mode == 3 || mode == 6) {
                d = *(u8 *)D_00591E4D;
                idx = (d == 0xFF) ? 1 : d % 23;
                saved = P[idx * 0x240 + 0x24];
                func_0099C460(d);
            } else if (mode == 4 || mode == 8) {
                d = *(u8 *)D_00591E4D;
                idx = (d == 0xFF) ? 1 : d % 23;
                saved = P[idx * 0x240 + 0x24];
                func_0099C460(d);
                func_0099C460(*(u8 *)D_00591E4E);
            }
        }
    }

    func_0099C790();

    {
        s32 m = *(u8 *)D_00591F24;
        if (m == 3 || m == 6 || m == 2 || m == 7 || m == 1) {
            d = *(u8 *)D_00591E4D;
            idx = (d == 0xFF) ? 1 : d % 23;
            if (saved != P[idx * 0x240 + 0x24]) *(s32 *)D_00591E14 = 0;
        }
    }

    {
        s32 m = *(u8 *)D_00591F24;
        if (m != 4) {
            u8 a;
            if (m == 6 || m == 3 || m == 1) {
                s0 = 0;
            } else if (m == 2) {
                s0 = 1;
            } else {
                goto tail;
            }
            a = *(u8 *)D_005926FF;
            if (a == 5 || a == 2 || a == 3 || a == 4 || a == 1) {
                *(u8 *)D_00592942 = 0xFF;
                d = *(u8 *)D_00591E4D;
                for (i = 0; i < 8; i++) {
                    e = S + i * 0x28;
                    e[0x11] = e[0x10];
                    if (d == e[0x10]) *(u8 *)D_00592942 = i;
                }
            }
            s2 = (u8 *)D_0058E7F0;
            for (s3 = 0; s3 < 0x16; s3++, s2 += 0x240) {
                s32 s1;
                s32 s4v;
                if (*(u8 *)D_00591C09 == 5) {
                    if (s2[0x16] == 0xFF) continue;
                    if (func_00B29B50() != 0) {
                        if (s2[0] == *(u8 *)D_00591E4E) continue;
                    }
                }
                if (s2[0x10] == 0) continue;
                if (*(u8 *)D_00591F24 == 1) {
                    if (func_00BF3FC0() != 0) {
                        if (*(u8 *)D_00591E4E == s2[0]) continue;
                    }
                }
                s4v = s2[0];
                if (*(u8 *)D_00591E4D == s4v) continue;
                s1 = 0;
                if (s0 != 0) {
                    if (s4v == (u8)func_00BF04E0()) s1 = 1;
                }
                {
                    s32 found = 0;
                    for (j = 0; j < 8; j++) {
                        if (s4v == S[j * 0x28 + 0x10]) {
                            found = 1;
                            break;
                        }
                    }
                    if (found || (s1 & 0xFF) != 0) {
                        s32 t = s2[0x16];
                        s32 r;
                        if (t == 1) {
                            if (*(u16 *)(s2 + 0x18) == 0x30) continue;
                        } else if (t == 0x35) {
                            continue;
                        }
                        if (*(u8 *)(*(u8 **)(s2 + 4) + 0x2C) == 0) r = 0;
                        else if (t == 0xFF || t == 0x4F || t == 0x46 || t == 0x14 || t == 0x11) r = 0;
                        else r = 1;
                        if (r == 0) continue;
                        s2[0x16] = 1;
                        *(u16 *)(s2 + 0x18) = 0x30;
                    } else {
                        s32 t = s2[0x16];
                        s32 r;
                        if (t == 7 || t == 0x35) continue;
                        if (*(u8 *)(*(u8 **)(s2 + 4) + 0x2C) == 0) r = 0;
                        else if (t == 0xFF || t == 0x4F || t == 0x46 || t == 0x14 || t == 0x11) r = 0;
                        else r = 1;
                        if (r == 0) continue;
                        s2[0x16] = 7;
                        *(u16 *)(s2 + 0x18) = 0;
                    }
                }
            }
        }
    }
tail:
    func_0099C680();
    func_0099C5D0();
    {
        u8 a = *(u8 *)D_005926FF;
        if (a == 5 || a == 2 || a == 3 || a == 4 || a == 1) {
            *(u8 *)D_00592942 = 0xFF;
            d = *(u8 *)D_00591E4D;
            for (i = 0; i < 8; i++) {
                e = S + i * 0x28;
                e[0x11] = e[0x10];
                if (d == e[0x10]) *(u8 *)D_00592942 = i;
            }
        }
    }
}
