/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_009177C0(s8, u8, void *, s8);            /* extern */
extern char D_0092F0A0[];

void func_0090E110(M2C_UNK arg0, u8 arg1, void *arg2, s8 arg3) {
    M2C_UNK *var_s1;
    s32 var_s2;
    s8 temp_s0;
    s8 var_a3;
    u8 var_a1;
    void *temp_a0;
    void *var_a2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_s2 = 0;
    var_s1 = ((void *)D_0092F0A0);
    do {
        temp_s0 = M2C_FIELD(var_s1, s8 *, 0x14);
        if ((temp_s0 >= 0) && (temp_s0 != 0) && (temp_s0 != 0xB)) {
            if (M2C_FIELD(func_009177C0(temp_s0, var_a1, var_a2, var_a3), u8 *, 0x12) != 0) {
                var_a3 = 0xF;
            } else {
                var_a3 = 4;
            }
            var_a2 = ((void *)D_0092F0A0) + (var_a3 & 0xFF);
            temp_a0 = ((void *)D_0092F0A0) + temp_s0;
            var_a1 = M2C_FIELD(var_a2, u8 *, 0x110);
            M2C_FIELD(var_a2, u8 *, 0x110) = (u8) M2C_FIELD(temp_a0, u8 *, 0x110);
            M2C_FIELD(temp_a0, u8 *, 0x110) = var_a1;
            M2C_FIELD(var_s1, s8 *, 0x14) = var_a3;
        }
        var_s2 += 1;
        var_s1 += 8;
    } while (var_s2 < 2);
}
