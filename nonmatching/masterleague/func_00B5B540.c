/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994670(u8, s32);                       /* extern */
void *func_00994C60(u8, u8);                        /* extern */
extern void *D_003EAEB8;

void *func_00B5B540(s32 arg0, u8 *arg1) {
    s32 var_s3;
    u16 temp_a0;
    u8 temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_v0;

    if (D_003EAEB8 == NULL) {
        goto block_17;
    }
    temp_v0 = func_00994670(M2C_FIELD(D_003EAEB8, u8 *, 0x62E), arg0 & 0xFF);
    if (temp_v0 == NULL) {
        goto block_17;
    }
    temp_v0_2 = func_00994C60(M2C_FIELD(temp_v0, u8 *, 0x90), M2C_FIELD(temp_v0, u8 *, 0x91));
    if (temp_v0_2 == NULL) {
        goto block_17;
    }
    var_s3 = 0;
loop_7:
    temp_v1 = temp_v0 + ((var_s3 & 0xFFFF) * 2);
    temp_s0 = M2C_FIELD(temp_v1, u8 *, 0);
    if (temp_s0 != 0xFF) {
        var_v0 = func_00994C60(temp_s0, M2C_FIELD(temp_v1, u8 *, 1));
        if (var_v0 != NULL) {
            temp_a0 = M2C_FIELD(var_v0, u16 *, 4);
            if ((temp_a0 != 0) && (temp_a0 == M2C_FIELD(temp_v0_2, u16 *, 4)) && (((u64) ((s64) M2C_FIELD(var_v0, u8 *, 1) << 0x39) >> 0x3C) == 2)) {
                if (arg1 != NULL) {
                    *arg1 = temp_s0;
                    return var_v0;
                }
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return var_v0;
            }
        }
    }
    var_s3 = (var_s3 + 1) & 0xFFFF;
    if (var_s3 >= 0x48) {
        if (arg1 != NULL) {
            *arg1 = 0xFF;
        }
block_17:
        var_v0 = NULL;
        return var_v0;
    }
    goto loop_7;
}
