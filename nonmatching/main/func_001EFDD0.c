/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001EFDD0(void *arg0) {
    s32 var_a6;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    void *var_a4;
    void *var_a5;

    var_a6 = 0;
    var_a5 = arg0;
    var_a4 = arg0;
    do {
        if (M2C_FIELD(arg0, s32 *, 0xD0) == 0) {
            M2C_FIELD(var_a4, u8 *, 0xB0) = (u8) M2C_FIELD(var_a5, u8 *, 0xA0);
            M2C_FIELD(var_a4, u8 *, 0xB1) = (u8) M2C_FIELD(var_a5, u8 *, 0xA1);
            M2C_FIELD(var_a4, u8 *, 0xB2) = (u8) M2C_FIELD(var_a5, u8 *, 0xA2);
            temp_v1 = M2C_FIELD(var_a5, u8 *, 0xA3);
            if (temp_v1 != 0xFF) {
                var_v1 = (s32) temp_v1 >> 1;
            } else {
                var_v1 = 0x80;
            }
            M2C_FIELD(var_a4, s8 *, 0xB3) = (s8) var_v1;
        } else {
            temp_v1_2 = M2C_FIELD(var_a5, u8 *, 0xA0);
            if (temp_v1_2 != 0xFF) {
                var_v1_2 = (s32) temp_v1_2 >> 1;
            } else {
                var_v1_2 = 0x80;
            }
            M2C_FIELD(var_a4, u8 *, 0xB0) = (u8) var_v1_2;
            temp_v1_3 = M2C_FIELD(var_a5, u8 *, 0xA1);
            if (temp_v1_3 != 0xFF) {
                var_v1_3 = (s32) temp_v1_3 >> 1;
            } else {
                var_v1_3 = 0x80;
            }
            M2C_FIELD(var_a4, u8 *, 0xB1) = (u8) var_v1_3;
            temp_v1_4 = M2C_FIELD(var_a5, u8 *, 0xA2);
            if (temp_v1_4 != 0xFF) {
                var_v1_4 = (s32) temp_v1_4 >> 1;
            } else {
                var_v1_4 = 0x80;
            }
            M2C_FIELD(var_a4, u8 *, 0xB2) = (u8) var_v1_4;
            temp_v1_5 = M2C_FIELD(var_a5, u8 *, 0xA3);
            if (temp_v1_5 != 0xFF) {
                var_v1_5 = (s32) temp_v1_5 >> 1;
            } else {
                var_v1_5 = 0x80;
            }
            M2C_FIELD(var_a4, s8 *, 0xB3) = (s8) var_v1_5;
        }
        M2C_FIELD(var_a4, s32 *, 0xB4) = 0x3F800000;
        var_a6 += 1;
        var_a5 += 4;
        var_a4 += 8;
    } while (var_a6 < 4);
}
