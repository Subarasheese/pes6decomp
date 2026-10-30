/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994670(s32, s32);                      /* extern */
void *func_009946E0(s32, s32);                      /* extern */
s32 func_00994750();                                /* extern */

void func_00B1A0F0(s32 arg0) {
    s32 var_a2;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a1;

    temp_v0 = (arg0 & 0xFF) + func_00994750();
    var_s1 = 0;
    M2C_FIELD(temp_v0, s8 *, 0x29AC) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x61944) = 0;
    do {
        temp_v0_2 = func_009946E0(arg0, var_s1 & 0xFF);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s8 *, 0) = 0xFF;
            M2C_FIELD(temp_v0_2, s8 *, 1) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 2) = 0xFF;
            M2C_FIELD(temp_v0_2, s8 *, 3) = 0;
        }
        var_s1 += 1;
    } while (var_s1 < 0x25);
    var_s1_2 = 0;
    do {
        temp_v0_3 = func_00994670(arg0, var_s1_2 & 0xFF);
        if (temp_v0_3 != NULL) {
            var_a2 = 0;
            var_a1 = temp_v0_3;
            do {
                M2C_FIELD(var_a1, s8 *, 0) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 1) = 0;
                var_a2 += 8;
                M2C_FIELD(var_a1, s8 *, 2) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 3) = 0;
                M2C_FIELD(var_a1, s8 *, 4) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 5) = 0;
                M2C_FIELD(var_a1, s8 *, 6) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 7) = 0;
                M2C_FIELD(var_a1, s8 *, 8) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 9) = 0;
                M2C_FIELD(var_a1, s8 *, 0xA) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 0xB) = 0;
                M2C_FIELD(var_a1, s8 *, 0xC) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 0xD) = 0;
                M2C_FIELD(var_a1, s8 *, 0xE) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 0xF) = 0;
                var_a1 += 0x10;
            } while (var_a2 < 0x48);
            M2C_FIELD(temp_v0_3, s8 *, 0x90) = 0xFF;
            M2C_FIELD(temp_v0_3, s8 *, 0x91) = 0;
        }
        var_s1_2 += 1;
    } while (var_s1_2 < 0x25);
}
