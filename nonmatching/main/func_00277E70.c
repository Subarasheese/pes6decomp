/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292D50();                                /* extern */
extern char D_00591A90[];
extern char Pes6MatchSquads[];

void func_00277E70(void) {
    M2C_UNK *var_a3;
    M2C_UNK *var_a4;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_a7_2;
    s32 var_a7_3;
    s32 var_t0;
    s32 var_t1;
    u8 temp_t1;
    u8 temp_t1_3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t1_2;
    void *temp_t3;
    void *temp_t8;
    void *temp_t9;
    void *temp_t9_2;

    temp_a2 = func_00292D50() & 0xFF;
    temp_a1 = temp_a2 & 0x80000000;
    var_a6 = 0;
    var_a4 = ((void *)D_00591A90);
    var_a3 = ((void *)Pes6MatchSquads);
    temp_a0 = temp_a2 - 8;
    do {
        var_a5 = 0;
        if (temp_a2 > 0) {
            if (temp_a2 >= 9) {
                var_t1 = 0;
                var_t0 = 0;
                var_a7 = 0;
                if ((temp_a2 >= 0) && (temp_a2 < 0x7FFFFFFF)) {
                    var_a7 = 1;
                }
                if (var_a7 != 0) {
                    var_a7_2 = 1;
                    if ((temp_a1 == 0) && (temp_a1 != temp_a1)) {
                        var_a7_2 = 0;
                    }
                    if (var_a7_2 != 0) {
                        var_t0 = 1;
                    }
                }
                if (var_t0 != 0) {
                    var_a7_3 = 1;
                    if ((temp_a1 == 0) && (temp_a1 != 0)) {
                        var_a7_3 = 0;
                    }
                    if (var_a7_3 != 0) {
                        var_t1 = 1;
                    }
                }
                if (var_t1 != 0) {
                    do {
                        temp_s2 = var_a4 + var_a5;
                        temp_t1 = M2C_FIELD(temp_s2, u8 *, 7);
                        var_a5 += 8;
                        temp_t9 = var_a3 + (temp_t1 * 0x348);
                        M2C_FIELD(temp_t9, s8 *, 0xF8) = 0;
                        M2C_FIELD(temp_t9, s8 *, 0xF9) = 0;
                        temp_t9_2 = var_a3 + (M2C_FIELD(temp_s2, u8 *, 8) * 0x348);
                        M2C_FIELD(temp_t9_2, s8 *, 0xF8) = 0;
                        M2C_FIELD(temp_t9_2, s8 *, 0xF9) = 0;
                        temp_s0 = var_a3 + (M2C_FIELD(temp_s2, u8 *, 9) * 0x348);
                        M2C_FIELD(temp_s0, s8 *, 0xF8) = 0;
                        M2C_FIELD(temp_s0, s8 *, 0xF9) = 0;
                        temp_s0_2 = var_a3 + (M2C_FIELD(temp_s2, u8 *, 0xA) * 0x348);
                        M2C_FIELD(temp_s0_2, s8 *, 0xF8) = 0;
                        M2C_FIELD(temp_s0_2, s8 *, 0xF9) = 0;
                        temp_t3 = var_a3 + (M2C_FIELD(temp_s2, u8 *, 0xB) * 0x348);
                        M2C_FIELD(temp_t3, s8 *, 0xF8) = 0;
                        temp_t8 = var_a3 + (M2C_FIELD(temp_s2, u8 *, 0xC) * 0x348);
                        M2C_FIELD(temp_t3, s8 *, 0xF9) = 0;
                        M2C_FIELD(temp_t8, s8 *, 0xF8) = 0;
                        M2C_FIELD(temp_t8, s8 *, 0xF9) = 0;
                        temp_t1_2 = var_a3 + (M2C_FIELD(temp_s2, u8 *, 0xD) * 0x348);
                        M2C_FIELD(temp_t1_2, s8 *, 0xF8) = 0;
                        temp_t0 = var_a3 + (M2C_FIELD(temp_s2, u8 *, 0xE) * 0x348);
                        M2C_FIELD(temp_t1_2, s8 *, 0xF9) = 0;
                        M2C_FIELD(temp_t0, s8 *, 0xF8) = 0;
                        M2C_FIELD(temp_t0, s8 *, 0xF9) = 0;
                    } while (var_a5 < temp_a0);
                }
            }
            if (var_a5 < temp_a2) {
                do {
                    temp_t1_3 = M2C_FIELD((var_a4 + var_a5), u8 *, 7);
                    var_a5 += 1;
                    temp_t0_2 = var_a3 + (temp_t1_3 * 0x348);
                    M2C_FIELD(temp_t0_2, s8 *, 0xF8) = 0;
                    M2C_FIELD(temp_t0_2, s8 *, 0xF9) = 0;
                } while (var_a5 < temp_a2);
            }
        }
        var_a6 += 1;
        var_a4 += 0x8B;
        var_a3 += 0x6900;
    } while (var_a6 < 2);
}
