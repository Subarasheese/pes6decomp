/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad00[0x10];
    f32 f10;
    f32 f14;
    f32 f18;
    u8 pad1C[4];
    f32 f20;
    f32 f24;
    f32 f28;
    u8 pad2C[4];
    f32 f30;
    u8 pad34[0x50 - 0x34];
    s32 f50;
    u8 pad54[4];
    s16 f58;
    u8 pad5A[0x74 - 0x5A];
    s32 f74;
} Obj;

extern Obj *D_003E7574;
extern s32 D_003EA6F8;

s32 func_00187570(f32 *, f32 *, f32 *, f32 *, f32 *);
f32 func_001CD9E0(f32);
s32 func_00152030(void);
void func_002562B0(s32);
void func_002849D0(void);
void func_009945C0(s32);
s16 func_009B34C0(s32, f32, f32, f32, f32);

void func_0093F720(void) {
    f32 a[4];
    f32 b[4];
    f32 c[4];
    f32 d[4];
    s32 r;
    s32 t;
    f32 d1;
    f32 d2;
    f32 e;
    f32 g;
    s32 ix;
    s32 iz;

    ix = (s32)D_003E7574->f10;
    if (ix <= 0) ix = -ix;
    if ((f32)ix < 13465.0f) {
        iz = (s32)D_003E7574->f18;
        if (iz <= 0) iz = -iz;
        if ((f32)iz < 8729.0f) return;
    }
    b[0] = D_003E7574->f20;
    b[1] = D_003E7574->f24;
    b[2] = D_003E7574->f28;
    a[0] = D_003E7574->f10 - D_003E7574->f20;
    a[1] = D_003E7574->f14 - D_003E7574->f24;
    a[2] = D_003E7574->f18 - D_003E7574->f28;
    r = func_00187570(d, c, b, a, &D_003E7574->f10);
    t = D_003EA6F8 + 1;
    D_003EA6F8 = t;
    if (t == 100000) D_003EA6F8 = 0;
    if (r == 0) return;
    D_003E7574->f58 = func_009B34C0(t, 0.0f, 0.0f, 100.0f * c[0], 100.0f * c[2]);
    D_003E7574->f74 = 0;
    d1 = func_001CD9E0((d[0] - b[0]) * (d[0] - b[0]) + (d[1] - b[1]) * (d[1] - b[1]) + (d[2] - b[2]) * (d[2] - b[2]));
    d2 = func_001CD9E0(a[1] * a[1] + a[0] * a[0] + a[2] * a[2]);
    if (d2 <= 1.8666667f) {
        e = d2 - d1;
        g = c[1] * e;
        D_003E7574->f10 = d[0] + c[0] * e;
        D_003E7574->f14 = d[1] + g;
        D_003E7574->f18 = d[2] + c[2] * e;
        if (!(D_003E7574->f14 <= -28.0f)) D_003E7574->f14 = -28.0f;
        D_003E7574->f30 = g;
        D_003E7574->f50 = D_003E7574->f50 / 2;
        if ((f32)D_003E7574->f50 < 1792.0f) D_003E7574->f50 = 0x700;
    } else {
        D_003E7574->f10 = d[0];
        D_003E7574->f14 = d[1];
        D_003E7574->f18 = d[2];
        D_003E7574->f50 = D_003E7574->f50 / 3;
        D_003E7574->f30 = (f32)D_003E7574->f50 * c[1];
        if (r == 2) {
            func_002849D0();
            func_009945C0(12);
        } else if (r == 1) {
            if (func_00152030()) func_002562B0(6);
            func_002849D0();
            func_009945C0(5);
        }
    }
}
