/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
M2C_UNK func_00B62F70(u8);                          /* extern */

s32 func_00B62CB0(void) {
    u32 temp_v0;
    u8 temp_a0;
    u8 var_v1;

    temp_v0 = func_00B62380();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x4BC) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x4BD);
            switch (temp_a0) {                      /* irregular */
            case 0:
                var_v1 = 8;
block_14:
                M2C_FIELD(temp_v0, u8 *, 0x4BC) = var_v1;
                break;
            case 1:
                M2C_FIELD(temp_v0, u8 *, 0x4BD) = 0U;
                var_v1 = 2;
                goto block_14;
            }
            func_00B62F70(temp_a0);
        }
    }
    return 0;
}
