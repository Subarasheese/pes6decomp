/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
void *func_00224520(s32, s32);                      /* extern */
s32 func_0094B400(s32, s32);                        /* extern */
s32 func_00B53600(s64, s32, u8 *, M2C_UNK);         /* extern */

s32 func_00B58A00(s64 arg0) {
    u8 sp3F;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    void *temp_v0;

    temp_s0 = func_00225820() & 0xFF;
    temp_s1 = func_00B53600((s64) (arg0 << 0x30) >> 0x30, temp_s0, &sp3F, 1) & 0xFFFF;
    if (temp_s1 != 0) {
        temp_a1 = func_002243B0(temp_s0, (s32) sp3F) & 0xFF;
        if (temp_a1 != 0xFF) {
            temp_v0 = func_00224520(temp_s0, temp_a1);
            if ((temp_v0 != NULL) && ((s32) M2C_FIELD(temp_v0, u8 *, 2) >= 0x50)) {
                return 1;
            }
            var_v0 = 1;
            if ((func_0094B400(temp_s1, temp_s0) & 0xFF) != 1) {
                goto block_12;
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return var_v0;
        }
        goto block_12;
    }
block_12:
    var_v0 = 0;
    return var_v0;
}
