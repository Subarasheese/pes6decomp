/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005E1F70[];
extern char D_005E2220[];
extern char D_005E22C0[];
extern char D_005E2300[];
extern char D_005E2310[];
extern char D_005E2168[];
extern char D_005E225C[];
extern char D_005E229C[];
void func_002A0270(void *, void *, void *);
void func_002A0350(void *, void *, void *);
void func_0029F9B0(f32 *, void *, f32);

void func_0029F030(f32 *arg0, f32 *arg1) {
    f32 v[4];
    f32 *p = (f32 *)D_005E1F70;
    f32 a = p[0x40 / 4] * arg1[0];
    f32 d = p[0x18 / 4] / (*(f32 *)D_005E225C);
    f32 *w = (f32 *)D_005E2220;
    f32 *x = (f32 *)(D_005E2220 + 0x40);
    f32 *y = (f32 *)(D_005E2220 + 0x80);
    f32 *c = (f32 *)D_005E22C0;
    f32 *e = (f32 *)(D_005E22C0 + 0x20);
    f32 *t = (f32 *)D_005E2300;
    f32 *u = (f32 *)D_005E2310;
    f32 s;
    v[0] = a;
    v[2] = (*(f32 *)D_005E225C) * d;
    ((s32 *)v)[3] = 0x3F800000;
    v[0] = a * d;
    v[1] = p[0x44 / 4] * arg1[1] * d;
    func_002A0270(D_005E2220, D_005E22C0, v);
    func_002A0350(D_005E2220, D_005E22C0, D_005E2310);
    (*(f32 *)D_005E225C) = (*(f32 *)D_005E229C) + p[0x48 / 4] * (*(f32 *)D_005E2168);
    s = (*(f32 *)D_005E225C);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n qmtc2.ni %1, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0x0(%2)"
        : : "r"(D_005E2220), "r"(*(s32 *)&s), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n lqc2 $vf5, 0x0(%1)\n vadd.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0x0(%2)"
        : : "r"(D_005E2310), "r"(v), "r"(D_005E22C0) : "memory");
    y[0] = t[0]; y[1] = t[1]; y[2] = t[2]; y[3] = t[3];
    t[1] = c[1]; t[0] = c[0]; t[3] = c[3]; t[2] = c[2];
    e[0] = u[0]; e[1] = u[1]; e[3] = u[3]; e[2] = u[2];
    x[0] = w[0]; x[1] = w[1]; x[2] = w[2]; x[3] = w[3];
    x[4] = w[4]; x[5] = w[5]; x[6] = w[6]; x[7] = w[7];
    x[8] = w[8]; x[9] = w[9]; x[10] = w[10]; x[11] = w[11];
    x[12] = w[12]; x[13] = w[13]; x[14] = w[14]; x[15] = (*(f32 *)D_005E225C);
    v[0] = p[0x30 / 4];
    v[1] = p[0x34 / 4];
    func_0029F9B0(v, (char *)p + 0xB0, arg0[0]);
    func_0029F9B0(&v[1], (char *)p + 0xDC, arg0[1]);
}
