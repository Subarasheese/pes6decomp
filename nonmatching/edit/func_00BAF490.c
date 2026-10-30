/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_002F7F80(s32);                             /* extern */

s32 func_00BAF490(void *arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    var_s0 = 0;
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_s1 = 0;
loop_6:
        temp_v0 = func_002F7F80(var_s1 & 0xFF);
        if (temp_v0 != NULL) {
            if (*temp_v0 != 0) {
                var_s1 = (var_s1 + 1) & 0xFF;
                if (var_s1 >= 0x50) {

                } else {
                    goto loop_6;
                }
            } else {
                goto block_10;
            }
        } else {
block_10:
            var_s0 = 1;
        }
        break;
    case 2:
    case 1:
        var_s1_2 = 0;
        do {
            temp_v0_2 = func_002F7F80(var_s1_2 & 0xFF);
            if ((temp_v0_2 != NULL) && (*temp_v0_2 != 0)) {
                var_s0 = 1;
            }
            var_s1_2 = (var_s1_2 + 1) & 0xFF;
        } while (var_s1_2 < 0x50);
        break;
    }
    return var_s0;
}
