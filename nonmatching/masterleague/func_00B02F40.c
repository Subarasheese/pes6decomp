/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226E70(void);
void *func_00223E00(s32);                           /* extern */
M2C_UNK func_00B2B5D0(s32, M2C_UNK, u8);            /* extern */

void func_00B02F40(void) {
    s32 temp_v0;
    s32 var_s0;
    u8 temp_a2;
    void *temp_v0_2;

    if (func_00226E70() != 0) {
        var_s0 = 1;
        do {
            temp_v0 = var_s0 & 0xFFFF;
            if ((temp_v0 >= 0x12B1) && (temp_v0 < 0x7000)) {
                var_s0 = 0x7000;
            }
            temp_v0_2 = func_00223E00(var_s0);
            if (temp_v0_2 != NULL) {
                temp_a2 = M2C_FIELD(temp_v0_2, u8 *, 6);
                if ((temp_a2 & 0x3F) == 4) {
                    M2C_FIELD(temp_v0_2, u8 *, 6) = (u8) ((temp_a2 & ~0x3F) | 5);
                    func_00B2B5D0(var_s0, 5, temp_a2);
                }
            }
            var_s0 = (var_s0 + 1) & 0xFFFF;
        } while (var_s0 < 0x701F);
    }
}
