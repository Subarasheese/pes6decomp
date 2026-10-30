/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AE47F0(u32);
M2C_UNK func_00AE9040(u32, void *);                 /* extern */
extern void *D_00B00C30;

s32 func_00AE2CF0(void) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = M2C_FIELD(D_00B00C30, u8 *, 0x18) & 3;
    switch (temp_a0) {                              /* irregular */
    case 3:
        var_v0 = 0xD;
block_15:
        M2C_FIELD(D_00B00C30, s32 *, 0x1C) = var_v0;
        break;
    case 2:
        var_v0 = 7;
        goto block_15;
    case 1:
        M2C_FIELD(D_00B00C30, s32 *, 0x1C) = 3;
        break;
    case 0:
        func_00AE9040(M2C_FIELD(D_00B00C30, u32 *, 0x14), D_00B00C30);
        func_00AE47F0(M2C_FIELD(D_00B00C30, u32 *, 0x14));
        M2C_FIELD(D_00B00C30, s32 *, 0x1C) = 1;
        break;
    }
    return 1;
}
