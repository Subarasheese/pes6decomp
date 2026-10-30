/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00228A80(void);
M2C_UNK func_00AF6B00(s32, s32, s32);               /* extern */
M2C_UNK func_00AFF3C0();                            /* extern */
M2C_UNK func_00B1CC10(u8);                          /* extern */

void func_00AF6A40(s32 arg0, s32 arg1) {
    s32 var_a2;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a2 = 0;
loop_2:
        if (M2C_FIELD((temp_v0 + ((var_a2 & 0xFFFF) * 0x32)), u16 *, 0xA68C) != 0) {
            var_a2 = (var_a2 + 1) & 0xFFFF;
            if (var_a2 >= 0x25) {

            } else {
                goto loop_2;
            }
        } else {
            func_00AF6B00(var_a2 & 0xFF, arg0, var_a2);
            if (arg1 == 1) {
                func_00B1CC10(func_00225820());
            }
            func_00AFF3C0();
        }
    }
}
