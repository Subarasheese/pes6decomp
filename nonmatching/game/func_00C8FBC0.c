/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002DB830(s32 a);
extern s32 func_002DB940(s32 a);
extern u8 *func_0020D080(s32 type, s32 idx);
extern void func_001EEAC0(s32 a, s32 b);
extern void func_001EE890(s32 a, void *b);
extern void func_001EF370(s32 a, void *b);
extern void func_0020E310(s32 a, void *b);
extern void func_001EEE60(s32 a, void *b);
extern void func_001F1950(s32 a, void *b);
extern void func_001EE630(s32 a, void *b);
extern s32 func_00277360(void *p);
extern s32 func_00277210(void *p);
extern s32 func_00292D80(s32 a);
extern void func_001C78F8(void *dst, void *fmt, s32 n);
extern u8 D_003EA898;
extern char D_00591A90[];
extern char D_00592980[];
extern char D_005A2020[];
extern char D_00CB4FD0[];
extern char D_00CB4FE0[];
extern char D_00CB5030[];
extern char D_00CB5070[];
extern char D_00CB50A0[];
extern char D_00CB50C8[];
extern char D_00CB50D0[];
extern char D_00CB5100[];
extern char D_00CCD88D[];

void func_00C8FBC0(u8 *arg)
{
    f32 vec[4];
    s32 type;
    f32 v0, v1, v2, v3;
    s32 s6, i, idx;
    u8 *p;
    u8 *A, *B, *C;
    f32 f160, f15C, f158, f154;
    u8 *c0, *b0;
    u8 *s1;
    s32 s3, s7;
    u8 *s0;
    u8 *fp;
    u8 *e;
    f32 minv;
    s16 r[4];
    s32 col;
    s32 pos;
    s32 q;
    s32 tmp;
    char txt[4];

    type = arg[0];
    ((s32 *)vec)[1] = 0;
    ((s32 *)vec)[0] = 0;
    v0 = *(f32 *)(arg + 0x24);
    v1 = *(f32 *)(arg + 0x28);
    v2 = *(f32 *)(arg + 0x2C);
    v3 = *(f32 *)(arg + 0x30);
    s6 = (s16)func_002DB830(*(s32 *)(arg + 0x174));
    i = 0;
    if (D_003EA898 > 0) {
        A = (u8 *)D_00591A90 + type * 0x8B;
        B = (u8 *)D_00592980 + type * 26880;
        C = (u8 *)D_005A2020 + type * 360;
        f160 = *(f32 *)D_00CB4FD0;
        f15C = *(f32 *)D_00CB5030;
        f158 = *(f32 *)D_00CB50C8;
        f154 = *(f32 *)D_00CB50D0;
        c0 = (u8 *)D_00CB50A0 + type * 4;
        b0 = (u8 *)D_00CB5070 + type * 4;
        s1 = arg;
        idx = s6;
        do {
            s3 = *(s32 *)(s1 + 0xBC);
            fp = A + idx + 0x27;
            s0 = (u8 *)(u32)A[7 + A[idx + 0x27]];
            e = func_0020D080(type, (s32)s0);
            minv = (f32)(u32) * (u16 *)(e + 0x14);
            if (!(minv <= v2)) {
                minv = v2;
            }
            vec[2] = minv;
            vec[3] = v3;
            func_001EEAC0(s3, *(s32 *)(e + 0xC));
            func_001EE890(s3, e + 0x1C);
            func_001EF370(s3, vec);
            func_0020E310(2, &col);
            s0 = B + (s32)s0 * 840;
            if (s0[0xD4] == 0) {
                func_0020E310(4, &col);
            }
            if (i == arg[2] - s6) {
                *(f32 *)&col = f160;
            }
            if (*(s32 *)(arg + 8) != 0) {
                if (i == func_002DB940(*(s32 *)(arg + 0x174)) - s6) {
                    if (i == arg[2] - s6) {
                        *(f32 *)&col = f160;
                    } else {
                        func_0020E310(3, &col);
                    }
                }
            }
            func_001EEE60(s3, &col);
            s7 = 0;
            if (D_00CCD88D[0] != 0) {
                if (*fp == 0) {
                    *(f32 *)&pos = f15C;
                } else {
                    q = (u8)((s0[0x69] >> 4) & 0xF);
                    ((s16 *)&pos)[0] = ((s16 *)(D_00CB5030 + q * 4))[0];
                    ((s16 *)&pos)[1] = ((s16 *)(D_00CB5030 + q * 4))[1];
                    if (idx < 11) {
                        if (q == 0) {
                            s7 = 1;
                        }
                    }
                }
            } else if (idx < 11) {
                q = (u8)func_00292D80((C + C[1] * 82)[*fp + 0x1C]);
                ((s16 *)&pos)[0] = ((s16 *)(D_00CB4FE0 + q * 4))[0];
                ((s16 *)&pos)[1] = ((s16 *)(D_00CB4FE0 + q * 4))[1];
            } else {
                q = (u32)(s0[0x69] << 24) >> 28;
                ((s16 *)&pos)[0] = ((s16 *)(D_00CB5030 + q * 4))[0];
                ((s16 *)&pos)[1] = ((s16 *)(D_00CB5030 + q * 4))[1];
            }
            r[2] = 0x1C;
            r[0] = ((s16 *)&pos)[0];
            r[1] = ((s16 *)&pos)[1];
            r[3] = 0xF;
            s3 = *(s32 *)(s1 + 0xE8);
            func_001EE630(s3, r);
            if (s7 != 0) {
                ((u8 *)&col)[3] = 0xFF;
                ((u8 *)&col)[0] = 0x80;
                ((u8 *)&col)[1] = 0x80;
                ((u8 *)&col)[2] = 0x80;
            } else {
                ((u8 *)&col)[0] = 0xFF;
                ((u8 *)&col)[1] = 0xFF;
                ((u8 *)&col)[2] = 0xFF;
                ((u8 *)&col)[3] = 0xFF;
            }
            func_001EEE60(s3, &col);
            tmp = func_00277360(s0 + 0xF0);
            if (tmp == 2) {
                *(f32 *)&q = f154;
            } else if (tmp == 1) {
                *(f32 *)&q = f158;
            } else if (func_00277210(s0 + 0xF0) != 0) {
                ((s16 *)&q)[0] = ((s16 *)(c0 + s0[0x15] * 8))[0];
                ((s16 *)&q)[1] = ((s16 *)(c0 + s0[0x15] * 8))[1];
            } else {
                ((s16 *)&q)[0] = ((s16 *)(b0 + s0[0x15] * 8))[0];
                ((s16 *)&q)[1] = ((s16 *)(b0 + s0[0x15] * 8))[1];
            }
            r[2] = 0xF;
            r[0] = ((s16 *)&q)[0];
            r[1] = ((s16 *)&q)[1];
            r[3] = 0xF;
            func_001EE630(*(s32 *)(s1 + 0x114), r);
            tmp = s0[0x10] + 1;
            if (tmp < 100) {
                func_001C78F8(txt, D_00CB5100, tmp);
            } else {
                txt[0] = 0x2D;
                txt[1] = 0;
            }
            func_001F1950(*(s32 *)(s1 + 0x140), txt);
            i++;
            idx++;
            s1 += 4;
        } while (i < D_003EA898);
    }
}
