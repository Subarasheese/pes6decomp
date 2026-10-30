/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
void *func_009812C0();                              /* extern */

s32 func_00980590(s32 arg0) {
    s32 var_v0_2;
    void *var_v0;
    void *var_v0_3;

    if (arg0 >= 0) {
        if (func_0082C2A0() == 0) {
            var_v0 = NULL;
        } else {
            var_v0 = func_009812C0();
        }
        if (var_v0 != NULL) {
            var_v0_2 = M2C_FIELD(var_v0, s32 *, 0x141E4);
        } else {
            var_v0_2 = 0;
        }
        if (arg0 >= var_v0_2) {
            return -1;
        }
        if (func_0082C2A0() == 0) {
            var_v0_3 = NULL;
        } else {
            var_v0_3 = func_009812C0();
        }
        if (var_v0_3 != NULL) {
            return arg0;
        }
        goto block_17;
    }
block_17:
    return -1;
}
