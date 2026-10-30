/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
M2C_UNK func_00B2ACF0();                            /* extern */

void func_00BED790(void **arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    u16 temp_a1;
    void *temp_a0;
    void *temp_a2;

    func_00B2ACF0();
    temp_a2 = *arg0;
    temp_a0 = M2C_FIELD(temp_a2, void **, 4);
    temp_a1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_a1) {                              /* irregular */
    case 0x17F:
        if (M2C_FIELD(temp_a0, f32 *, 0x38) < 14.0f) {
block_39:
            M2C_FIELD(temp_a2, s16 *, 0x18) = 1;
        }
    default:
block_40:
        M2C_FIELD(*arg0, s16 *, 0x18) = 1;
        return;
    case 0x254:
        temp_f1 = M2C_FIELD(temp_a0, f32 *, 0x38);
        if (!(temp_f1 <= 44.0f) && (temp_f1 < 48.0f)) {
            goto block_39;
        }
        return;
    case 0x253:
        temp_f1_2 = M2C_FIELD(temp_a0, f32 *, 0x38);
        if (!(temp_f1_2 <= 10.0f) && (temp_f1_2 < 16.0f)) {
            goto block_39;
        }
        break;
    case 0x12A:
        if (func_00207D80(temp_a0, 0x42) != 0) {
            M2C_FIELD(*arg0, s16 *, 0x18) = 1;
            goto block_40;
        }
        return;
    case 0x16D:
        if (func_00207D80(temp_a0, 0x3C) != 0) {
            M2C_FIELD(*arg0, s16 *, 0x18) = 1;
            goto block_40;
        }
        return;
    case 0x184:
        if (func_00207D80(temp_a0, 0x18) != 0) {
            M2C_FIELD(*arg0, s16 *, 0x18) = 1;
            goto block_40;
        }
        return;
    }
}
