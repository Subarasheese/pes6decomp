/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00BD3CF0(void *, f32, f32);
s32 func_009B33A0(void *, s32, s32);
s32 func_00B36450(void);
void func_00B36400(s32, s32);
void func_00B9E2B0(void *);
void func_00B364D0(s32);
void func_00209A00(void *, s32, s32);
extern char D_00CBCAD1[];

void func_00BE0690(u8 **p) {
    u8 *a;
    u8 *b;
    u8 saved;
    s32 v;
    s32 r;
    a = p[0];
    b = *(u8 **)(a + 4);
    saved = b[0x2D];
    a[0x4E] = 0;
    if (*(u8 *)D_00CBCAD1 == 0x31) {
        v = 0x4BF;
    }
    func_00BD3CF0(p, *(f32 *)(p[0] + 0x6C), *(f32 *)(p[0] + 0x70));
    a = p[0];
    r = func_009B33A0(a, (s32)*(f32 *)(a + 0x6C), (s32)*(f32 *)(a + 0x70));
    if (func_00B36450() == 0 && (u32)r < 0x190000) {
        func_00B36400(1, 1);
        func_00B9E2B0(p);
        return;
    }
    if (*(u8 *)(p[1] + 0x12) == 5) {
        func_00B364D0(2);
        func_00209A00(*(void **)(p[0] + 4), v, 0);
        *(u8 *)(*(u8 **)(p[0] + 4) + 0x2D) = saved;
        *(s16 *)(p[0] + 0x18) = 0x5F;
    }
}
