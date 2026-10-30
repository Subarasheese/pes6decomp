/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77020(void);
M2C_UNK func_00972E90(s32, M2C_UNK, M2C_UNK *);     /* extern */
extern char D_00B86360[];

void func_00B721C0(s32 arg0) {
    s32 temp_a0;
    u32 temp_v0;
    u8 temp_a1;

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        temp_a0 = arg0 & 0xFF;
        temp_a1 = M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x3D3);
        if ((u32) (temp_a1 - 0xC) >= 2U) {
            func_00972E90(M2C_FIELD(((temp_a0 * 4) + temp_v0), s32 *, 0x5A8), 0, ((void *)D_00B86360) + (temp_a1 * 0x10));
        } else {
            func_00972E90(M2C_FIELD(((temp_a0 * 4) + temp_v0), s32 *, 0x5A8), 0, ((void *)D_00B86360));
        }
    }
}
