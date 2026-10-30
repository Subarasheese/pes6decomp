/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_009B41B0(M2C_UNK, s64);                  /* extern */

s32 func_00940A60(s64 arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s64 temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;

    temp_s0 = (s64) (arg0 << 0x38) >> 0x38;
    temp_s3 = func_009B41B0(-2, temp_s0);
    temp_s2 = func_009B41B0(-1, temp_s0);
    temp_s1 = func_009B41B0(0, temp_s0);
    temp_s0_2 = func_009B41B0(1, temp_s0);
    temp_v0 = func_009B41B0(2, temp_s0);
    temp_a2 = M2C_FIELD(temp_v0, u16 *, 0x10) & 0x7FF;
    temp_a1 = M2C_FIELD(temp_s0_2, u16 *, 0x10) & 0x7FF;
    if (temp_a1 == temp_a2) {
        temp_f1 = M2C_FIELD(temp_s0_2, f32 *, 0x18);
        if ((temp_f1 == M2C_FIELD(temp_v0, f32 *, 0x18)) && (((M2C_FIELD(temp_s1, u16 *, 0x10) & 0x7FF) != temp_a1) || (M2C_FIELD(temp_s1, f32 *, 0x18) != temp_f1))) {
            return 2;
        }
        goto block_3;
    }
block_3:
    temp_a0 = M2C_FIELD(temp_s1, u16 *, 0x10) & 0x7FF;
    if ((temp_a0 != temp_a1) || (temp_f1_2 = M2C_FIELD(temp_s1, f32 *, 0x18), (temp_f1_2 != M2C_FIELD(temp_s0_2, f32 *, 0x18))) || (((M2C_FIELD(temp_s2, u16 *, 0x10) & 0x7FF) == temp_a0) && (M2C_FIELD(temp_s2, f32 *, 0x18) == temp_f1_2))) {
        if (!(M2C_FIELD(temp_v0, u8 *, 0xF) & 3)) {
            if ((temp_a0 != temp_a1) && (temp_a1 != temp_a2)) {
                return 4;
            }
            if (((M2C_FIELD(temp_s2, u16 *, 0x10) & 0x7FF) == temp_a0) && (temp_a0 != temp_a1) && (temp_a1 == temp_a2)) {
                return 4;
            }
            goto block_15;
        }
block_15:
        if (!(M2C_FIELD(temp_s2, u8 *, 0xF) & 3)) {
            temp_v1 = M2C_FIELD(temp_s2, u16 *, 0x10) & 0x7FF;
            if ((temp_v1 != temp_a0) && (temp_a0 != temp_a1)) {
                return 5;
            }
            if (((M2C_FIELD(temp_s3, u16 *, 0x10) & 0x7FF) == temp_v1) && (temp_v1 != temp_a0) && (temp_a0 == temp_a1)) {
                return 5;
            }
            goto block_28;
        }
block_28:
        return 0;
    }
    return 3;
}
