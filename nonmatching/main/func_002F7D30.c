/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223A70(void);
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */

void func_002F7D30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a1;
    s32 var_a1_2;

    if (arg3 != 0) {
        if (arg0 >= 9) {
            var_a1 = 0;
        } else {
            var_a1 = func_00223A70() + (arg0 * 0x5C);
        }
        if (var_a1 != 0) {
            if ((arg1 < 9) && (arg2 < 4)) {
                var_a1_2 = var_a1 + (arg2 * 0x12) + (arg1 * 2);
            } else {
                goto block_12;
            }
        } else {
block_12:
            var_a1_2 = 0;
        }
        if (var_a1_2 != 0) {
            func_001C4730(arg3, var_a1_2, 2);
        }
    }
}
