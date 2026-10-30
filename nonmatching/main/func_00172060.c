/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK LSC_CallErrFunc(M2C_UNK *);                   /* extern */
u32 func_001C80F0(s32, s32, s32, s32, s32);         /* extern */
extern char D_003CAEB8[];
extern char D_003CAEE8[];

s32 func_00172060(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_v0;
    u32 temp_v0;
    u32 var_a1;
    u8 *temp_v0_2;
    void *temp_s0;
    void *temp_v1_2;

    if (arg0 == NULL) {
        LSC_CallErrFunc(((void *)D_003CAEB8));
        return -1;
    }
    var_v0 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x24) < 0x10) {
        if (arg1 != 0) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
            temp_a2 = temp_v1 + 0xF;
            temp_a3 = temp_v1 + 0x1E;
            temp_a1 = temp_a2 < 0;
            temp_v1_2 = arg0 + (temp_v1 << 5);
            temp_s0 = temp_v1_2 + 0x38;
            M2C_FIELD(temp_s0, s32 *, 4) = arg1;
            temp_v1_3 = M2C_FIELD((((temp_a2 - (((s32) ((temp_a1 != 0) ? temp_a3 : temp_a2) >> 4) * 0x10)) << 5) + arg0), s32 *, 0x38);
            temp_a4 = temp_v1_3 ^ 0x7FFFFFFF;
            temp_s3 = (temp_a4 != 0) ? (temp_v1_3 + 1) : 0;
            M2C_FIELD(temp_v1_2, s32 *, 0x38) = temp_s3;
            temp_v0 = func_001C80F0(arg1, temp_a1, temp_a2, temp_a3, temp_a4);
            M2C_FIELD(temp_s0, s32 *, 8) = 0;
            var_a1 = 0;
            if (temp_v0 != 0) {
                do {
                    temp_v0_2 = arg1 + var_a1;
                    var_a1 += 1;
                    M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) + *temp_v0_2);
                } while (var_a1 < temp_v0);
            }
            M2C_FIELD(temp_s0, s32 *, 0x10) = arg3;
            M2C_FIELD(temp_s0, s32 *, 0x14) = arg4;
            M2C_FIELD(temp_s0, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
            M2C_FIELD(temp_s0, s32 *, 0xC) = arg2;
            temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x1C);
            temp_a0 = temp_v1_4 + 1;
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_a0 - (((s32) ((temp_a0 < 0) ? (temp_v1_4 + 0x10) : temp_a0) >> 4) * 0x10));
            if (M2C_FIELD(arg0, s8 *, 1) == 1) {
                M2C_FIELD(arg0, s8 *, 1) = 2;
            }
            var_v0 = temp_s3;
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return var_v0;
        }
        LSC_CallErrFunc(((void *)D_003CAEE8));
        return -1;
    }
    return var_v0;
}
