/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 func_0011D210(f32);
extern void func_0012BFC0(f32 *, f32 *);
extern void func_0012BFE0(f32 *, f32 *, void *);
extern void func_00131D40(void);
extern void func_00131DB0(void *);
extern void func_001C0290(void *);
extern void *func_001C02D0(s32);
extern char D_00375C00[];

void func_00130000(void **arg0, u8 *arg1) {
    void *buf[256];
    f32 spC0[4];
    f32 spB0[4];
    f32 spA0[4];
    void **tbl;
    char *n;
    s32 cnt, i, s1, s0, a0;
    char *p;

    func_00131D40();
    func_00131DB0(arg0);
    cnt = 0;
    p = (char *)*arg0;
    while (p != 0) {
        p = *(char **)(p + 0x104);
        cnt++;
    }
    tbl = buf;
    if (cnt >= 0x101) {
        tbl = (void **)func_001C02D0(cnt * 4);
        if (tbl == 0) return;
    }
    {
        void **q = tbl;
        p = (char *)*arg0;
        while (p != 0) {
            *q = p;
            p = *(char **)(p + 0x104);
            q++;
        }
    }
    n = (char *)*arg0;
    i = 0;
    while (n != 0) {
        u8 c = arg1[i];
        if (c == 0xFF) {
            *(s32 *)(n + 0x10C) = 0;
            *(u8 *)(n + 0x101) = 0;
        } else if (i == c) {
            *(s32 *)(n + 0x10C) = 0;
            *(u8 *)(n + 0x101) = 1;
        } else {
            char *o;
            *(void **)(n + 0x10C) = tbl[c];
            if (i < arg1[i]) {
                func_0012BFC0(spC0, (f32 *)(n + 0x60));
                func_0012BFE0(spB0, spC0, *(char **)(n + 0x10C) + 0x60);
                s1 = 1;
                if (func_0011D210(spB0[0]) <= 0.001f) s1 = 0;
                s0 = 1;
                if (func_0011D210(spB0[1]) <= 0.001f) s0 = 0;
                a0 = 1;
                if (func_0011D210(spB0[2]) <= 0.001f) a0 = 0;
                if (spB0[3] < 0.999f && (s1 != 0 || a0 != 0)) {
                    if (s1 == 0 && s0 == 0) {
                        *(f32 *)(n + 0xE0) = 1.0f;
                        *(s32 *)(n + 0xE4) = 0;
                        *(s32 *)(n + 0xE8) = 0;
                        *(s32 *)(n + 0xEC) = 0;
                        o = *(char **)(n + 0x10C);
                        *(s32 *)(o + 0xE0) = 0;
                        o = *(char **)(n + 0x10C);
                        *(s32 *)(o + 0xE4) = 0;
                        o = *(char **)(n + 0x10C);
                        *(s32 *)(o + 0xE8) = 0;
                        o = *(char **)(n + 0x10C);
                        *(f32 *)(o + 0xEC) = 1.0f;
                    } else if (s0 == 0 && a0 == 0) {
                        *(s32 *)(n + 0xE0) = 0;
                        *(f32 *)(n + 0xE8) = 1.0f;
                        *(s32 *)(n + 0xE4) = 0;
                        *(s32 *)(n + 0xEC) = 0;
                        o = *(char **)(n + 0x10C);
                        *(s32 *)(o + 0xE0) = 0;
                        o = *(char **)(n + 0x10C);
                        *(s32 *)(o + 0xE4) = 0;
                        o = *(char **)(n + 0x10C);
                        *(s32 *)(o + 0xE8) = 0;
                        o = *(char **)(n + 0x10C);
                        *(f32 *)(o + 0xEC) = 1.0f;
                    } else {
                        func_0012BFC0(spA0, spB0);
                        func_0012BFE0((f32 *)(n + 0xE0), spA0, D_00375C00);
                        func_0012BFE0((f32 *)(*(char **)(n + 0x10C) + 0xE0), spB0, D_00375C00);
                    }
                } else {
                    *(s32 *)(n + 0xE0) = 0;
                    *(s32 *)(n + 0xE4) = 0;
                    *(s32 *)(n + 0xE8) = 0;
                    *(f32 *)(n + 0xEC) = 1.0f;
                    o = *(char **)(n + 0x10C);
                    *(s32 *)(o + 0xE0) = 0;
                    o = *(char **)(n + 0x10C);
                    *(s32 *)(o + 0xE4) = 0;
                    o = *(char **)(n + 0x10C);
                    *(s32 *)(o + 0xE8) = 0;
                    o = *(char **)(n + 0x10C);
                    *(f32 *)(o + 0xEC) = 1.0f;
                }
            }
        }
        n = *(char **)(n + 0x104);
        i++;
    }
    if (i >= 0x101) func_001C0290(tbl);
}
