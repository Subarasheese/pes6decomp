/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
s32 func_0022EF80(s32);                             /* extern */
extern s32 D_003E77AC;

s32 func_0022E500(s32 arg0) {
    s32 temp_s1;
    s32 var_s0;

    if ((func_00309420() != 0) != 1) {
        temp_s1 = func_0022EF80(arg0) & 0xFF;
        if (temp_s1 == 0xFF) {
            return 0;
        }
        if ((func_00309420() != 0) != 1) {
            var_s0 = D_003E77AC;
        } else {
            var_s0 = 0;
        }
        if ((func_00309420() != 0) == 1) {
            return 0;
        }
        if (var_s0 != 0) {
            if (temp_s1 < 0x13) {
                return var_s0 + ((temp_s1 & 0xFF) * 0x1BDC) + 0x8B69C;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
