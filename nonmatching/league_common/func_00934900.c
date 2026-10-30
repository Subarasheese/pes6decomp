/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226510();                                /* extern */
s32 func_00226710();                                /* extern */
void *func_0022C140(u8);                            /* extern */
void *func_0022C1E0(s32);                           /* extern */
s32 func_00230410();                                /* extern */
extern char D_00591BC2[];

void func_00934900(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s8 var_a0;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = func_00226510() & 0xFF;
    if (func_00230410() == 0) {
        temp_a0 = temp_s0 & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 2:
            var_a0 = 3;
            goto block_21;
        default:
            var_a0 = 1;
            goto block_21;
        case 1:
            (*(s8 *)D_00591BC2) = 0;
            return;
        }
    } else {
        temp_a0_2 = func_00226710() & 0xFF;
        if ((temp_a0_2 != 0x21) && (temp_a0_2 != 0x1D) && (temp_a0_2 != 0x27) && (temp_a0_2 != 0x26)) {
            var_a0 = 1;
            goto block_21;
        }
        temp_v0 = func_0022C1E0(temp_a0_2);
        if ((temp_v0 != NULL) && (temp_v0_2 = func_0022C140(M2C_FIELD(temp_v0, u8 *, 1)), (temp_v0_2 != NULL))) {
            if (M2C_FIELD(temp_v0_2, u8 *, 3) != 0) {
                var_a0 = 1;
block_21:
                (*(s8 *)D_00591BC2) = var_a0;
            } else {
                (*(s8 *)D_00591BC2) = 0;
            }
        }
    }
}
