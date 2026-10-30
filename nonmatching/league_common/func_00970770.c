/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00221AE0(int);
extern void * func_00228A80(void);
s32 func_00210DF0();                                /* extern */
s32 func_00230410();                                /* extern */
void *func_00AF71D0(s32);                           /* extern */

void *func_00970770(s32 arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a0;
    void *temp_v0;
    void *var_v0;

    if (func_00230410() == 1) {
        temp_s1 = arg0 & 0xFFFF;
        if ((temp_s1 >= 0x7000) && (temp_s1 < 0x7020)) {
            temp_v0 = func_00228A80();
            if (temp_v0 != NULL) {
                var_v0 = temp_v0 + ((temp_s1 - 0x7000) * 0x48) + 0x10BBC;
            } else {
                var_v0 = NULL;
            }
            return var_v0;
        }
    }
    var_a0 = 1;
    if (func_00210DF0() == 1) {
        temp_v1 = arg0 & 0xFFFF;
        if ((temp_v1 >= 0x1770) && (temp_v1 < 0x18F7)) {

        } else {
            var_a0 = 0;
        }
        if (var_a0 == 1) {
            return func_00AF71D0(arg0);
        }
        goto block_16;
    }
block_16:
    return func_00221AE0(arg0);
}
