/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00228ED0(s32, s32);
extern int func_00231240(void);
extern void * func_00229460(void);
u8 *func_00232510(void *, s32, s32);                /* extern */
s32 func_00234E00(s32);                             /* extern */

s32 func_00235BB0(s32 arg0, s32 arg1) {
    s32 temp_s0_2;
    s32 temp_s2;
    u8 var_v0;
    void *temp_s0;

    if (func_00231240() != 1) {
        temp_s2 = func_00228ED0(arg0, arg1) & 0xFF;
        if (temp_s2 == 0xFF) {
            return 0;
        }
        temp_s0 = func_00229460();
        if (func_00231240() == 1) {
            return 0;
        }
        if (temp_s0 != NULL) {
            temp_s0_2 = (M2C_FIELD((((func_00234E00(temp_s2) & 0xFF) * 0xC) + temp_s0), u8 *, 0x4ABA) - 1) & 0xFF;
            if (func_00231240() != 1) {
                var_v0 = *func_00232510(temp_s0 + 0x3CD6, temp_s2, temp_s0_2);
            } else {
                var_v0 = 0;
            }
            return var_v0 & 0xFF;
        }
        return 0;
    }
    return 0;
}
