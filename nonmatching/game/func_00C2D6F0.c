/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern char D_00592A57[];
extern char D_00591E00[];
extern char D_00591A90[];
extern char D_00591EF6[];
extern char D_00591EF8[];
extern char D_00591BC3[];
extern char D_00CB3300[];
extern char D_00CB3828[];
extern char D_00CB3800[];

s32 func_002937A0(s32 a0);
s32 func_002BE430(void);
void func_002C31F0(void *buf, s32 team);
s32 func_00C17E10(s32 a0, s32 a1);
f32 func_00C22310(void);
f32 func_00C22320(s32 a0, s32 a1);
s32 func_00C2E6A0(void *q, s32 team, void *a2, void *a3);
s32 func_00C30C10(void *p, void *q, s32 idx, s32 a3);
s32 func_00C31110(void *p, void *q, s32 idx, void *buf, s32 a4);

s32 func_00C2D6F0(u8 *p, u8 *q) {
    s32 A[48];
    s32 B[48];
    u32 buf[3];
    s32 team, chk, i, sa, sb, s1, s4, s5, s6, pidx, x, lo, cnt, r150, best_idx, found, r;
    f32 f0, f20, f21;
    u8 *pl;

    team = p[0];
    if (!((p[3] >> 2) & 1)) {
        return 0;
    }
    chk = (s8)func_00C2E6A0(q, team, D_00CB3828, D_00CB3800);
    if (chk < 0) {
        return 0;
    }
    func_002C31F0(A, team & 0xff);
    func_002C31F0(B, team != 1);

    sa = 0;
    sb = 0;
    for (i = 0; i < 6; i++) {
        sa += A[i] + A[i + 6] + A[i + 12] + A[i + 18];
        sb += B[24 + i] + B[30 + i] + B[36 + i] + B[42 + i];
    }

    if (sa < (3 * sb) / 2) {
        f21 = -10.0f;
        s4 = -1;
        for (s5 = 0; s5 < 11; s5++) {
            r = func_002937A0(p[0xC0 + s5]) & 0xff;
            if (r == 6 || r == 8 || r == 7 || r == 5) {
                s32 a1 = func_002937A0(p[0xC0 + s5]) & 0xff;
                s1 = p[0x8C + s5];
                pl = (u8 *)D_00592980 + team * 26880 + s1 * 840;
                if (pl[0xD4] == 0) {
                    f0 = 0.0f;
                } else if (pl[0xD7] != 0) {
                    f0 = 0.0f;
                } else {
                    s32 b = a1 & 0xff;
                    if (b != (func_002937A0(p[0xC0 + s5]) & 0xff)) {
                        f0 = 0.0f;
                    } else {
                        found = 0;
                        lo = (u8)D_00591E00[team + 0xF8];
                        cnt = (u8)D_00591E00[team + 0xF6];
                        for (i = lo; i < lo + cnt; i++) {
                            if (s1 == (u8)D_00591A90[team * 0x8B + i * 8 + 0x53]) {
                                found = 1;
                                break;
                            }
                        }
                        if (found) {
                            f0 = 0.0f;
                        } else {
                            s6 = s1 & 0xff;
                            s1 = p[0];
                            f20 = func_00C22320(s1, s6);
                            if (q[14] < 3) {
                                x = (u8)D_00592980[s1 * 26880 + s6 * 840 + 0x89] & 7;
                                if (p[0x15] < x) {
                                    f20 += (f32)(u32)x;
                                }
                            }
                            f0 = f20 - func_00C22310();
                        }
                    }
                }
                if (f0 < f21) {
                    f21 = f0;
                    s4 = s5;
                }
            }
        }
        if (s4 != -1) {
            pidx = p[0x8C + s4];
            if (*(u8 *)(D_00592A57 + team * 26880 + pidx * 840) == 0) {
                buf[0] = 0;
                buf[1] = 0;
                buf[2] = 0x800108;
                if (func_00C31110(p, q, s4, buf, 5)) {
                    x = (u8)D_00591BC3[0] - ((u8)D_00591EF6[team] + (u8)D_00591EF8[team]);
                    if (!(chk < x)) {
                        return 1;
                    }
                }
            }
        }
    }

    {
        s32 a0s, a5s, b0s, b5s;
        a0s = 0; a5s = 0; b0s = 0; b5s = 0;
        r150 = 0;
        for (i = 0; i < 8; i++) {
            a0s += A[i * 6];
            a5s += A[i * 6 + 5];
            b0s += B[i * 6];
            b5s += B[i * 6 + 5];
        }
        if (b0s < b5s) {
            x = b5s;
            r150 = a5s;
            s6 = 1;
        } else {
            x = b0s;
            r150 = a0s;
            s6 = 0;
        }
    }

    if ((3 * r150) / 2 < x) {
        best_idx = -1;
        f20 = -10.0f;
        for (s1 = 1; s1 < 11; s1++) {
            r = p[0xC0 + s1];
            if (r == 30 || r == 16 || r == 23 || r == 9) {
                continue;
            }
            if (r == 29 || r == 15 || r == 22 || r == 8) {
                if (s6 == 0) {
                    s32 a1 = func_002937A0(r) & 0xff;
                    s5 = p[0x8C + s1];
                    pl = (u8 *)D_00592980 + team * 26880 + s5 * 840;
                    if (pl[0xD4] == 0) {
                        f0 = 0.0f;
                    } else if (pl[0xD7] != 0) {
                        f0 = 0.0f;
                    } else {
                        s4 = a1 & 0xff;
                        if (s4 != (func_002937A0(p[0xC0 + s1]) & 0xff)) {
                            f0 = 0.0f;
                        } else {
                            found = 0;
                            lo = (u8)D_00591E00[team + 0xF8];
                            cnt = (u8)D_00591E00[team + 0xF6];
                            for (i = lo; i < lo + cnt; i++) {
                                if (s5 == (u8)D_00591A90[team * 0x8B + i * 8 + 0x53]) {
                                    found = 1;
                                    break;
                                }
                            }
                            if (found) {
                                f0 = 0.0f;
                            } else {
                                s4 = p[0];
                                s5 = s5 & 0xff;
                                f21 = func_00C22320(s4, s5);
                                if (q[14] < 3) {
                                    x = (u8)D_00592980[s4 * 26880 + s5 * 840 + 0x89] & 7;
                                    if (p[0x15] < x) {
                                        f21 += (f32)(u32)x;
                                    }
                                }
                                f0 = f21 - func_00C22310();
                            }
                        }
                    }
                    if (f0 < f20) {
                        f20 = f0;
                        best_idx = s1;
                    }
                }
            }
        }
        if (best_idx != -1) {
            pidx = p[0x8C + best_idx];
            if (*(u8 *)(D_00592A57 + team * 26880 + pidx * 840) == 0) {
                buf[0] = 0;
                buf[1] = 0xE00;
                buf[2] = 8;
                if (func_00C31110(p, q, best_idx, buf, 5)) {
                    x = (u8)D_00591BC3[0] - ((u8)D_00591EF6[team] + (u8)D_00591EF8[team]);
                    if (!(chk < x)) {
                        return 1;
                    }
                }
            }
        }
    }

    {
        u8 *tab = *(u8 **)D_00CB3300;
        s32 off = team * 756;
        u8 *ent = tab + off;
        for (s5 = 1; s5 < 11; s5++) {
            r = func_002937A0(p[0xC0 + s5]) & 0xff;
            if (r == 10 || r == 12 || r == 11 || r == 9) {
                s32 k = func_00C17E10(team & 0xff, p[0x8C + s5]) & 0xff;
                r150 += *(s32 *)(ent + k * 40 + 0x44);
            }
        }
        if ((u32)(3 * r150) < *(u32 *)(tab + off + 0x20)) {
            return 0;
        }
    }

    if ((s16)func_002BE430() <= 0) {
        return 0;
    }
    best_idx = -1;
    f20 = -10.0f;
    for (s1 = 1; s1 < 11; s1++) {
        r = func_002937A0(p[0xC0 + s1]) & 0xff;
        if (r == 10 || r == 12 || r == 11 || r == 9) {
            s4 = p[0x8C + (s1 & 0xff)];
            pl = (u8 *)D_00592980 + team * 26880 + s4 * 840;
            if (pl[0xD4] == 0) {
                f0 = 0.0f;
            } else if (pl[0xD7] != 0) {
                f0 = 0.0f;
            } else if (r != (func_002937A0(p[0xC0 + (s1 & 0xff)]) & 0xff)) {
                f0 = 0.0f;
            } else {
                found = 0;
                lo = (u8)D_00591E00[team + 0xF8];
                cnt = (u8)D_00591E00[team + 0xF6];
                for (i = lo; i < lo + cnt; i++) {
                    if (s4 == (u8)D_00591A90[team * 0x8B + i * 8 + 0x53]) {
                        found = 1;
                        break;
                    }
                }
                if (found) {
                    f0 = 0.0f;
                } else {
                    s5 = s4 & 0xff;
                    s4 = p[0];
                    f21 = func_00C22320(s4, s5);
                    if (q[14] < 3) {
                        x = (u8)D_00592980[s4 * 26880 + s5 * 840 + 0x89] & 7;
                        if (p[0x15] < x) {
                            f21 += (f32)(u32)x;
                        }
                    }
                    f0 = f21 - func_00C22310();
                }
            }
            if (f0 < f20) {
                f20 = f0;
                best_idx = s1;
            }
        }
    }
    if (best_idx == -1) {
        return 0;
    }
    pidx = p[0x8C + best_idx];
    if (*(u8 *)(D_00592A57 + team * 26880 + pidx * 840) != 0) {
        return 0;
    }
    if (func_00C30C10(p, q, best_idx, 5) == 0) {
        return 0;
    }
    return 1;
}
