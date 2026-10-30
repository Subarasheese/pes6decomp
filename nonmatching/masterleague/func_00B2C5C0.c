/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00224BC0(s32, s32);                        /* extern */
void *func_00970870(s32);                           /* extern */

void func_00B2C5C0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s0;
    u64 temp_v1_2;
    u8 *temp_a0_2;
    void *temp_v0;
    void *temp_v1;

    var_a0 = 0;
    do {
        temp_v1 = arg1 + var_a0;
        M2C_FIELD(temp_v1, s8 *, 0) = 0;
        var_a0 += 7;
        M2C_FIELD(temp_v1, s8 *, 1) = 0;
        M2C_FIELD(temp_v1, s8 *, 2) = 0;
        M2C_FIELD(temp_v1, s8 *, 3) = 0;
        M2C_FIELD(temp_v1, s8 *, 4) = 0;
        M2C_FIELD(temp_v1, s8 *, 5) = 0;
        M2C_FIELD(temp_v1, s8 *, 6) = 0;
    } while (var_a0 < 0xE);
    var_s0 = 0;
    do {
        temp_a0 = func_00224BC0(arg0, var_s0 & 0xFF) & 0xFFFF;
        if (temp_a0 != 0) {
            temp_v0 = func_00970870(temp_a0);
            if (temp_v0 != NULL) {
                temp_v1_2 = (u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3C;
                if ((s32) temp_v1_2 < 0xD) {
                    temp_a0_2 = arg1 + temp_v1_2;
                    *temp_a0_2 += 1;
                }
            }
        }
        var_s0 += 1;
    } while (var_s0 < 0x20);
}
