/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B59340(void);
M2C_UNK func_00B565E0(M2C_UNK);                     /* extern */
M2C_UNK func_00B5A100();                            /* extern */

void func_00B59BE0(s32 arg0) {
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 var_v1;

    temp_v0 = func_00B59340();
    if (temp_v0 != 0) {
        if (arg0 > 0) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x8C);
            switch (temp_a0) {                      /* switch 1; irregular */
            case 5:                                 /* switch 1 */
                var_v1 = 8;
                goto block_19;
            case 8:                                 /* switch 1 */
                M2C_FIELD(temp_v0, u8 *, 0x8C) = 0U;
                break;
            default:                                /* switch 1 */
                var_v1 = temp_a0 + (arg0 & 0xFF);
                goto block_19;
            }
        } else if (arg0 < 0) {
            temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x8C);
            var_v1 = 8;
            switch (temp_a0_2) {                    /* switch 2; irregular */
            case 8:                                 /* switch 2 */
                var_v1 = 5;
                break;
            case 0:                                 /* switch 2 */
                break;
            default:                                /* switch 2 */
                var_v1 = temp_a0_2 + (arg0 & 0xFF);
                break;
            }
block_19:
            M2C_FIELD(temp_v0, u8 *, 0x8C) = var_v1;
        }
        func_00B565E0(1);
        func_00B5A100();
    }
}
