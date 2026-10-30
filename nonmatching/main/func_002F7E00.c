/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223A70(void);
void func_002F7E00(s32 arg0, s32 arg1, s8 arg2) {
    s32 var_v1;
    s8 *var_v1_2;

    if (arg0 < 9) {
        var_v1 = func_00223A70() + (arg0 * 0x5C);
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        if (arg1 >= 9) {
            var_v1_2 = NULL;
        } else {
            var_v1_2 = var_v1 + arg1 + 0x48;
        }
    } else {
        var_v1_2 = NULL;
    }
    if (var_v1_2 != NULL) {
        *var_v1_2 = arg2;
    }
}
