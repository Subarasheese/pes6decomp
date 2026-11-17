/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002937A0(u8 a);
extern s32 func_00292F00(u8 a);
extern void func_002C82C0(void *a, void *b);
extern void func_002C96C0(void *a, s32 b, void *c);
extern void func_002C8220(void *a, s32 b);
extern void func_002CA080(void *a);
extern void func_0028BD40(void *a, void *b);
extern void func_002C7930(void *a);
extern s32 func_0028F230(s32 a, void *b, s32 c, void *d, s32 e);
extern s32 func_00C28AD0(u8 *a, s32 b, s32 c);
extern s32 func_00C282B0(u8 *a, s32 b);
extern s32 func_00C27000(u8 *a, s32 b, s32 c, s32 d);
extern s32 func_00C31110(u8 *a, s32 b, s32 c, void *d, s32 e, s32 f);
extern s32 func_00C32010(u8 *a, s32 b);
extern s32 func_0099D8C0(s32 a, s32 b, s32 c);
extern s32 func_009A0270(void);
extern s32 func_00277220(void *a, s32 b);
extern char Pes6MatchSquads[];
extern char D_00591E00[];
extern char D_00591BC3[];
extern char D_00CB38E0[];
extern char D_00CB38A0[];

s32 func_00C2ACF0(u8 *p, s32 q) {
    u8 flags[11];
    s32 st[3];
    s8 buf[32];
    u8 *s1;
    u8 *qc, *pf6, *pf8;
    char *a0b;
    s32 *c18, *cd8;
    s32 offe;
    s32 mode;
    s32 id;
    s32 s2, s4, s6, s7, s0, s3, i, v, t, sum, a1, n, a4;
    u8 *qp;
    char *tbl;
    char *ent;
    char *e1;
    u8 *base;

    base = p + 0xAC;
    id = p[0];
    func_002C82C0(buf, p + 0xAC);
    s6 = 11;
    s1 = flags;
    s4 = 11;
    tbl = Pes6MatchSquads + id * 0x6900;
    for (i = 0; i < 11; i++) {
        flags[i] = 0;
        t = func_002937A0(p[0xC0 + i]) & 0xFF;
        if (t == 4) {
            if (*(u8 *)(tbl + p[0x8C + i] * 840 + 0xD4) == 0) {
                s6 = i;
            }
        } else if (t == 3) {
            if (*(u8 *)(tbl + p[0x8C + i] * 840 + 0xD4) == 0) {
                s4 = i;
            }
        }
    }
    s0 = buf[0x0D];
    s3 = buf[0x0B];
    a1 = buf[0x0C] + buf[0x0E];
    sum = buf[0x0F] + (a1 + (s3 + s0));
    if (s4 < 11 || s6 < 11) {
        s32 r = func_00C28AD0(p, q, id);
        if (r == -1) {
            r = func_00C282B0(p, q);
        }
        if (r == -1) {
            return 0;
        }
        if (s4 < 11) {
            u8 x = p[0x8C + s4];
            flags[s4] = 1;
            p[0x8C + s4] = p[0x8C + r];
            p[0x8C + r] = x;
        } else {
            u8 x = p[0x8C + s6];
            flags[s6] = 1;
            p[0x8C + s6] = p[0x8C + r];
            p[0x8C + r] = x;
        }
    } else {
        if (buf[9] < 4 && buf[10] == 0 && a1 != 0 && sum - a1 >= 3) {
            for (i = 1; i < 11; i++) {
                t = p[0xC0 + i];
                if (t == 0x17 || t == 0x10) {
                    p[0xC0 + i] = 9;
                    p[0xCB + i] = 0;
                    p[0xD6 + i] = 1;
                    func_002C96C0(p + 0xAC, i & 0xFF, buf);
                    flags[i] = 1;
                } else if (t == 0x16 || t == 0xF) {
                    p[0xC0 + i] = 8;
                    p[0xCB + i] = 0;
                    p[0xD6 + i] = 1;
                    func_002C96C0(p + 0xAC, i & 0xFF, buf);
                    flags[i] = 1;
                }
            }
            func_002C82C0(buf, p + 0xAC);
            for (i = 1; i < 11; i++) {
                t = func_002937A0(p[0xC0 + i]) & 0xFF;
                if (t == 1 || t == 2 || t == 3) {
                    func_002C96C0(p + 0xAC, i & 0xFF, buf);
                }
            }
        } else {
            s2 = func_00C28AD0(p, q, id);
            if (s2 == -1) {
                s2 = func_00C282B0(p, q);
                mode = 2;
            } else {
                mode = 3;
            }
            if (s2 == -1) {
                return 0;
            }
            if (s0 == 3 && sum == s0) {
                flags[s2] = func_00C27000(p, q, s2, 7);
            } else {
                if (s3 >= 3) {
                    return 0;
                }
                flags[s2] = func_00C27000(p, q, s2, 5);
            }
        }
    }
    /* scan */
scan:
    v = 0;
    for (;;) {
        if (*s1) break;
        v++;
        s1++;
        if (v >= 11) break;
    }
    if (v == 11) {
        return 0;
    }
    s2 = 0;
    for (;;) {
        if (flags[s2] != 0) {
            qp = p + s2;
            if ((func_0099D8C0(id & 0xFF, qp[0x8C], qp[0xC0]) & 0xFF) != 9) {
                s32 e = qp[0x8C];
                qc = qp + 0xC0;
                pf6 = (u8 *)D_00591E00 + id + 0xF6;
                pf8 = (u8 *)D_00591E00 + id + 0xF8;
                offe = e * 840;
                a0b = Pes6MatchSquads + offe;
                c18 = (s32 *)(tbl + offe + 0x18);
                cd8 = (s32 *)(tbl + offe + 0xD8);
                s6 = -1;
                for (s4 = 0; s4 < 11; s4++) {
                    t = func_002937A0(p[0xC0 + s4]) & 0xFF;
                    st[0] = 0;
                    st[1] = 0;
                    st[2] = 0;
                    st[2] = ((s32 *)D_00CB38E0)[t];
                    st[1] = ((s32 *)D_00CB38A0)[t];
                    a4 = *cd8 / (*c18 / 100);
                    if (a4 >= 0x3D) {
                        a4 = 100;
                    }
                    ent = a0b + p[0] * 0x6900;
                    s3 = func_0028F230(q, ent + 0x68, p[0xC0 + s4], st, a4);
                    if (func_00C32010(p, e) == 0) {
                        v = 0;
                    } else if (*(u8 *)(ent + 0xF8) != 0 || *(u8 *)(ent + 0xF9) != 0) {
                        v = 0;
                    } else {
                        n = *(u8 *)(ent + 0x102);
                        if (((func_009A0270() & 0xFF) - 5) < n) {
                            v = 0;
                        } else {
                            v = func_00277220(ent + 0xF0, 1);
                        }
                    }
                    if (v == 2) {
                        s3 = s3 / 2;
                    }
                    if (s6 < s3) {
                        s6 = s3;
                        s7 = s4;
                    }
                }
                if (s6 > 0) {
                    u8 *o = p + s7;
                    s32 e2 = o[0x8C];
                    t = func_002937A0(o[0xC0]) & 0xFF;
                    st[0] = 0;
                    st[1] = 0;
                    st[2] = 0;
                    st[2] = ((s32 *)D_00CB38E0)[t];
                    st[1] = ((s32 *)D_00CB38A0)[t];
                    e1 = tbl + e2 * 840;
                    a4 = *(s32 *)(e1 + 0xD8) / (*(s32 *)(e1 + 0x18) / 100);
                    if (a4 >= 0x3D) {
                        a4 = 100;
                    }
                    ent = Pes6MatchSquads + p[0] * 0x6900 + e2 * 840;
                    s3 = func_0028F230(q, ent + 0x68, o[0xC0], st, a4);
                    if (func_00C32010(p, e2) == 0) {
                        v = 0;
                    } else if (*(u8 *)(ent + 0xF8) != 0 || *(u8 *)(ent + 0xF9) != 0) {
                        v = 0;
                    } else {
                        n = *(u8 *)(ent + 0x102);
                        if (((func_009A0270() & 0xFF) - 5) < n) {
                            v = 0;
                        } else {
                            v = func_00277220(ent + 0xF0, 1);
                        }
                    }
                    if (v == 2) {
                        s3 = s3 / 2;
                    }
                    if (s3 < s6) {
                        u8 x = o[0x8C];
                        o[0x8C] = qp[0x8C];
                        qp[0x8C] = x;
                        s2--;
                        goto next;
                    }
                }
                /* B3C0 */
                if ((D_00591BC3[0] & 0xFF) - (*pf6 + *pf8) == 0) {
                    func_002C7930(p);
                    return 0;
                }
                t = func_002937A0(*qc) & 0xFF;
                st[1] = 0;
                st[2] = 0;
                st[0] = 0;
                a4 = ((s32 *)D_00CB38E0)[t];
                n = ((s32 *)D_00CB38A0)[t];
                st[2] = a4;
                st[1] = n;
                func_00C31110(p, q, s2, st, 6, a4);
                func_0028BD40(p + 0xC0, p + 0xAC);
                func_002CA080(buf);
                for (i = 0; i < 11; i++) {
                    if (*(u8 *)(Pes6MatchSquads + p[0] * 0x6900 + p[0x8C + i] * 840 + 0xD4) != 0) {
                        func_002C8220(buf, (base + i)[0x14]);
                    }
                }
                for (s2 = 0; s2 < 11; s2++) {
                    if (mode == (func_00292F00(p[0xC0 + s2]) & 0xFF)) {
                        func_002C96C0(p + 0xAC, s2 & 0xFF, buf);
                    }
                }
            }
        }
next:
        s2++;
        if (s2 >= 11) {
            return 1;
        }
    }
}
