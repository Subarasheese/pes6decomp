/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003ABA08[];
extern char D_005A2A60[];
extern char D_003AB9E0[];
extern char D_005A24C0[];
extern f32 D_003E757C;
extern f32 D_003E7580;
extern f32 D_003E7584;
extern f32 D_003E7588;
extern f32 *D_003E74CC;

void func_001A5200(f32 *);
void func_001A55C0(f32 *);
void func_001A5660(void);
s32 func_00BBB8C0(s32);
s32 func_00207AC0(s32, s32, s32, f32);
void func_0027B780(void *, s32, void *, f32);

void func_00295DE0(void) {
    f32 w[4];
    f32 v[4];
    u16 t[8];
    f32 *v1 = (f32 *)((u32)v + 4);
    f32 *v2 = (f32 *)((u32)v + 8);
    f32 *w1 = (f32 *)((u32)w + 4);
    f32 *w2 = (f32 *)((u32)w + 8);

    f32 *s3;
    char *s2;
    f32 k, f20, f21, f22, f23, f0;
    s32 i, s0;

    for (i = 0; i < 5; i++) {
        t[i] = ((u16 *)D_003ABA08)[i];
    }
    if (*(s32 *)D_005A2A60 == 0) {
        return;
    }
    func_001A5200(v);
    func_001A55C0(w);
    func_001A5660();
    v[0] = v[0] * D_003E7584;
    *v2 = *v2 * D_003E7584;
    w[0] = w[0] + v[0];
    *w2 = *w2 + *v2;
    *v1 = *v1 * D_003E7584;
    *w1 = *w1 + *v1 + D_003E7588;
    *v1 = *v1 + D_003E7580;
    if (!((v[0] < 0.0f ? -v[0] : v[0]) <= (*v2 < 0.0f ? -*v2 : *v2))) {
        f21 = 0.0f;
        f0 = 0.0f;
        f22 = D_003E757C;
        if (v[0] <= 0.0f) {
            f23 = 1.5707964f;
        } else {
            f23 = -1.5707964f;
        }
    } else {
        f21 = 0.0f;
        f0 = D_003E757C;
        f22 = f21;
        if (*v2 <= f21) {
            f23 = 3.1415927f;
        } else {
            f23 = f21;
        }
    }
    k = 0.2f;
    v[0] = k * -v[0];
    f20 = k * -f0;
    w[0] = k * -w[0];
    f21 = f21 * k;
    *w1 = *w1 * k;
    *w2 = *w2 * k;
    *v1 = *v1 * k;
    *v2 = *v2 * k;
    f22 = f22 * k;
    s3 = (f32 *)D_003AB9E0;
    s2 = D_005A24C0;
    for (i = 0; i < 5; i++) {
        s32 r, r2;
        char *p0;
        f32 x, y;
        s0 = t[func_00BBB8C0(5)];
        r = func_00BBB8C0(3000);
        r2 = func_00207AC0(s0, r + 1000, 0, *D_003E74CC);
        x = s3[0];
        y = s3[1];
        p0 = *(char **)(s2 + 0x5A0);
        *(f32 *)(p0 + 0xD0) = f20 * x + v[0] * y + w[0];
        *(f32 *)(*(char **)(s2 + 0x5A0) + 0xD4) = f21 * x + *v1 * y + *w1;
        *(f32 *)(*(char **)(s2 + 0x5A0) + 0xD8) = f22 * x + *v2 * y + *w2;
        *(s32 *)(*(char **)(s2 + 0x5A0) + 0xDC) = 0x3F800000;
        *(s32 *)(*(char **)(s2 + 0x5A0) + 0xE0) = 0;
        *(f32 *)(*(char **)(s2 + 0x5A0) + 0xE4) = f23;
        *(s32 *)(*(char **)(s2 + 0x5A0) + 0xE8) = 0;
        *(s32 *)(*(char **)(s2 + 0x5A0) + 0xEC) = 0x3F800000;
        **(u8 **)(s2 + 0x5A0) = 1;
        func_0027B780(*(void **)(s2 + 0x5A0), s0, p0, (f32)r2);
        *(s16 *)(s2 + 0x5A6) = s0;
        *(s32 *)(s2 + 0x5A8) = 0;
        s3 += 2;
        s2 += 0x60;
    }
}
