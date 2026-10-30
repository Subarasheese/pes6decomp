/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCBCF0(void *arg0, void *arg1) {
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a3_3;
    u8 temp_a3_4;
    u8 temp_a4;
    u8 temp_a5;
    u8 temp_a5_2;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x5B);
    temp_a2 = arg0 + 0x34;
    temp_v0 = M2C_FIELD(arg1, u8 *, 0x5B);
    temp_a0 = arg1 + 0x34;
    if ((temp_v1 & 0xF) == (temp_v0 & 0xF)) {
        temp_a5 = M2C_FIELD(temp_a2, u8 *, 0x26);
        temp_a4 = M2C_FIELD(temp_a0, u8 *, 0x26);
        if ((((u64) ((s64) temp_a5 << 0x38) >> 0x3C) == ((u64) ((s64) temp_a4 << 0x38) >> 0x3C)) && ((M2C_FIELD(temp_a2, u8 *, 0x24) & 0x3F) == (M2C_FIELD(temp_a0, u8 *, 0x24) & 0x3F)) && ((M2C_FIELD(temp_a2, u8 *, 0x25) & 0x7F) == (M2C_FIELD(temp_a0, u8 *, 0x25) & 0x7F)) && ((temp_a5 & 0xF) == (temp_a4 & 0xF))) {
            temp_a5_2 = M2C_FIELD(temp_a2, u8 *, 0x35);
            temp_a3 = M2C_FIELD(temp_a0, u8 *, 0x35);
            if (((temp_a5_2 & 0xF) == (temp_a3 & 0xF)) && (((u64) ((s64) temp_v1 << 0x38) >> 0x3C) == ((u64) ((s64) temp_v0 << 0x38) >> 0x3C)) && (((u64) ((s64) temp_a5_2 << 0x38) >> 0x3C) == ((u64) ((s64) temp_a3 << 0x38) >> 0x3C))) {
                temp_a3_2 = M2C_FIELD(temp_a2, u8 *, 0x36);
                temp_a1 = M2C_FIELD(temp_a0, u8 *, 0x36);
                if (((temp_a3_2 & 0xF) == (temp_a1 & 0xF)) && (((u64) ((s64) temp_a3_2 << 0x38) >> 0x3C) == ((u64) ((s64) temp_a1 << 0x38) >> 0x3C))) {
                    temp_a3_3 = M2C_FIELD(temp_a2, u8 *, 0x37);
                    temp_a1_2 = M2C_FIELD(temp_a0, u8 *, 0x37);
                    if ((((u64) ((s64) temp_a3_3 << 0x38) >> 0x3C) == ((u64) ((s64) temp_a1_2 << 0x38) >> 0x3C)) && ((temp_a3_3 & 0xF) == (temp_a1_2 & 0xF))) {
                        temp_a3_4 = M2C_FIELD(temp_a2, u8 *, 0x38);
                        temp_a1_3 = M2C_FIELD(temp_a0, u8 *, 0x38);
                        if (((temp_a3_4 & 0xF) == (temp_a1_3 & 0xF)) && (((u64) ((s64) temp_a3_4 << 0x38) >> 0x3C) == ((u64) ((s64) temp_a1_3 << 0x38) >> 0x3C))) {
                            if ((M2C_FIELD(temp_a2, u8 *, 0x39) & 0xF) == (M2C_FIELD(temp_a0, u8 *, 0x39) & 0xF)) {
                                return 0;
                            }
                            goto block_17;
                        }
                    }
                }
            }
        }
    }
block_17:
    return 1;
}
