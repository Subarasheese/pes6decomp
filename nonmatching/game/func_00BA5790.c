/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00C9E6F8[], D_00C9E6FA[], D_00C9E6FC[], D_00C9E6FE[], D_00CBD26C[];
extern s16 D_003E7A3C;
extern s32 func_009B3480(void *, s32, s32, f32, f32);
extern s32 func_00BBB8C0(s32);
extern void func_00209A00(void *, s32, s32);
extern void func_00207390(void *, s32);
extern void func_0097A6D0(void *, s32);

void func_00BA5790(u8 **a0) {
    s16 arr[8];
    s16 g = D_003E7A3C;
    f32 f;
    u8 *p;
    arr[0] = *(s16 *)D_00C9E6F8;
    arr[1] = *(s16 *)D_00C9E6FA;
    arr[2] = *(s16 *)D_00C9E6FC;
    arr[3] = *(s16 *)D_00C9E6FE;
    f = 8985.0f;
    if (*(f32 *)D_00CBD26C < 0.0f) f = f * -1.0f;
    *(s16 *)(a0[0] + 0x2C) = func_009B3480(a0[0], arr[1], arr[0], *(f32 *)D_00CBD26C, f);
    if (*(s32 *)(a0[0] + 0x1C) >= 0x1000) {
        s32 i = func_00BBB8C0(4);
        u8 *q = a0[0];
        s32 d = (u16)(*(u16 *)(q + 0x26) - *(u16 *)(q + 0x2C) + 0x10000);
        *(u8 *)(*(u8 **)(q + 4) + 0x2D) = d < 0x8001;
        func_00209A00(*(void **)(a0[0] + 4), (u16)arr[i], 0);
        func_00207390(*(void **)(a0[0] + 4), 6);
        *(s16 *)(a0[0] + 0x18) = 0xC;
    } else {
        func_00BBB8C0(1);
        *(s16 *)(*(u8 **)(a0 + 1) + 0x3E) = g;
        func_0097A6D0(a0[0], *(u16 *)(a0[0] + 0x2C));
        *(s16 *)(a0[0] + 0x18) = 0xB;
    }
}
