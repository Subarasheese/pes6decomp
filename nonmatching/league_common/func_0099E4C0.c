/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022C140(s32);
extern void * func_0022C1E0(void);
void *func_0022BFF0(u8, s32);                       /* extern */

s32 func_0099E4C0(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    u8 temp_s2;
    u8 temp_s3;
    u8 var_s4;
    void *temp_v0;
    void *temp_v0_3;

    temp_v0 = func_0022C1E0();
    if (temp_v0 != NULL) {
        temp_s3 = M2C_FIELD(temp_v0, u8 *, 1);
        temp_v0_2 = func_0022C140((s32) temp_s3);
        if (temp_v0_2 != 0) {
            temp_s2 = M2C_FIELD(temp_v0_2, u8 *, 4);
            temp_s1 = temp_s2 + M2C_FIELD(temp_v0_2, u8 *, 5);
            var_s4 = temp_s2;
            if ((s32) temp_s2 < temp_s1) {
                temp_s0 = M2C_FIELD(temp_v0_2, u8 *, 1) & 0xFF;
loop_10:
                temp_v0_3 = func_0022BFF0(temp_s3, (var_s4 - temp_s2) & 0xFF);
                if ((temp_v0_3 != NULL) && (temp_s0 == M2C_FIELD(temp_v0_3, u8 *, 0)) && (((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 0x16) << 0x39) >> 0x3F) == 0)) {
                    return 1;
                }
                var_s4 += 1;
                if ((s32) var_s4 >= temp_s1) {
                    goto block_16;
                }
                goto loop_10;
            }
            goto block_16;
        }
        goto block_16;
    }
block_16:
    return 0;
}
