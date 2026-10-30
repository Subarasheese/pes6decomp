/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00227A70(void);
extern s32 func_002E89A0(void);
s32 func_009495D0();                                /* extern */
s32 func_0096C4A0();                                /* extern */
M2C_UNK func_0096CB70();                            /* extern */
M2C_UNK func_0098FE70();                            /* extern */
extern void *D_003E77B0;
extern u8 *D_003E7B0C;

void func_009604B0(void) {
    u8 temp_v1;

    temp_v1 = *D_003E7B0C;
    if ((temp_v1 != 3) && (temp_v1 != 2)) {
        func_0098FE70();
    }
    if ((func_009495D0() & 0xFF) == 1) {
        M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) | 1);
    }
    if (((M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x20) && (func_0096C4A0() == 0)) || ((func_00227A70() == 1) && (func_002E89A0() == 0) && !(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8))) {
        func_0096CB70();
    }
    M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) & ~0x20);
}
