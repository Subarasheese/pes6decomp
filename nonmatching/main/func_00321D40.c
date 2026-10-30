/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
M2C_UNK func_00320F10(s16 *, s16, s32, s32);        /* extern */

s32 func_00321D40(s16 *arg0) {
    s16 var_s0;
    s32 temp_s2;
    s32 temp_v1_2;
    s32 var_s1;
    u8 temp_v0;
    void *temp_v1;

    var_s1 = 0;
    if (*arg0 > 0) {
        do {
            temp_v1 = arg0 + (var_s1 * 0x10);
            temp_v0 = M2C_FIELD(temp_v1, u8 *, 0x12);
            if (temp_v0 != 0) {
                temp_s2 = temp_v0 + 1;
                if (var_s1 == 0) {
                    var_s0 = 0;
                } else {
                    var_s0 = M2C_FIELD(temp_v1, s16 *, -8);
                }
                temp_v1_2 = func_00226710() & 0xFF;
                switch (temp_v1_2) {                /* irregular */
                case 15:
                case 20:
                    break;
                default:
                case 22:
                case 24:
                case 26:
                case 18:
                    func_00320F10(arg0, var_s0, var_s1, temp_s2);
                    break;
                }
                var_s1 += temp_s2 - 1;
            }
            var_s1 += 1;
        } while (var_s1 < *arg0);
    }
    return 1;
}
