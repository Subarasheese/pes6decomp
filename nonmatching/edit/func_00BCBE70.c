/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C4698(void *, void *, M2C_UNK, u8, u8, u64, u64); /* extern */

s32 func_00BCBE70(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    u64 temp_a6_3;
    u64 temp_a7_3;
    u8 temp_a4;
    u8 temp_a4_2;
    u8 temp_a5;
    u8 temp_a5_2;
    u8 temp_a6;
    u8 temp_a6_2;
    u8 temp_a7;
    u8 temp_a7_2;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t1;
    u8 temp_t1_2;
    u8 temp_t2;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_t8;
    void *temp_t9;

    temp_t9 = arg0 + 0x34;
    temp_a7 = M2C_FIELD(arg0, u8 *, 0x5E);
    temp_a6 = M2C_FIELD(arg1, u8 *, 0x5E);
    temp_t8 = arg1 + 0x34;
    if (((u64) ((s64) temp_a7 << 0x38) >> 0x3E) == ((u64) ((s64) temp_a6 << 0x38) >> 0x3E)) {
        temp_v1 = M2C_FIELD(temp_t9, u8 *, 0x29);
        temp_v0 = M2C_FIELD(temp_t8, u8 *, 0x29);
        if ((((u64) ((s64) temp_v1 << 0x39) >> 0x3C) == ((u64) ((s64) temp_v0 << 0x39) >> 0x3C)) && ((temp_a7 & 0x3F) == (temp_a6 & 0x3F)) && (((u64) ((s64) M2C_FIELD(temp_t9, u8 *, 0x32) << 0x38) >> 0x3A) == ((u64) ((s64) M2C_FIELD(temp_t8, u8 *, 0x32) << 0x38) >> 0x3A))) {
            temp_t3 = M2C_FIELD(temp_t9, u8 *, 0x33);
            temp_t2 = M2C_FIELD(temp_t8, u8 *, 0x33);
            if ((temp_t3 & 0x3F) == (temp_t2 & 0x3F)) {
                temp_t1 = M2C_FIELD(temp_t9, u8 *, 0x34);
                temp_t0 = M2C_FIELD(temp_t8, u8 *, 0x34);
                if (((temp_t1 & 0x3F) == (temp_t0 & 0x3F)) && (((u64) ((s64) M2C_FIELD(temp_t9, u8 *, 0x39) << 0x39) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_t8, u8 *, 0x39) << 0x39) >> 0x3D))) {
                    temp_a7_2 = M2C_FIELD(temp_t9, u8 *, 0x2B);
                    temp_a6_2 = M2C_FIELD(temp_t8, u8 *, 0x2B);
                    if (((temp_a7_2 & 0x7F) == (temp_a6_2 & 0x7F)) && ((M2C_FIELD(temp_t9, u8 *, 0x2C) & 0x3F) == (M2C_FIELD(temp_t8, u8 *, 0x2C) & 0x3F)) && (((u64) ((s64) temp_v1 << 0x38) >> 0x3F) == ((u64) ((s64) temp_v0 << 0x38) >> 0x3F))) {
                        temp_a5 = M2C_FIELD(temp_t9, u8 *, 0x2D);
                        temp_a4 = M2C_FIELD(temp_t8, u8 *, 0x2D);
                        if (((u64) ((s64) temp_a5 << 0x3C) >> 0x3E) == ((u64) ((s64) temp_a4 << 0x3C) >> 0x3E)) {
                            temp_s1 = M2C_FIELD(temp_t9, u8 *, 0x2E);
                            temp_s0 = M2C_FIELD(temp_t8, u8 *, 0x2E);
                            if (((temp_s1 & 7) == (temp_s0 & 7)) && (((u64) ((s64) temp_s1 << 0x3B) >> 0x3E) == ((u64) ((s64) temp_s0 << 0x3B) >> 0x3E)) && (((u64) ((s64) temp_s1 << 0x38) >> 0x3D) == ((u64) ((s64) temp_s0 << 0x38) >> 0x3D))) {
                                temp_v1_2 = M2C_FIELD(temp_t9, u8 *, 0x2F);
                                temp_v0_2 = M2C_FIELD(temp_t8, u8 *, 0x2F);
                                if (((temp_v1_2 & 3) == (temp_v0_2 & 3)) && (((u64) ((s64) temp_v1_2 << 0x3B) >> 0x3D) == ((u64) ((s64) temp_v0_2 << 0x3B) >> 0x3D)) && (((u64) ((s64) temp_t3 << 0x38) >> 0x3E) == ((u64) ((s64) temp_t2 << 0x38) >> 0x3E)) && (((u64) ((s64) temp_t1 << 0x38) >> 0x3F) == ((u64) ((s64) temp_t0 << 0x38) >> 0x3F)) && (((u64) ((s64) M2C_FIELD(temp_t9, u8 *, 0x25) << 0x38) >> 0x3F) == ((u64) ((s64) M2C_FIELD(temp_t8, u8 *, 0x25) << 0x38) >> 0x3F)) && (((u64) ((s64) temp_v1_2 << 0x38) >> 0x3F) == ((u64) ((s64) temp_v0_2 << 0x38) >> 0x3F))) {
                                    temp_t1_2 = M2C_FIELD(temp_t9, u8 *, 0x30);
                                    temp_t0_2 = M2C_FIELD(temp_t8, u8 *, 0x30);
                                    if ((temp_t1_2 & 7) == (temp_t0_2 & 7)) {
                                        temp_a7_3 = (u64) ((s64) temp_a6_2 << 0x38) >> 0x3F;
                                        temp_a6_3 = (u64) ((s64) temp_a7_2 << 0x38) >> 0x3F;
                                        if ((temp_a6_3 == temp_a7_3) && ((temp_a5 & 3) == (temp_a4 & 3)) && (((u64) ((s64) temp_t1_2 << 0x3B) >> 0x3E) == ((u64) ((s64) temp_t0_2 << 0x3B) >> 0x3E)) && (temp_a6_3 == temp_a7_3)) {
                                            temp_a5_2 = M2C_FIELD(temp_t9, u8 *, 0x3A);
                                            temp_a4_2 = M2C_FIELD(temp_t8, u8 *, 0x3A);
                                            if (((temp_a5_2 & 7) == (temp_a4_2 & 7)) && (((u64) ((s64) temp_a5_2 << 0x3A) >> 0x3D) == ((u64) ((s64) temp_a4_2 << 0x3A) >> 0x3D)) && ((arg2 & 0xFF) == (arg3 & 0xFF))) {
                                                if (func_001C4698(arg0 + 0x20, arg1 + 0x20, 0xF, temp_a4_2, temp_a5_2, temp_a6_3, temp_a7_3) == 0) {
                                                    return 0;
                                                }
                                                goto block_31;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
block_31:
    return 1;
}
