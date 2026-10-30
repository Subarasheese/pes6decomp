/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B0BEF0(void);
s32 func_0097D080(M2C_UNK);                         /* extern */
M2C_UNK func_00B0ABD0(s32);                         /* extern */

void func_00B0B620(void) {
    s32 var_s0;
    u32 temp_v0;

    if (func_00B0BEF0() != 0) {
        var_s0 = 0;
        do {
            if (var_s0 == 0) {
                if ((func_0097D080(3) & 0xFF) != 1) {
                    goto block_5;
                }
                goto block_8;
            }
block_5:
            if ((var_s0 == 1) && ((func_0097D080(4) & 0xFF) == 1)) {
block_8:
                func_00B0ABD0(var_s0 & 0xFF);
            } else {
                temp_v0 = func_00B0BEF0();
                if (temp_v0 != 0) {
                    func_001D7D60(M2C_FIELD((temp_v0 + ((var_s0 & 0xFF) * 4)), void **, 4), 0);
                }
            }
            var_s0 += 1;
        } while (var_s0 < 2);
    }
}
