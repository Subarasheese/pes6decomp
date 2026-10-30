/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021FBC0(u16);
extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
s32 func_00225720();                                /* extern */
M2C_UNK func_002C7EB0(s32, s32, u8 *);              /* extern */
extern u8 D_003E7AFC;
extern u8 D_003E7AFD;
extern u8 D_003E7AFE;
extern u8 D_003E7AFF;

void func_0095A9B0(void) {
    u8 sp2C;
    u8 sp2D;
    u8 sp2E;
    u8 sp2F;
    s32 temp_s0;
    s32 temp_s0_2;
    u16 temp_a0;

    temp_s0 = func_00225820() & 0xFF;
    temp_a0 = func_00225720() & 0xFFFF;
    sp2C = D_003E7AFC;
    sp2E = D_003E7AFE;
    sp2D = D_003E7AFD;
    sp2F = D_003E7AFF;
    temp_s0_2 = func_0021FBC0(temp_a0);
    func_002C7EB0(func_002260F0(temp_s0) + 0xC2, temp_s0_2 + 0x76, &sp2C);
}
