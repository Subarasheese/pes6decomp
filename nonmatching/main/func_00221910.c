/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
extern s32 func_00221A60(s32);
s32 func_00221910(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s3;

    temp_s2 = arg0 & 0xFFFF;
    temp_v0 = func_00221A60(arg1) & 0xFF;
    if (temp_s2 == 0) {
        goto block_9;
    }
    temp_s1 = temp_v0 & 0xFF;
    var_s3 = 0;
    if (temp_s1 > 0) {
loop_3:
        if (temp_s2 != (Pes6Team_GetPlayerId(arg1, var_s3, 0) & 0xFFFF)) {
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 >= temp_s1) {
                goto block_9;
            }
            goto loop_3;
        }
        return var_s3 & 0xFF;
    }
block_9:
    return 0xFF;
}
