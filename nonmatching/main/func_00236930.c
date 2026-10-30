/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00234E00();                                /* extern */
u8 *func_00236730(s32, s32, s32);                   /* extern */

s32 func_00236930(s32 arg0, s32 arg1) {
    u8 sp8C;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    u8 *var_a3;
    u8 *var_s1;
    u8 *var_v1;
    u8 temp_s0_2;
    u8 temp_v0_2;
    u8 var_v0_2;
    void *temp_s0;

    var_s3 = 0;
    var_s2 = 0;
    temp_s1 = func_00234E00() & 0xFF;
    var_v1 = &sp8C;
    var_v0 = 4;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 0;
    }
    if (temp_s0 != NULL) {
        temp_s0_2 = M2C_FIELD((((temp_s1 & 0xFF) * 0xC) + temp_s0), u8 *, 0x4ABD);
        var_s4 = 0;
        if ((s32) temp_s0_2 > 0) {
            var_s1 = &sp8C;
            do {
                if (func_00231240() != 1) {
                    var_v0_2 = *func_00236730(arg0, arg1, var_s4 & 0xFF);
                } else {
                    var_v0_2 = 0;
                }
                *var_s1 = var_v0_2;
                var_s4 += 1;
                var_s1 += 1;
            } while (var_s4 < (s32) temp_s0_2);
        }
        var_a2 = 0;
        if ((s32) temp_s0_2 > 0) {
            var_a3 = &sp8C;
            do {
                temp_v0_2 = *var_a3;
                switch (temp_v0_2) {                /* irregular */
                case 5:
                case 1:
                    var_s3 = (var_s3 + 1) & 0xFF;
                    break;
                case 2:
                    var_s2 = (var_s2 + 1) & 0xFF;
                    break;
                }
                var_a2 += 1;
                var_a3 += 1;
            } while (var_a2 < (s32) temp_s0_2);
        }
        temp_v1 = var_s2 & 0xFF;
        temp_v0 = var_s3 & 0xFF;
        if (temp_v1 >= temp_v0) {
            return -(temp_v0 < temp_v1);
        }
        return 1;
    }
    return 0;
}
