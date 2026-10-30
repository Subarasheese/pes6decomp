/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D13190(void *arg0, s32 arg1) {
    void *var_v1;

    if (arg0 != NULL) {
        if (arg1 != 0) {
            var_v1 = M2C_FIELD(arg0, void **, 0x164);
loop_10:
            if ((var_v1 == NULL) || (var_v1 == (arg0 + 0x168))) {
                goto block_12;
            }
            if (var_v1 != arg1) {
                var_v1 = M2C_FIELD(var_v1, void **, 0x154);
                goto loop_10;
            }
            return 0;
        }
        return 1;
    }
block_12:
    return 1;
}
