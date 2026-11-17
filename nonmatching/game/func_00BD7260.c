/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef unsigned int u128 __attribute__((mode(TI)));
extern char D_00375B30[];
extern char D_00375B40[];
extern char D_00375B50[];
extern char D_00375B60[];
s32 func_009B3070(s32, s32);
void func_001040A0(void *, void *, f32);

void func_00BD7260(s32 *a0, s32 *a1, s32 a2) {
    u128 L[9];
    f32 *d = (f32 *)&L[4];
    f32 *vf = (f32 *)&L[8];
    f32 x = d[0], y = d[1], z = d[2];
    s32 t;
    u32 ang;
    f32 f;
    f32 k = 0.017453292f;
    if (a2 == 29) {
        if (*(u8 *)(*(s32 *)(*a0 + 4) + 45)) { x = -392.6f; } else { x = 392.6f; }
        y = 0.0f; z = -155.0f;
    } else if (a2 == 28) {
        if (*(u8 *)(*(s32 *)(*a0 + 4) + 45)) { x = -357.4f; } else { x = 357.4f; }
        y = 0.0f; z = 40.9f;
    } else if (a2 == 27) {
        if (*(u8 *)(*(s32 *)(*a0 + 4) + 45)) { x = -365.1f; } else { x = 365.1f; }
        y = 0.0f; z = 249.20001f;
    }
    L[5] = *(u128 *)D_00375B30; L[6] = *(u128 *)D_00375B40;
    L[7] = *(u128 *)D_00375B50; L[8] = *(u128 *)D_00375B60;
    L[0] = L[5]; L[1] = L[6]; L[2] = L[7]; L[3] = L[8];
    vf[0] = x; vf[1] = y; vf[2] = z; vf[3] = 1.0f;
    t = *(u16 *)(*a1 + 38);
    if (t >= 0x4001 && t < 0xc000) {
        ang = func_009B3070(0xc000, t) & 0xffff;
        f = (f32)(-((s32)ang / 182));
    } else {
        ang = func_009B3070(0xc000, t) & 0xffff;
        f = (f32)((s32)ang / 182);
    }
    func_001040A0(&L[5], &L[5], f * k);
    *(f32 *)(*a0 + 108) = *(f32 *)(*a1 + 224) + vf[0];
    *(f32 *)(*a0 + 112) = *(f32 *)(*a1 + 232) + vf[2];
}
