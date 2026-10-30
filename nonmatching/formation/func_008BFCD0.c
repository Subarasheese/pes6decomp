/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592800[];

s32 func_008BFCD0(s32 arg0, void *arg1) {
    M2C_UNK *var_a4;
    s32 var_a5;
    s32 var_a5_2;
    s32 var_a6;
    s32 var_a7;
    s32 var_v0;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 var_t0;
    void *temp_a2;

    M2C_FIELD(arg1, s8 *, 0x75D) = 0xFF;
    var_v0 = 0;
    M2C_FIELD(arg1, s8 *, 0x75E) = 0xFF;
    var_a5 = 0;
    M2C_FIELD(arg1, s8 *, 0x75F) = 0xFF;
    var_a4 = ((void *)D_00592800);
    M2C_FIELD(arg1, s8 *, 0x760) = 0xFF;
    M2C_FIELD(arg1, s8 *, 0x761) = 0xFF;
    M2C_FIELD(arg1, s8 *, 0x762) = 0xFF;
    M2C_FIELD(arg1, s8 *, 0x763) = 0xFF;
    M2C_FIELD(arg1, s8 *, 0x764) = 0xFF;
    do {
        temp_a3 = M2C_FIELD(var_a4, u8 *, 0);
        if (((s32) temp_a3 < 8) && (arg0 == M2C_FIELD(var_a4, u8 *, 1)) && (M2C_FIELD(var_a4, u8 *, 3) == 0)) {
            var_v0 = 1;
            M2C_FIELD((arg1 + temp_a3), u8 *, 0x75D) = (u8) M2C_FIELD(var_a4, u8 *, 6);
        }
        var_a5 += 1;
        var_a4 += 0x28;
    } while (var_a5 < 8);
    var_a5_2 = 0;
    do {
        temp_a2 = arg1 + var_a5_2;
        if (M2C_FIELD(temp_a2, u8 *, 0x75D) != 0xFF) {
            var_t0 = M2C_FIELD(arg1, u8 *, 4);
            if ((s32) var_t0 < 0x20) {
                do {
                    if (M2C_FIELD(temp_a2, u8 *, 0x75D) == M2C_FIELD((arg1 + var_t0), u8 *, 0x766)) {
                        var_a7 = M2C_FIELD(arg1, u8 *, 4) - 1;
                        if (var_a7 >= 0) {
loop_13:
                            temp_a2_2 = M2C_FIELD((arg1 + var_a7), u8 *, 0x766);
                            var_a6 = 0;
loop_14:
                            if (temp_a2_2 != M2C_FIELD((arg1 + var_a6), u8 *, 0x75D)) {
                                var_a6 += 1;
                                if (var_a6 < 8) {
                                    goto loop_14;
                                }
                            }
                            if (var_a6 == 8) {
                                M2C_FIELD(temp_a2, u8 *, 0x75D) = temp_a2_2;
                            } else {
                                var_a7 -= 1;
                                if (var_a7 < 0) {

                                } else {
                                    goto loop_13;
                                }
                            }
                        }
                    }
                    var_t0 += 1;
                } while ((s32) var_t0 < 0x20);
            }
        }
        var_a5_2 += 1;
    } while (var_a5_2 < 8);
    return var_v0;
}
