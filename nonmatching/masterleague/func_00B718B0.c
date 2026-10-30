/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00983E20(u8);                              /* extern */
s32 func_00983E70(u8);                              /* extern */
void *func_00993A80();                              /* extern */
extern void *D_003E7B0C;

s32 func_00B718B0(s32 arg0) {
    s32 temp_s0_2;
    u8 temp_s0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_v0;
    void *temp_v0;

    temp_v0 = func_00993A80();
    if (temp_v0 != NULL) {
        temp_s0 = M2C_FIELD(D_003E7B0C, u8 *, 0x29);
        temp_s0_2 = func_00983E70(temp_s0) & 0xFF;
        var_v0 = ((temp_s0_2 + (func_00983E20(temp_s0) & 0xFF)) - 1) & 0xFF;
        if (arg0 < 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x254);
            if (temp_s0_2 < (s32) temp_v1) {
                var_v0 = temp_v1 + (arg0 & 0xFF);
            }
            goto block_12;
        }
        if (arg0 > 0) {
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x254);
            if ((s32) temp_v1_2 >= (var_v0 & 0xFF)) {
                M2C_FIELD(temp_v0, u8 *, 0x254) = (u8) temp_s0_2;
            } else {
                var_v0 = temp_v1_2 + (arg0 & 0xFF);
block_12:
                M2C_FIELD(temp_v0, u8 *, 0x254) = var_v0;
            }
        }
        return 1;
    }
    return 0;
}
