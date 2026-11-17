/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C4730(void *dst, void *src, s32 n);
extern s32 func_002DCA30(s32 a);
extern void func_00C85950(s32 a);
extern void func_00C897C0(s32 a, s32 b);
extern void func_00C899B0(s32 a, void *b, void *c, s32 d, s32 e, f32 f, f32 g);
extern void func_00C89BB0(s32 a, void *b, void *c, s32 d, s32 e, f32 f, f32 g);
extern s32 func_00C8B100(s32 a);
extern s32 func_00C8B150(void *a, void *b);
extern char D_00CB4D70[]; extern char D_00CB4D72[]; extern char D_00CB4D74[]; extern char D_00CB4D76[];
extern char D_00CB4DB0[];
extern char D_00CB4DD0[]; extern char D_00CB4DD4[]; extern char D_00CB4DD8[]; extern char D_00CB4DDC[];
extern char D_00CCC200[]; extern char D_00CCC224[]; extern char D_00CCC23C[]; extern char D_00CCC250[];
extern char D_00CCC254[]; extern char D_00CCC270[]; extern char D_00CCC29C[]; extern char D_00CCC2A0[];
extern char D_00CCC2E8[]; extern char D_00CCC2F0[]; extern char D_00CCC2F4[]; extern char D_00CCC2F8[];
extern char D_00CCC30C[]; extern char D_00CCC328[]; extern char D_00CCC32C[]; extern char D_00CCC334[];
extern char D_00CCC335[];

void func_00C83E20(s32 arg0) {
    u8 z[16] = {0};
    s32 off;
    char *s0;
    char *s1;
    char *s3;
    s32 s5;
    f32 m[12];
    s16 r1[8];
    s16 r2[8];
    s32 *p;
    s32 v;

    off = arg0 * 0x140;
    *(u8 *)(D_00CCC334 + off) = 0;
    s0 = D_00CCC200 + off;
    *(u8 *)(D_00CCC335 + off) = 0;
    *(s32 *)s0 = 0;
    func_001C4730(s0 + 0x10, z, 0x10);
    m[2] = 1.0f; m[5] = 1.0f; m[8] = 1.0f; m[11] = 1.0f;
    m[0] = (*(f32 *)D_00CB4DD0);
    m[6] = (*(f32 *)D_00CB4DD0);
    p = (s32 *)(D_00CCC29C + off);
    *p |= 1;
    m[1] = (*(f32 *)D_00CB4DD8);
    *(s32 *)(s0 + 0xEC) = 0;
    *(s32 *)(D_00CCC2A0 + off) = 0;
    m[4] = (*(f32 *)D_00CB4DD8);
    m[3] = (*(f32 *)D_00CB4DD4);
    m[9] = (*(f32 *)D_00CB4DD4);
    m[7] = (*(f32 *)D_00CB4DDC);
    m[10] = (*(f32 *)D_00CB4DDC);
    func_001C4730(s0 + 0xA8, m, 0x30);
    *(s32 *)(D_00CCC2F4 + off) = 0x41300000;
    *(s32 *)(D_00CCC2F8 + off) = 0x41400000;
    func_00C85950(arg0);
    v = func_00C8B100(1);
    *(s32 *)(D_00CCC2E8 + off) = v;
    func_00C85950(arg0);
    *(s32 *)(D_00CCC2F0 + off) = 0xB;
    *(s32 *)(D_00CCC224 + off) = 0;
    if (func_002DCA30(0xB) != 0) {
        s16 *t = (s16 *)D_00CB4DB0;
        s16 a = t[0], b = t[1], c, d;
        s3 = s0 + 0x2C;
        r2[0] = a; r2[4] = a;
        c = a + t[2];
        r2[1] = b; r2[3] = b;
        d = b + t[3];
        r2[2] = c; r2[6] = c;
        r2[5] = d; r2[7] = d;
        func_001C4730(s3, r2, 0x10);
    } else {
        s16 a = (*(s16 *)D_00CB4D70), b = (*(s16 *)D_00CB4D72), c, d;
        s3 = s0 + 0x2C;
        r1[0] = a; r1[4] = a;
        r1[1] = b; r1[3] = b;
        c = a + (*(s16 *)D_00CB4D74);
        d = b + (*(s16 *)D_00CB4D76);
        r1[2] = c; r1[6] = c;
        r1[5] = d; r1[7] = d;
        func_001C4730(s3, r1, 0x10);
    }
    *(s32 *)(D_00CCC23C + off) = 0xB;
    *(s32 *)(D_00CCC250 + off) = 0x41600000;
    *(s32 *)(D_00CCC254 + off) = 0x41700000;
    s1 = D_00CCC200 + off;
    s0 = s1 + 0x10;
    {
        u8 q[16] = {0};
        f32 x = *(f32 *)(D_00CCC250 + off);
        f32 y = *(f32 *)(D_00CCC254 + off);
        f32 *w = (f32 *)q;
        w[2] = x; w[3] = x;
        w[0] = -x / 2.0f;
        w[1] = -y / 2.0f;
    s5 = func_00C8B150(D_00CCC254 + off, D_00CCC250 + off);
    v = func_00C8B100(0);
    func_00C899B0(arg0 + 0x5E, q, s3, s5, v, ((f32 *)s0)[0], ((f32 *)s0)[1]);
    func_00C897C0(arg0 + 0x5E, 0);
    s1 += 0xA0;
    v = func_00C8B150((void *)(arg0 + 0x5E), (void *)0);
    func_00C89BB0(arg0 + 0x66, s1 + 0x38, s1 + 8, v, *(s32 *)(s1 + 0x48), ((f32 *)s0)[0], ((f32 *)s0)[1]);
    func_00C897C0(arg0 + 0x66, 0);
    }
    *(s32 *)(D_00CCC270 + off) = 1;
    *(s32 *)(D_00CCC30C + off) = 1;
    *(s32 *)(D_00CCC328 + off) = 0;
    *(s32 *)(D_00CCC32C + off) = 0;
}
