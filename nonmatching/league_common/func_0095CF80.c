/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F190(void);
s32 func_00230410();                                /* extern */

s32 func_0095CF80(s32 arg0, s32 arg1, s32 arg2, u16 *arg3, u16 *arg4) {
    s32 temp_fp;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s4;
    u16 *temp_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *var_s3;

    temp_v0 = func_0022F190();
    if (temp_v0 == NULL) {
        goto block_28;
    }
    if (arg3 == NULL) {
        goto block_28;
    }
    if (arg4 != NULL) {
        temp_s2 = arg1 & 0xFFFF;
        if (temp_s2 != 0) {
            temp_s1 = arg2 & 0xFF;
            if (temp_s1 < 0x50) {
                *arg3 = 0;
                temp_fp = arg0 * 0xC82;
                *arg4 = 0;
                var_s3 = temp_fp + temp_v0;
                var_s4 = 0;
                if ((s32) M2C_FIELD(var_s3, u16 *, 0x4778) > 0) {
                    temp_s0 = var_s3 + 0x4778;
loop_18:
                    if (func_00230410() != 1) {
                        if ((M2C_FIELD(var_s3, u16 *, 0x477A) == temp_s2) && (M2C_FIELD(var_s3, u8 *, 0x477C) == temp_s1)) {
                            temp_a0 = (var_s4 * 8) + (temp_fp + temp_v0);
                            *arg4 = M2C_FIELD(temp_a0, u16 *, 0x4780);
                            *arg3 = M2C_FIELD(temp_a0, u16 *, 0x477E);
                            return 1;
                        }
                        goto block_26;
                    }
                    if (M2C_FIELD(var_s3, u16 *, 0x477A) == temp_s2) {
                        temp_a0_2 = (var_s4 * 8) + (temp_fp + temp_v0);
                        *arg4 = M2C_FIELD(temp_a0_2, u16 *, 0x4780);
                        *arg3 = M2C_FIELD(temp_a0_2, u16 *, 0x477E);
                        return 1;
                    }
block_26:
                    var_s4 += 1;
                    var_s3 += 8;
                    if (var_s4 >= (s32) *temp_s0) {
                        goto block_28;
                    }
                    goto loop_18;
                }
                goto block_28;
            }
            goto block_28;
        }
        goto block_28;
    }
block_28:
    return 0;
}
