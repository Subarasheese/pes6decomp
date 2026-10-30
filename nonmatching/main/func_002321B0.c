/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_002321B0(s32 arg0) {
    s32 temp_s4;
    s32 var_a0;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0_2;
    u8 temp_a0;
    u8 temp_a2;
    u8 var_v0;
    void *temp_a6;
    void *temp_s0;
    void *temp_s2;
    void *temp_v1;

    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 0;
    }
    if (temp_s0 != NULL) {
        temp_s4 = arg0 & 0xFF;
        if (temp_s4 < 8) {
            temp_v1 = temp_s4 + temp_s0;
            var_s1 = 0;
            var_s0 = 0;
            if ((s32) M2C_FIELD(temp_v1, u8 *, 0x4616) > 0) {
                do {
                    temp_s2 = func_00229460();
                    if (func_00231240() == 1) {
                        var_v0 = 0;
                    } else if (temp_s2 == NULL) {
                        var_v0 = 0;
                    } else {
                        var_a3 = 0;
                        var_v0_2 = 0;
                        if (temp_s4 > 0) {
                            if (temp_s4 >= 9) {
                                var_a0 = 0;
                                if ((temp_s4 >= 0) && (temp_s4 < 0x7FFFFFFF)) {
                                    var_a0 = 1;
                                }
                                if (var_a0 != 0) {
                                    do {
                                        temp_a6 = temp_s2 + var_v0_2;
                                        temp_a2 = M2C_FIELD(temp_a6, u8 *, 0x4616);
                                        var_v0_2 += 8;
                                        var_a3 = (((((((((((((((var_a3 + temp_a2) & 0xFF) + M2C_FIELD(temp_a6, u8 *, 0x4617)) & 0xFF) + M2C_FIELD(temp_a6, u8 *, 0x4618)) & 0xFF) + M2C_FIELD(temp_a6, u8 *, 0x4619)) & 0xFF) + M2C_FIELD(temp_a6, u8 *, 0x461A)) & 0xFF) + M2C_FIELD(temp_a6, u8 *, 0x461B)) & 0xFF) + M2C_FIELD(temp_a6, u8 *, 0x461C)) & 0xFF) + M2C_FIELD(temp_a6, u8 *, 0x461D)) & 0xFF;
                                    } while (var_v0_2 < (temp_s4 - 8));
                                }
                            }
                            if (var_v0_2 < temp_s4) {
                                do {
                                    temp_a0 = M2C_FIELD((temp_s2 + var_v0_2), u8 *, 0x4616);
                                    var_v0_2 += 1;
                                    var_a3 = (var_a3 + temp_a0) & 0xFF;
                                } while (var_v0_2 < temp_s4);
                            }
                        }
                        var_v0 = M2C_FIELD((temp_s2 + (((var_a3 + (var_s1 & 0xFF)) & 0xFF) * 0xC)), u8 *, 0x4AB8);
                    }
                    var_s0 = (var_s0 + var_v0) & 0xFF;
                    var_s1 += 1;
                } while (var_s1 < (s32) M2C_FIELD(temp_v1, u8 *, 0x4616));
            }
            return var_s0;
        }
        return 0;
    }
    return 0;
}
