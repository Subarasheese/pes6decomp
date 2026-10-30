/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00828160();                                /* extern */
void *func_0082C2A0();                              /* extern */
u32 func_00950D30(s32);                             /* extern */
s32 func_00965C10(s32);                             /* extern */
s32 func_00965CC0(s32);                             /* extern */
extern char D_008A5F84[];

s32 func_0093C740(void) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s3;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    var_s0 = 0;
    if (temp_v0 == NULL) {
        return 0;
    }
    if ((*(s32 *)D_008A5F84) == 4) {
        temp_s2 = M2C_FIELD(temp_v0, s32 *, 0x117F0);
        if (temp_s2 != 0) {
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0xF8A0);
            if (temp_a0 == 0) {
                return 0;
            }
            if (func_00950D30(temp_a0) < 0x64U) {
                var_s3 = 0;
                do {
                    temp_v0_2 = func_00965C10(var_s3);
                    if ((temp_v0_2 != 0) && (temp_v0_2 == temp_s2)) {
                        temp_v0_3 = func_00965CC0(var_s3);
                        if ((temp_v0_3 != 0) && (temp_v0_3 != func_00828160())) {
                            var_s0 += 1;
                        }
                    }
                    var_s3 += 1;
                } while (var_s3 < 8);
                return var_s0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
