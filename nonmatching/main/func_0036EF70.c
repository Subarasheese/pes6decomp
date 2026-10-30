/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292F00(u8, s32);                         /* extern */

void func_0036EF70(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    void *var_s0;

    var_a1 = arg1;
    var_s1 = 1;
    var_s0 = arg0 + 2;
    do {
        temp_a0 = func_00292F00(M2C_FIELD((arg0 + var_s1), u8 *, 0x14), var_a1) & 0xFF;
        var_a1 = 2;
        switch (temp_a0) {                          /* irregular */
        case 1:
            var_a0 = 0xF;
            break;
        case 2:
            var_a1 = 0x10;
            var_a0 = 0x22;
            break;
        default:
            var_a1 = 0x23;
            var_a0 = 0x2F;
            break;
        }
        if ((s32) M2C_FIELD(var_s0, u8 *, -2) < var_a1) {
            M2C_FIELD(var_s0, u8 *, -2) = (u8) var_a1;
        }
        if (var_a0 < (s32) M2C_FIELD(var_s0, u8 *, -2)) {
            M2C_FIELD(var_s0, u8 *, -2) = (u8) var_a0;
        }
        var_s1 += 1;
        var_s0 += 2;
    } while (var_s1 < 0xB);
}
