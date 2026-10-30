/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DDF8;

void *func_009D09E0(s32 arg0) {
    s32 var_a3;
    void *temp_v0;
    void *temp_v0_2;

    if (D_00A7DDF8 == NULL) {
        goto block_18;
    }
    if (arg0 != 0) {
        var_a3 = 0;
loop_15:
        if (var_a3 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
            temp_v0 = D_00A7DDF8 + (var_a3 << 7);
            if (M2C_FIELD(temp_v0, s32 *, 8) != arg0) {
                temp_v0_2 = D_00A7DDF8 + (var_a3 * 0x7C);
                if (M2C_FIELD(temp_v0_2, s32 *, 0x408) != arg0) {
                    var_a3 += 1;
                    goto loop_15;
                }
                return temp_v0_2 + 0x408 + 4;
            }
            return temp_v0 + 8 + 4;
        }
        goto block_18;
    }
block_18:
    return NULL;
}
