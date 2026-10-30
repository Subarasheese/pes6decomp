/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u16 *D_00CE57F0;

s32 func_00BDCF60(s32 arg0) {
    s32 var_a2;
    void *temp_v0;

    var_a2 = 0;
    if ((s32) *D_00CE57F0 > 0) {
loop_1:
        temp_v0 = D_00CE57F0 + ((var_a2 & 0xFFFF) * 0x30);
        if (arg0 != M2C_FIELD(temp_v0, s32 *, 0xC)) {
            var_a2 += 1;
            if (var_a2 >= (s32) *D_00CE57F0) {
                goto block_6;
            }
            goto loop_1;
        }
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
block_6:
    return -1;
}
