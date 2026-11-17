/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E98AC;
extern void func_001CDAD0(void *a);
extern void func_00145590(s32 a, s32 b, s32 c, s32 d);
extern s32 func_00151AB0(s32 a, s32 b, s32 c);
extern s32 func_001B05B0(void);
extern s32 func_00153FE0(s32 a, s32 b);
extern void func_001C4730(s32 a, s32 b, s32 c);
extern void func_001515E0(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_00150B60(s32 a, s32 b, s32 c);
extern void func_0014EAE0(s32 a, s32 b);
extern void func_00150FF0(s32 a, s32 b);
extern void func_00153FA0(s32 a);
extern void func_00145750(s32 a);

void func_001A7B40(void *arg0, s32 arg1, s32 arg2) {
    s32 *s2 = *(s32 **)arg0;
    s32 *s3 = *(s32 **)((u8 *)arg0 + 0x44);
    s32 *s1;
    s32 a1x;
    s32 a2x;
    s32 a3x;
    s32 v;
    s32 t;

    func_001CDAD0(s3);
    a1x = arg1;
    a2x = arg2;
    a3x = 0;
    if (s3[0] - 1 > 0) {
        a1x = (s32)s2;
        a2x = 0;
        do {
            s32 *p = (s32 *)(s3[1] + a2x);
            a3x++;
            a2x += 4;
            s2[1 + a3x - 1] = p[1] - p[0];
            a1x += 4;
        } while (a3x < s3[0] - 1);
    }
    if (s2[3] != 0) {
        func_00145590(s2[3], a1x, a2x, a3x);
    }
    if (s2[4] != 0) {
        func_00145590(s2[4], a1x, a2x, a3x);
    }
    if (s3[0] == 2) {
        s2[2] = 0;
        v = func_00151AB0(2, 0x40, 0x80);
        v = s2[1] + v;
        v += func_00151AB0(2, 0x20, 0x40);
        t = ((u8 *)s2)[3];
        if (t < 0x17) {
            s2[6] = (s32)((u32)D_003E98AC + t * 41984);
        } else {
            s2[6] = func_00153FE0(func_001B05B0(), v);
        }
        s2[7] = s2[6];
        func_001C4730(s2[7], *(s32 *)s3[1], s2[1]);
        s1 = s3 + 1;
        s2[8] = s2[7];
        s2[3] = s2[7] + s2[1];
        s2[4] = s2[7] + s2[1] + func_00151AB0(2, 0x40, 0x80);
        v = ((s32 *)*(s32 *)s1)[1];
    } else {
        v = func_00151AB0(2, 0x40, 0x80);
        v = s2[1] + s2[2] + v;
        v += func_00151AB0(2, 0x20, 0x40);
        t = ((u8 *)s2)[3];
        if (t < 0x17) {
            s2[6] = (s32)((u32)D_003E98AC + t * 41984);
        } else {
            s2[6] = func_00153FE0(func_001B05B0(), v);
        }
        s2[7] = s2[6];
        func_001C4730(s2[7], *(s32 *)s3[1], s2[1]);
        s1 = s3 + 1;
        s2[8] = s2[7] + s2[1];
        func_001C4730(s2[8], ((s32 *)*(s32 *)s1)[1], s2[2]);
        s2[3] = s2[8] + s2[2];
        s2[4] = s2[8] + s2[2] + func_00151AB0(2, 0x40, 0x80);
        v = ((s32 *)*(s32 *)s1)[2];
    }
    func_001515E0(s2[3], ((u8 *)s2)[3] + 0x834, 2, 0x40, 0x80);
    func_00150B60(s2[3], v, 0);
    func_001515E0(s2[4], ((u8 *)s2)[3] + 0x866, 2, 0x20, 0x40);
    if (s3[0] == 2) {
        func_0014EAE0(s2[4], s2[3]);
    } else {
        func_00150B60(s2[4], v, 1);
    }
    func_00150FF0(s2[4], v);
    func_00153FA0(*(s32 *)((u8 *)arg0 + 0x44));
    ((u8 *)s2)[1] = 2;
    func_00145750(s2[3]);
    func_00145750(s2[4]);
}
