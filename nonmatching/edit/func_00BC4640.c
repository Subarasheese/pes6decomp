/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021F170(s32);
extern s32 func_002F8140(s32);
extern void func_00220AA0(s8);
s32 func_0021E070(s32);                             /* extern */

void func_00BC4640(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    void *temp_v0;

    var_s0 = 0;
loop_1:
    if (func_002F8140(var_s0) == 0) {
        var_s0 = (var_s0 + 1) & 0xFFFF;
        if (var_s0 >= 0xCC) {
            var_s0_2 = 0x40;
loop_7:
            if (func_0021E070(var_s0_2) == 0) {
                var_s0_2 = (var_s0_2 + 1) & 0xFFFF;
                if (var_s0_2 >= 0xCC) {
                    var_s0_3 = 0x40;
loop_13:
                    temp_v0 = func_0021F170(var_s0_3);
                    if ((M2C_FIELD(temp_v0, u8 *, 0x52) != 1) && (M2C_FIELD(temp_v0, u8 *, 0x53) != 1)) {
                        if (M2C_FIELD(temp_v0, u8 *, 0x38) != 1) {
                            var_s0_3 = (var_s0_3 + 1) & 0xFFFF;
                            if (var_s0_3 >= 0xCC) {
                                func_00220AA0(0);
                                return;
                            }
                            goto loop_13;
                        }
                        goto block_18;
                    }
block_18:
                    func_00220AA0(1);
                    return;
                }
                goto loop_7;
            }
            func_00220AA0(1);
            return;
        }
        goto loop_1;
    }
    func_00220AA0(1);
}
