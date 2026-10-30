/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_002260F0(s32);                             /* extern */

s32 func_00224420(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s0;
    u8 *var_v0;

    if (func_00231240() != 1) {
        if ((arg0 & 0xFF) < 0x50) {
            temp_s0 = func_002260F0(arg0);
            if (func_00231240() == 1) {
                var_s0 = 0;
            } else if (temp_s0 != 0) {
                temp_v1 = arg1 & 0xFF;
                if (temp_v1 < 0x20) {
                    var_s0 = temp_s0 + (temp_v1 * 0x16) + 0x1E4;
                } else {
                    var_s0 = 0;
                }
            } else {
                var_s0 = 0;
            }
            if (func_00231240() == 1) {
                goto block_24;
            }
            if (var_s0 != 0) {
                var_v0 = var_s0 + 0xC;
            } else {
block_24:
                var_v0 = NULL;
            }
            if (var_v0 != NULL) {
                return *var_v0 & 0xF;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
