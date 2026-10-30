/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F1690(void *, void *);
void func_002F5C30(void *arg0, s32 arg1, void *arg2) {
    s32 var_a0;
    s32 var_a1;
    void *temp_v0;

    var_a1 = arg1;
    if (arg0 != NULL) {
        if (arg2 == NULL) {
            return;
        }
        temp_v0 = arg0 + (((s32) (M2C_FIELD(arg0, s8 *, 5) + 1) % 2) * 8);
        var_a0 = M2C_FIELD(temp_v0, s32 *, 0xBC) - 1;
        if (var_a0 < var_a1) {

        } else {
            if (var_a1 < 0) {
                var_a1 = 0;
            }
            var_a0 = var_a1;
        }
        if (func_002F1690(M2C_FIELD(temp_v0, s32 *, 0xB8) + (var_a0 * 0x24), arg2) != 0) {
            M2C_FIELD(arg0, s8 *, 1) = 1;
        }
    }
}
