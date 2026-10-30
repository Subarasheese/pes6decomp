/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3694[];

void func_0011BBF0(u8 **arg0, s8 arg1) {
    s32 var_a2;
    s32 var_a2_2;
    s8 var_a1;
    u32 temp_v1;
    u32 var_v1;
    u8 *temp_a3;
    u8 *var_a0;
    u8 *var_a3;
    u8 temp_v0;

    var_a1 = arg1;
    temp_a3 = *arg0;
    if (var_a1 <= -1) {
        var_a1 = (s8) (*(u32 *)D_005B3694);
    }
    var_v1 = 0x800;
    if ((u32) var_a1 < 0x80U) {
        *temp_a3 = var_a1;
        var_a3 = temp_a3 + 1;
    } else {
        var_a2 = 1;
        if ((u32) var_a1 >= 0x800U) {
            do {
                var_v1 <<= 5;
                var_a2 += 1;
            } while ((u32) var_a1 >= var_v1);
        }
        var_a3 = temp_a3 + (var_a2 + 1);
        var_a0 = var_a3;
        var_a2_2 = var_a2 - 1;
        temp_v1 = ((1 << (7 - var_a2)) - 1) & 0xFF;
        if (var_a2_2 != -1) {
            do {
                var_a0 -= 1;
                temp_v0 = (var_a1 & 0x3F) | 0x80;
                var_a1 = (s8) ((u32) var_a1 >> 6);
                *var_a0 = temp_v0;
                var_a2_2 -= 1;
            } while (var_a2_2 != -1);
        }
        M2C_FIELD(var_a0, s8 *, -1) = (s8) (~temp_v1 | (var_a1 & (temp_v1 >> 1)));
    }
    *arg0 = var_a3;
}
