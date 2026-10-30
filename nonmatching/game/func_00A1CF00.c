/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00997EB0(void *);                          /* extern */
s32 func_00A1B990();                                /* extern */

s32 func_00A1CF00(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    u16 temp_v1_2;
    u8 temp_v1;
    void *temp_a0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 0x1B:
        return M2C_FIELD(arg0, u16 *, 0x18) == 0x40;
    case 0x6:
    case 0x5:
    case 0xF:
block_30:
        return 0;
    case 0x82:
    case 0x9D:
    case 0x45:
    case 0x43:
        return 1;
    case 0x3:
    case 0x1:
    case 0x19:
    case 0x13:
        return func_00997EB0(arg0) == 0;
    case 0x17:
    case 0x16:
        return arg3 >= arg2;
    default:
        if (!(func_00A1B990() & 0xFF)) {
            return 1;
        }
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        temp_v1_2 = M2C_FIELD(temp_a0, u16 *, 0x30);
        if ((temp_v1_2 != 0x28D) && (temp_v1_2 != 0x28E)) {
            goto block_30;
        }
        if (!(M2C_FIELD(temp_a0, f32 *, 0x38) < (f32) (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 3) * 2))) {
            return 1;
        }
        goto block_30;
    }
}
