/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B9A660(void);
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
void *func_00B9C490();                              /* extern */

s32 func_00B9A570(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_v1;
    void *temp_v0_2;
    void *temp_v0_3;

    var_s0 = 0;
    temp_v0 = func_00B9A660();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        temp_v0_2 = func_00B9C490();
        if (M2C_FIELD(temp_v0_2, s32 *, 0x14) == 0) {
            if (M2C_FIELD(temp_v0_2, s32 *, 0x20) == 2) {
                var_s0 = 1;
            } else {
                goto block_8;
            }
        } else {
block_8:
            M2C_FIELD(temp_v0_2, s32 *, 0x18) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 0x18) = 4;
            M2C_FIELD(temp_v0_2, s32 *, 8) = 5;
            M2C_FIELD(temp_v0_2, s32 *, 0x28) = 0x10;
            var_s0 = 1;
        }
        break;
    case 2:
        temp_v0_3 = func_00B9C490();
        if ((M2C_FIELD(temp_v0_3, s32 *, 0x14) == 0) && (M2C_FIELD(temp_v0_3, s32 *, 0x20) == 2)) {
            var_v1 = 5;
        } else {
            var_v1 = 2;
        }
        M2C_FIELD(temp_v0_3, s32 *, 8) = var_v1;
        M2C_FIELD(temp_v0_3, s32 *, 0x28) = 0x10;
        func_00B91440(0x22);
        var_s0 = 2;
        break;
    }
    return var_s0;
}
