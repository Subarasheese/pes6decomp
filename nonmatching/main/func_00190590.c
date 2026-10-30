/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00183D30(void *, void *, M2C_UNK);         /* extern */
extern void *D_00520228;

void func_00190590(void) {
    s32 var_s0;
    void *var_s1;

    var_s1 = D_00520228;
    if (var_s1 != NULL) {
        var_s0 = 0;
        do {
            if (M2C_FIELD(var_s1, s32 *, 0x18) != 0) {
                if (func_00183D30(var_s1, var_s1 + 0xC, 0) == 1) {
                    M2C_FIELD(var_s1, s32 *, 0x18) = 0;
                }
            }
            var_s0 += 1;
            var_s1 += 0x28;
        } while (var_s0 < 0x14);
    }
}
