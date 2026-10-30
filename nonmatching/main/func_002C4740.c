/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00C13280(u32);                           /* extern */
s32 func_00C132C0(u32);                             /* extern */
u32 func_00C137C0(u32);                             /* extern */
u32 func_00C13840();                                /* extern */

s32 func_002C4740(u32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 var_s3;
    u32 var_s2;
    void *temp_v0;

    var_s3 = 0xFF;
    var_s2 = func_00C13840();
    if (var_s2 < arg0) {
        temp_s1 = arg1 & 0xFF;
        do {
            if ((func_00C132C0(var_s2) & 0xFF) == 0x1E) {
                temp_v0 = func_00C13280(var_s2);
                if (M2C_FIELD(temp_v0, u8 *, 1) == temp_s1) {
                    var_s3 = ((temp_s1 << 5) | (M2C_FIELD(temp_v0, u8 *, 4) & 0x1F & 0x1F)) & 0xFF;
                }
            }
            var_s2 = func_00C137C0(var_s2);
        } while (var_s2 < arg0);
    }
    if ((var_s3 & 0xFF) == 0xFF) {
        var_s3 = ((arg1 & 0xFF) ? 0x20 : 0) & 0xFF;
    }
    return var_s3;
}
