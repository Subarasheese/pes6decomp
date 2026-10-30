/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern s32 D_003EAD54;

s32 func_00AFFFB0(void) {
    s32 temp_a4;
    s32 temp_s0;
    s32 var_a5;
    s32 var_a6;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    void *temp_a2;

    var_s2 = 0xFF;
    temp_s0 = D_003EAD54;
    var_s1 = 0;
    if (temp_s0 == 0) {
        return 0x62;
    }
    if ((func_00226710() & 0xFF) != 0x2C) {
        if ((func_00226710() & 0xFF) != 0x38) {
            var_v0 = 0x12;
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_v0 = 0x17;
    }
    var_a6 = 0;
loop_19:
    temp_a4 = var_a6 & 0xFF;
    if (temp_a4 < 0x63) {
        if ((var_s2 & 0xFF) != 0xFF) {

        } else {
            var_a5 = 0;
loop_13:
            if ((var_a5 & 0xFF) < (var_v0 & 0xFF)) {
                if (var_s1 & 0xFF) {

                } else {
                    temp_a2 = temp_s0 + ((var_a5 & 0xFF) * 0x1C);
                    if ((temp_a4 == M2C_FIELD(temp_a2, u16 *, 0xA18)) && (M2C_FIELD(temp_a2, u8 *, 0xA1A) == 1)) {
                        var_s1 = 1;
                    }
                    var_a5 = (var_a5 + 1) & 0xFF;
                    goto loop_13;
                }
            }
            if (!(var_s1 & 0xFF)) {
                var_s2 = var_a6 & 0xFF;
            }
            var_s1 = 0;
            var_a6 = (var_a6 + 1) & 0xFF;
            goto loop_19;
        }
    }
    return var_s2;
}
