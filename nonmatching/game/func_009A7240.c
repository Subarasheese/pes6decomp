/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern float fabsf(float);
extern char D_00CBA9EE[];
extern char D_00CBA918[];
extern char D_00CB7730[];
extern char D_00CBA9ED[];
extern char D_00CBA8E0[];
extern char D_00591F14[];
extern s32 D_003EA714;
extern void func_002871C0(f32 *);
extern void func_009AB6D0(void *, void *);
extern s32 func_009ACFE0(void *);
extern s32 func_009AC830(void *, s32, s32, s32);
extern s32 func_009A8760(void *, s32, void *, s32);
extern s32 func_009A78C0(void *, s32, s32, f32);
extern void func_009B0610(void *);
extern void func_0018D500(s32);

void func_009A7240(void) {
    f32 v[3];
    s8 *p = (s8 *)D_00CBA918;
    char *q = D_00CB7730;
    s32 s0, s1, r, a3, t;
    if (*(u8 *)D_00CBA9EE & 2) {
        s0 = 3;
    } else {
        s0 = D_003EA714;
    }
    func_002871C0(v);
    s1 = 0;
    if (fabsf(v[0]) < 14242.0f && fabsf(v[1]) < 808.0f) {
        s1 = (fabsf(v[2]) < 1231.0f);
    }
    func_009AB6D0(p, q);
    r = func_009ACFE0(p);
    if (!(fabsf((f32)p[0]) <= 1.0f)) {
        p[0] = 0;
    }
    if (r) {
        if (((u8 *)p)[5] == 0 && ((u8 *)p)[2] == 0) {
            ((u8 *)p)[1] = func_009AC830(p + 0xC, p[0], ((u8 *)p)[1], s0);
            if (!s1) {
                ((u8 *)p)[1] = 0;
            }
        }
        if (*(u8 *)D_00591F14 == 0) {
            a3 = p[0];
            if (a3 != -1) {
                t = 0x1E;
            } else {
                t = ((u8 *)p)[1];
            }
            if (s1) {
                if (func_009A8760(q, t & 0xFF, v, a3)) {
                    ((u8 *)p)[3] = 1;
                    ((u8 *)p)[0xD6] |= 1;
                }
            }
        }
        if (((u8 *)p)[3]) {
            if (((u8 *)p)[0xD7] == 0) {
                if (!func_009A78C0(q, ((u8 *)p)[4], s0, *(f32 *)(p + 0xD8))) {
                    *(u8 *)D_00CBA9ED = 1;
                }
            }
            if (*(u8 *)D_00591F14 == 0) {
                a3 = p[0];
                if (a3 != -1) {
                    t = 0x1E;
                } else {
                    t = ((u8 *)p)[1];
                }
                if (s1) {
                    func_009A8760(q, t & 0xFF, v, a3);
                }
            }
        }
    }
    if (((u8 *)p)[3]) {
        func_009B0610(q);
        func_0018D500(1);
    } else {
        func_0018D500(0);
    }
    {
        s32 f = 0;
        if (p[0] != 0 && ((u8 *)p)[3] != 0 && ((u8 *)p)[1] != 0) {
            f = 1;
        }
        *(u8 *)D_00CBA8E0 = f;
    }
    ((u8 *)p)[7] = ((((u8 *)p)[1] << 3) & 0xF8) | ((p[0] + 1) & 3);
}
