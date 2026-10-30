/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002C7F60(void *, s32);                 /* extern */
extern char D_003AC450[];

void func_002C7EB0(s8 *arg0, s8 *arg1, u8 *arg2) {
    s32 temp_a3;
    s32 var_a2;
    s8 *var_a0;
    s8 *var_a1;
    u8 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = *arg2;
    if ((var_a3 != 0x17) && ((s32) var_a3 < 0x18) && (var_a0 != NULL)) {
        if (var_a1 == NULL) {
            if (var_a3 == 0x16) {
                var_a3 = 0;
            }
        }
        temp_a3 = var_a3 & 0xFF;
        if (temp_a3 == 0x16) {
            var_a2 = 0x35;
            do {
                var_a2 -= 1;
                *var_a0 = *var_a1;
                var_a1 += 1;
                var_a0 += 1;
            } while (var_a2 > 0);
        } else {
            func_002C7F60(((void *)D_003AC450) + (temp_a3 * 5), temp_a3);
        }
    }
}
