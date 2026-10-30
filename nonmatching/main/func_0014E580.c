/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0014E580(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a5;
    s32 var_a6;
    s32 var_t0;
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_t0 = 0;
    if (arg1 > 0) {
        if (arg1 >= 9) {
            var_a6 = 0;
            var_v1 = 0;
            if ((arg1 >= 0) && (arg1 < 0x7FFFFFFF)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                temp_v1 = arg1 & 0x80000000;
                var_a5 = 1;
                if ((temp_v1 == 0) && (temp_v1 != 0)) {
                    var_a5 = 0;
                }
                if (var_a5 != 0) {
                    var_a6 = 1;
                }
            }
            if (var_a6 != 0) {
                temp_a6 = arg2 & 0xFF;
                temp_a5 = arg3 & 0xFF;
                temp_v1_2 = arg4 & 0xFF;
                do {
                    M2C_FIELD(var_a0, u8 *, 0) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0) * temp_a6) >> 7);
                    M2C_FIELD(var_a0, u8 *, 1) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 1) * temp_a5) >> 7);
                    M2C_FIELD(var_a0, u8 *, 2) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 2) * temp_v1_2) >> 7);
                    M2C_FIELD(var_a0, u8 *, 4) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 4) * temp_a6) >> 7);
                    M2C_FIELD(var_a0, u8 *, 5) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 5) * temp_a5) >> 7);
                    M2C_FIELD(var_a0, u8 *, 6) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 6) * temp_v1_2) >> 7);
                    M2C_FIELD(var_a0, u8 *, 8) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 8) * temp_a6) >> 7);
                    M2C_FIELD(var_a0, u8 *, 9) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 9) * temp_a5) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0xA) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0xA) * temp_v1_2) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0xC) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0xC) * temp_a6) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0xD) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0xD) * temp_a5) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0xE) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0xE) * temp_v1_2) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x10) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x10) * temp_a6) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x11) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x11) * temp_a5) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x12) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x12) * temp_v1_2) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x14) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x14) * temp_a6) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x15) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x15) * temp_a5) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x16) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x16) * temp_v1_2) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x18) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x18) * temp_a6) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x19) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x19) * temp_a5) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x1A) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x1A) * temp_v1_2) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x1C) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x1C) * temp_a6) >> 7);
                    M2C_FIELD(var_a0, u8 *, 0x1D) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x1D) * temp_a5) >> 7);
                    var_t0 += 8;
                    M2C_FIELD(var_a0, u8 *, 0x1E) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x1E) * temp_v1_2) >> 7);
                    var_a0 += 0x20;
                } while (var_t0 < (arg1 - 8));
            }
        }
        if (var_t0 < arg1) {
            do {
                M2C_FIELD(var_a0, u8 *, 0) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0) * (arg2 & 0xFF)) >> 7);
                M2C_FIELD(var_a0, u8 *, 1) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 1) * (arg3 & 0xFF)) >> 7);
                var_t0 += 1;
                M2C_FIELD(var_a0, u8 *, 2) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 2) * (arg4 & 0xFF)) >> 7);
                var_a0 += 4;
            } while (var_t0 < arg1);
        }
    }
}
