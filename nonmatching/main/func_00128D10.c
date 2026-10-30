/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00128D10(void *arg0, void *arg1, s32 arg2) {
    s32 var_t0;
    s32 var_t3;
    s32 var_t8;
    s32 var_t9;
    u16 temp_a7;
    u16 var_a6;
    u16 var_s0;
    void *temp_t3;
    void *temp_t8;
    void *var_a1;

    var_a1 = arg1;
    var_t9 = 0;
    var_t8 = 7;
    var_a6 = M2C_FIELD(var_a1, u16 *, 2);
    var_s0 = -1U;
    var_t3 = 4;
    if (var_a6 == 0) {
        var_t8 = 0x8A;
        var_t3 = 3;
    }
    var_t0 = 0;
    M2C_FIELD(((arg2 * 4) + var_a1), s16 *, 6) = 0xFFFF;
    if (arg2 >= 0) {
        do {
            temp_a7 = var_a6;
            var_t9 += 1;
            var_a6 = M2C_FIELD(var_a1, u16 *, 6);
            if (var_t9 >= var_t8) {
                goto block_6;
            }
            if (temp_a7 != var_a6) {
block_6:
                if (var_t9 >= var_t3) {
                    if (temp_a7 != 0) {
                        if (temp_a7 == var_s0) {

                        } else {
                            temp_t3 = arg0 + (temp_a7 * 4);
                            M2C_FIELD(temp_t3, u16 *, 0xA8C) = (u16) (M2C_FIELD(temp_t3, u16 *, 0xA8C) + 1);
                        }
                        M2C_FIELD(arg0, u16 *, 0xACC) = (u16) (M2C_FIELD(arg0, u16 *, 0xACC) + 1);
                    } else if (var_t9 < 0xB) {
                        M2C_FIELD(arg0, u16 *, 0xAD0) = (u16) (M2C_FIELD(arg0, u16 *, 0xAD0) + 1);
                    } else {
                        M2C_FIELD(arg0, u16 *, 0xAD4) = (u16) (M2C_FIELD(arg0, u16 *, 0xAD4) + 1);
                    }
                } else {
                    temp_t8 = arg0 + (temp_a7 * 4);
                    M2C_FIELD(temp_t8, u16 *, 0xA8C) = (u16) (M2C_FIELD(temp_t8, u16 *, 0xA8C) + (var_t9 & 0xFFFF));
                }
                var_t9 = 0;
                var_s0 = temp_a7;
                if (var_a6 != 0) {
                    if (temp_a7 == var_a6) {
                        var_t8 = 6;
                        var_t3 = 3;
                    } else {
                        var_t8 = 7;
                        var_t3 = 4;
                    }
                } else {
                    var_t8 = 0x8A;
                    var_t3 = 3;
                }
            }
            var_t0 += 1;
            var_a1 += 4;
        } while (arg2 >= var_t0);
    }
}
