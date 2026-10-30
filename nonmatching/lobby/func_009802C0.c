/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00980590(s32);                             /* extern */
s32 func_009812C0();                                /* extern */

void *func_009802C0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;
    void *var_v1;

    if (func_0082C2A0() == 0) {
        var_s0 = 0;
    } else {
        var_s0 = func_009812C0();
    }
    if (var_s0 != 0) {
        temp_v0 = func_00980590(arg0);
        if (temp_v0 < 0) {
            var_v1 = NULL;
        } else if (temp_v0 < 0x19) {
            var_v1 = var_s0 + (temp_v0 * 0x670) + 4;
        } else {
            var_v1 = NULL;
        }
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, u8 *, 0x259) != 0) {
            return var_v1 + 0x259;
        }
        return NULL;
    }
    return NULL;
}
