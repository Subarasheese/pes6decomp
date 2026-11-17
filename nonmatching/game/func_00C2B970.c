/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern char D_005E2C30[];
extern char D_00CB38EC[];
extern char D_00CB38AC[];
extern char D_00CB38E0[];
extern char D_00CB38A0[];

s32 func_00277220(void *, s32);
s32 func_0028F230(void *, void *, s32, void *, s32);
s32 func_0028F9D0(void *, void *, s32, u32);
s32 func_00292D50(void);
s32 func_00292F00(u32);
s32 func_002937A0(u32, u32, u32, u32);
void func_002C7930(void *);
void func_002C8220(void *, u32, u32, u32);
void func_002C96C0(void *, u32, void *);
void func_002CA080(void *);
s32 func_0099D8C0(u32, u32, u32);
s32 func_009A0270(void);
s32 func_00C27000(void *, void *, s32, s32);
s32 func_00C278C0(void *, void *, u32);
void func_00C2C6F0(void *, void *, u32, u32);
s32 func_00C2CC20(void *, void *, u32, s32, void *);
s32 func_00C31110(void *, void *, s32, void *, s32);
s32 func_00C32010(void *, u32);

s32 func_00C2B970(u8 *p, u8 *q, u32 a2, u32 a3) {
    u32 A1 = (u32)q, A2 = a2, A3 = a3;
    s32 s0 = 0, s2, s3, s7, fp = 0, s1, r, k, i3, i2, mn;
    u8 s6;
    u8 *team, *pl, *s2p;
    s8 buf[0x18];
    s32 x[3];
    u8 arr[4];
    u8 flag;

    s6 = p[0];
    team = (u8 *)D_00592980 + s6 * 26880;

    for (s2 = 0; s2 < 11; s2++) {
        if ((team + p[0x8C + s2] * 840)[0xD4]) {
            r = func_00292F00(p[0xC0 + s2]) & 0xff;
            if (r == 1) {
                s0++;
            } else if (r == 3) {
                fp++;
            }
        }
    }
    if (fp >= 4) return 0;
    if (fp >= 3 && q[0] < 2) {
        u8 *tab = (u8 *)D_005E2C30 + p[0] * 358 + 0x84;
        s3 = 0;
        s7 = 0;
        for (s2 = 1; s2 < 11; s2++) {
            if ((func_00292F00(p[0xC0 + s2]) & 0xff) == 2) s7++;
            if ((func_00292F00(tab[s2]) & 0xff) == 2) s3++;
        }
        if (s7 - s3 > 0) return 0;
    }

    if (s0 >= 5) {
        A1 = (u32)q;
        A2 = s6;
        A3 = 3;
        s3 = func_00C2CC20(p, q, s6, 3, &mn);
        if (s3 == -1) goto L_BBC8;
        A2 = s3 & 0xff;
        func_00C2C6F0(p, q, A2, A3);
        func_002CA080(buf);
        for (s0 = 0; s0 < 11; s0++) {
            A1 = p[0x8C + s0] * 15;
            if (((u8 *)D_00592980 + p[0] * 26880 + p[0x8C + s0] * 840)[0xD4]) {
                A1 = p[0xC0 + s0];
                func_002C8220(buf, A1, A2, A3);
            }
        }
        arr[0] = 0xff;
        arr[1] = 0xff;
        arr[2] = 0xff;
        for (s0 = 1; s0 < 11; s0++) {
            if (s0 == s3) continue;
            r = func_002937A0(p[0xC0 + s0], A1, A2, A3) & 0xff;
            if (r == 3) {
                A1 = (u32)arr;
                A3 = 0;
                for (i3 = 0; i3 < 3; i3++) {
                    if (arr[i3] == 0xff) break;
                    if (p[0xAB + 2 * s0] < p[0xAB + 2 * arr[i3]]) break;
                    A1++;
                }
                A3 = i3;
                A2 = 2;
                if (i3 < 2) {
                    i2 = 2;
                    while (i3 < i2) {
                        arr[i2] = arr[i2 - 1];
                        i2--;
                    }
                    A2 = i2;
                }
                arr[i3] = s0;
            } else if (r == 1 || r == 2) {
                arr[1] = s0;
            }
        }
        if (!(arr[0] > 0 && arr[0] < 11)) {
            if (!(arr[1] > 0 && arr[1] < 11)) {
                func_002C7930(p);
                return 0;
            }
        }
        if (buf[8] > 0) {
            if (arr[0] > 0 && arr[0] < 11) {
                p[0xC0 + arr[0]] = 3;
                p[0xCB + arr[0]] = 0;
                p[0xD6 + arr[0]] = 0;
            }
            if (arr[1] > 0 && arr[1] < 11) {
                p[0xC0 + arr[1]] = 4;
                p[0xCB + arr[1]] = 0;
                p[0xD6 + arr[1]] = 0;
            }
        } else if (buf[9] == 1) {
            if (arr[0] > 0 && arr[0] < 11) {
                p[0xC0 + arr[0]] = 3;
                p[0xCB + arr[0]] = 0;
                p[0xD6 + arr[0]] = 0;
            }
        } else {
            if (arr[0] > 0 && arr[0] < 11) {
                p[0xC0 + arr[0]] = 1;
                p[0xCB + arr[0]] = 0;
                p[0xD6 + arr[0]] = 0;
            }
            if (arr[1] > 0 && arr[1] < 11) {
                p[0xC0 + arr[1]] = 7;
                p[0xCB + arr[1]] = 0;
                p[0xD6 + arr[1]] = 0;
            }
        }
        goto L_BBC8;
    }

    s3 = -1;
    if (s0 == 4) {
        s2 = 0;
        for (s0 = 0; s0 < 11; s0++) {
            if ((team + p[0x8C + s0] * 840)[0xD4]) {
                if ((func_002937A0(p[0xC0 + s0], A1, A2, A3) & 0xff) == 5) s2++;
            }
        }
        if (s2 >= 2) {
            A1 = (u32)q;
            A2 = s6;
            s3 = func_00C278C0(p, q, s6);
            flag = 2;
        }
        if (s3 == -1) {
            mn = 0x7fffffff;
            x[0] = 0;
            x[1] = *(s32 *)D_00CB38AC;
            x[2] = *(s32 *)D_00CB38EC;
            for (s7 = 0; s7 < 11; s7++) {
                r = func_002937A0(p[0xC0 + s7], A1, A2, A3) & 0xff;
                if (r == 1 || r == 2 || r == 3) {
                    s0 = p[0x8C + s7];
                    {
                        s32 a0 = *(s32 *)(team + s0 * 840 + 0x18);
                        s32 a1 = a0 / 100;
                        s32 a4 = *(s32 *)(team + s0 * 840 + 0xD8) / a1;
                        if (a4 >= 0x3d) a4 = 100;
                        s2p = (u8 *)D_00592980 + p[0] * 26880 + s0 * 840;
                        A2 = 3;
                        A3 = (u32)x;
                        r = func_0028F230(q, s2p + 0x68, 3, x, a4);
                    }
                    A1 = s0;
                    s0 = r;
                    if (func_00C32010(p, p[0x8C + s7]) == 0) {
                        k = 0;
                    } else if (s2p[0xF8] != 0) {
                        k = 0;
                    } else if (s2p[0xF9] != 0) {
                        k = 0;
                    } else {
                        s32 t = s2p[0x102];
                        r = (func_009A0270() & 0xff) - 5;
                        if (r < t) {
                            k = 0;
                        } else {
                            A1 = 1;
                            k = func_00277220(s2p + 0xF0, 1);
                        }
                    }
                    if (k == 2) s0 = s0 / 2;
                    if (s0 < mn) {
                        mn = s0;
                        s3 = s7;
                    }
                }
            }
            if (s3 != -1) {
                A2 = s3 & 0xff;
                A1 = (u32)q;
                func_00C2C6F0(p, q, A2, A3);
                for (s1 = 1; s1 < 11; s1++) {
                    if (s1 != s3) {
                        r = func_002937A0(p[0xC0 + s1], A1, A2, A3) & 0xff;
                        if (r == 1 || r == 2 || r == 3) {
                            if (s1 > 0 && s1 < 11) {
                                p[0xC0 + s1] = 3;
                                p[0xCB + s1] = 0;
                                p[0xD6 + s1] = 0;
                            }
                        }
                    }
                }
                flag = 1;
            } else {
                flag = 1;
            }
        }
    }

L_BBC8:
    if (s3 == -1) {
        A1 = (u32)q;
        A2 = s6;
        s3 = func_00C278C0(p, q, s6);
        flag = 2;
    }
    if (s3 == -1) {
        func_002C7930(p);
        return 0;
    }
    func_002CA080(buf);
    for (s0 = 0; s0 < 11; s0++) {
        A1 = p[0x8C + s0] * 15;
        if (((u8 *)D_00592980 + p[0] * 26880 + p[0x8C + s0] * 840)[0xD4]) {
            A1 = p[0xC0 + s0];
            func_002C8220(buf, A1, A2, A3);
        }
    }
    if (fp >= 3 && q[0] < 2) {
        s7 = (buf[0xF] < 2) ? 9 : 7;
    } else {
        s1 = 0;
        s7 = 12;
        for (s0 = 11; s0 < (func_00292D50() & 0xff); s0++) {
            pl = (u8 *)D_00592980 + p[0] * 26880 + p[0x8C + s0] * 840;
            if (pl[0xD4]) {
                A1 = (u32)(pl + 0x68);
                A2 = 12;
                r = func_0028F9D0(q, pl + 0x68, 12, A3);
                if (s1 < r) s1 = r;
            }
        }
        s2 = 0;
        for (s0 = 11; s0 < (func_00292D50() & 0xff); s0++) {
            pl = (u8 *)D_00592980 + p[0] * 26880 + p[0x8C + s0] * 840;
            if (pl[0xD4]) {
                A1 = (u32)(pl + 0x68);
                A2 = 11;
                r = func_0028F9D0(q, pl + 0x68, 11, A3);
                if (s2 < r) s2 = r;
            }
        }
        if (s1 < s2) s7 = 11;
    }
    A1 = (u32)q;
    A2 = s3;
    A3 = s7;
    func_00C27000(p, q, s3, s7);
    func_002CA080(buf);
    for (s0 = 0; s0 < 11; s0++) {
        A1 = p[0x8C + s0] * 15;
        if (((u8 *)D_00592980 + p[0] * 26880 + p[0x8C + s0] * 840)[0xD4]) {
            A1 = p[0xC0 + s0];
            func_002C8220(buf, A1, A2, A3);
        }
    }
    s1 = flag;
    for (s0 = 0; s0 < 11; s0++) {
        if (s1 == (func_00292F00(p[0xC0 + s0]) & 0xff)) {
            A1 = s0 & 0xff;
            A2 = (u32)buf;
            func_002C96C0(p + 0xAC, s0 & 0xff, buf);
        }
    }
    A1 = s3 & 0xff;
    A2 = p[s3 + 0xC0];
    if ((func_0099D8C0(s6, A1, A2) & 0xff) >= 9) return 1;
    x[0] = 0;
    x[1] = ((s32 *)D_00CB38A0)[s7 & 0xff];
    x[2] = ((s32 *)D_00CB38E0)[s7 & 0xff];
    if (func_00C31110(p, q, s3, x, 6) != 0) return 1;
    func_002C7930(p);
    return 0;
}
