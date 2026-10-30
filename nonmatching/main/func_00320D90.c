/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00320D90(s16 *arg0) {
    s16 *var_a1_2;
    s16 *var_a2;
    s16 temp_a1;
    s16 var_a3;
    s16 var_a4;
    s32 var_a1;
    s32 var_a5;
    s32 var_a6;
    void *var_t0;

    var_a3 = 0;
    var_a6 = 0;
    var_a4 = 0;
    if (*arg0 > 0) {
        var_a2 = arg0;
        do {
            if (var_a6 != 0) {
                temp_a1 = M2C_FIELD(var_a2, s16 *, -8);
                if (temp_a1 != M2C_FIELD(var_a2, s16 *, 8)) {
                    var_a3 = M2C_FIELD(var_a2, s16 *, -0xA);
                    var_a4 = temp_a1;
                    if (temp_a1 == 1) {
                        var_a5 = 0;
                        if (var_a6 > 0) {
                            if (var_a6 >= 9) {
                                var_a1 = 0;
                                if ((var_a6 >= 0) && (var_a6 < 0x7FFFFFFF)) {
                                    var_a1 = 1;
                                }
                                if (var_a1 != 0) {
                                    var_a1_2 = arg0;
                                    do {
                                        var_a5 += 8;
                                        M2C_FIELD(var_a1_2, s8 *, 0x10) = (s8) (M2C_FIELD(var_a1_2, s16 *, 6) - M2C_FIELD(var_a2, s16 *, 6));
                                        M2C_FIELD(var_a1_2, s8 *, 0x20) = (s8) (M2C_FIELD(var_a1_2, s16 *, 0x16) - M2C_FIELD(var_a2, s16 *, 6));
                                        M2C_FIELD(var_a1_2, s8 *, 0x30) = (s8) (M2C_FIELD(var_a1_2, s16 *, 0x26) - M2C_FIELD(var_a2, s16 *, 6));
                                        M2C_FIELD(var_a1_2, s8 *, 0x40) = (s8) (M2C_FIELD(var_a1_2, s16 *, 0x36) - M2C_FIELD(var_a2, s16 *, 6));
                                        M2C_FIELD(var_a1_2, s8 *, 0x50) = (s8) (M2C_FIELD(var_a1_2, s16 *, 0x46) - M2C_FIELD(var_a2, s16 *, 6));
                                        M2C_FIELD(var_a1_2, s8 *, 0x60) = (s8) (M2C_FIELD(var_a1_2, s16 *, 0x56) - M2C_FIELD(var_a2, s16 *, 6));
                                        M2C_FIELD(var_a1_2, s8 *, 0x70) = (s8) (M2C_FIELD(var_a1_2, s16 *, 0x66) - M2C_FIELD(var_a2, s16 *, 6));
                                        M2C_FIELD(var_a1_2, s8 *, 0x80) = (s8) (M2C_FIELD(var_a1_2, s16 *, 0x76) - M2C_FIELD(var_a2, s16 *, 6));
                                        var_a1_2 += 0x80;
                                    } while (var_a5 < (var_a6 - 8));
                                }
                            }
                            if (var_a5 < var_a6) {
                                var_t0 = arg0 + (var_a5 * 0x10);
                                do {
                                    var_a5 += 1;
                                    M2C_FIELD(var_t0, s8 *, 0x10) = (s8) (M2C_FIELD(var_t0, s16 *, 6) - M2C_FIELD(var_a2, s16 *, 6));
                                    var_t0 += 0x10;
                                } while (var_a5 < var_a6);
                            }
                        }
                    }
                }
            }
            M2C_FIELD(var_a2, s8 *, 0x11) = (s8) var_a4;
            var_a6 += 1;
            M2C_FIELD(var_a2, s8 *, 0x10) = (s8) (var_a3 - M2C_FIELD(var_a2, s16 *, 6));
            var_a2 += 0x10;
        } while (var_a6 < *arg0);
    }
    return 1;
}
