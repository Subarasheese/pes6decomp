/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_001F26A0(s32 arg0, s8 arg1) {
    s32 temp_a2;
    s32 var_a3;

    if (arg0 != 0) {
        var_a3 = 0;
        do {
            if (arg0 != 0) {
                temp_a2 = var_a3 & 0xFF;
                if (temp_a2 < 2) {
                    M2C_FIELD((arg0 + (temp_a2 * 0x110)), s8 *, 0x5B) = arg1;
                }
            }
            var_a3 += 1;
        } while (var_a3 < 2);
    }
}
