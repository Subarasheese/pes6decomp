/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7A08;

void func_00995AF0(u8 *arg0, s8 arg1) {
    s32 temp_v1;
    s32 var_a5;
    s8 var_v1;
    void *var_a4;

    var_a5 = 0;
    M2C_FIELD(D_003E7A08, s32 *, 0x284) = 2;
    M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
    M2C_FIELD(D_003E7A08, s8 *, 0x2A4) = arg1;
    var_a4 = D_003E7A08;
loop_1:
    if (M2C_FIELD(var_a4, u8 *, 8) == *arg0) {
        temp_v1 = M2C_FIELD(var_a4, s32 *, 4);
        switch (temp_v1) {                          /* irregular */
        case 4:
            if (((u64) ((s64) M2C_FIELD(var_a4, u8 *, 0x2C) << 0x38) >> 0x3F) != 0) {
                var_v1 = 1;
            } else {
            case 15:
                var_a5 += 1;
                var_a4 += 0x40;
                if (var_a5 >= 4) {
                    goto block_10;
                }
                goto loop_1;
            }
            break;
        }
    } else {
block_10:
        var_v1 = 0;
    }
    M2C_FIELD(D_003E7A08, s8 *, 0x2AC) = var_v1;
}
