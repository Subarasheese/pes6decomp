/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003A9FA0[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern s32 func_002371A0(s32);
extern s32 func_00242C60(s32);
extern s32 func_00241C30(s32, s32, s32, s32, s32);
extern f32 func_00243930(s32, s32, s32);

typedef struct { u16 r : 5; u16 g : 5; u16 b : 5; u16 a : 1; } Pix;
typedef struct { u8 r, g, b, a; } Col;

s32 func_002440E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    Pix pix[8];
    Col col[4];
    f32 s0[4], s1[4], s2[4], s3[4];
    s32 i, k, res, c, x, y, z;
    f32 t0, t1, t2, t3;

    for (i = 0; i < 4; i++) {
        ((s16 *)pix)[i * 2] = ((s16 *)D_003A9FA0)[i * 2];
        ((s16 *)pix)[i * 2 + 1] = ((s16 *)D_003A9FA0)[i * 2 + 1];
    }
    for (i = 0; i < 4; i++) { s0[i] = 0; }
    for (i = 0; i < 4; i++) { s1[i] = 0; }
    for (i = 0; i < 4; i++) { s2[i] = 0; }
    for (i = 0; i < 4; i++) { s3[i] = 0; }

    if ((func_002371A0(*(u16 *)D_00591BB0) & 0xFFFF) >= 0x40 && (func_002371A0(*(u16 *)D_00591BB0) & 0xFFFF) < 0xCC
        && (func_002371A0(*(u16 *)D_00591BB2) & 0xFFFF) >= 0x40 && (func_002371A0(*(u16 *)D_00591BB2) & 0xFFFF) < 0xCC) {
        Pix *p1 = &pix[7], *p2 = &pix[4], *p3 = &pix[5];
        col[1].r = p1->r << 3; col[1].g = p1->g << 3; col[1].b = p1->b << 3; col[1].a = p1->a ? 0x80 : 0;
        col[2].r = p2->r << 3; col[2].g = p2->g << 3; col[2].b = p2->b << 3; col[2].a = p2->a ? 0x80 : 0;
        col[3].r = p3->r << 3; col[3].g = p3->g << 3; col[3].b = p3->b << 3; col[3].a = p3->a ? 0x80 : 0;
    } else {
        Pix *p1 = &pix[3], *p2 = &pix[0], *p3 = &pix[1];
        col[1].r = p1->r << 3; col[1].g = p1->g << 3; col[1].b = p1->b << 3; col[1].a = p1->a ? 0x80 : 0;
        col[2].r = p2->r << 3; col[2].g = p2->g << 3; col[2].b = p2->b << 3; col[2].a = p2->a ? 0x80 : 0;
        col[3].r = p3->r << 3; col[3].g = p3->g << 3; col[3].b = p3->b << 3; col[3].a = p3->a ? 0x80 : 0;
    }
    col[0].r = 0;
    col[0].g = 0;
    col[0].b = 0;

    res = 0xFF;
    for (k = 0; k < 2; k++)
    for (i = 0; i < 4; i++) {
        if (res == 0xFF) {
            c = func_00242C60(*(s32 *)&col[i]);
            x = func_00242C60(a0);
            y = func_00242C60(a3);
            if (c == 3) c = 4;
            if (x == func_00241C30(c, x, 0, 0, 0) && y == func_00241C30(c, y, 0, 0, 0)) {
                x = func_00242C60(a1);
                y = func_00242C60(a4);
                if (x == func_00241C30(c, x, 0, 0, 0) && y == func_00241C30(c, y, 0, 0, 0)) {
                    x = func_00242C60(a2);
                    y = func_00242C60(a5);
                    if (x == func_00241C30(c, x, 0, 0, 0) && y == func_00241C30(c, y, 0, 0, 0)) {
                        if (i == 3) res = 1;
                        else if (i == 2) res = 0;
                        else if (i == 1) res = 3;
                        else if (i == 0) res = 2;
                    }
                }
            }
        }
    }
    if (res == 0xFF) {
        for (k = 0; k < 4; k++) {
            f32 *v = k == 0 ? s0 : k == 1 ? s1 : k == 2 ? s2 : s3;
            v[0] = func_00243930(a0, *(s32 *)&col[k], 0);
            v[1] = func_00243930(a1, *(s32 *)&col[k], 0);
            v[2] = func_00243930(a3, *(s32 *)&col[k], 0);
            v[3] = func_00243930(a4, *(s32 *)&col[k], 0);
        }
        t0 = s0[3] + (s0[2] + (s0[0] + s0[1]));
        t1 = s1[3] + (s1[2] + (s1[0] + s1[1]));
        t2 = s2[3] + (s2[2] + (s2[0] + s2[1]));
        t3 = s3[3] + (s3[2] + (s3[0] + s3[1]));
        s0[0] = t0; s1[0] = t1; s2[0] = t2; s3[0] = t3;
        if (t0 <= t1) {
            if (t1 <= t2) {
                if (t2 <= t3) res = 1; else res = 0;
            } else {
                if (t1 <= t3) res = 1; else res = 3;
            }
        } else {
            if (t0 <= t2) {
                if (t2 <= t3) res = 1; else res = 0;
            } else {
                if (t0 <= t3) res = 1; else res = 2;
            }
        }
    }
    if ((func_002371A0(*(u16 *)D_00591BB0) & 0xFFFF) >= 0x40 && (func_002371A0(*(u16 *)D_00591BB0) & 0xFFFF) < 0xCC
        && (func_002371A0(*(u16 *)D_00591BB2) & 0xFFFF) >= 0x40 && (func_002371A0(*(u16 *)D_00591BB2) & 0xFFFF) < 0xCC) {
        res += 4;
    }
    return res;
}
