/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00234E00(s32);                             /* extern */
s32 func_00236680(s32);                             /* extern */

void *func_00236730(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a3;
    s32 var_a4;
    u8 temp_a2;
    u8 temp_v1;
    void *temp_s1;
    void *var_a1;

    temp_s1 = func_00229460();
    if (func_00231240() == 1) {
        return NULL;
    }
    if (temp_s1 != NULL) {
        temp_s2 = func_00234E00(arg0) & 0xFF;
        temp_s0 = (arg0 - func_00236680(temp_s2)) & 0xFF;
        var_a3 = 0;
        temp_a2_2 = (arg1 - func_00236680(temp_s2)) & 0xFF;
        var_a4 = 0;
        var_a1 = temp_s1;
loop_8:
        if (var_a3 < (temp_s2 & 0xFF)) {
            if (var_a3 < 0x14) {
                temp_v1 = M2C_FIELD(var_a1, u8 *, 0x4AB8);
                var_a3 += 1;
                temp_v0 = M2C_FIELD(var_a1, u8 *, 0x4ABD) * temp_v1;
                var_a1 += 0xC;
                var_a4 = (var_a4 + ((temp_v1 * temp_v0) & 0xFFFF)) & 0xFFFF;
                goto loop_8;
            }
        }
        temp_a2 = M2C_FIELD((((temp_s2 & 0xFF) * 0xC) + temp_s1), u8 *, 0x4AB8);
        return temp_s1 + (((temp_a2 * ((temp_s0 & 0xFF) + ((arg2 & 0xFF) * temp_a2))) + (var_a4 & 0xFFFF) + (temp_a2_2 & 0xFF)) & 0xFFFF) + 0x32B4;
    }
    return NULL;
}
