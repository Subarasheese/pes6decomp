/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00530C54[];

void func_006241C0(s32 arg0, s8 arg1) {
    s32 temp_a2;
    s32 var_v1;
    s8 *var_a3;

    temp_a2 = arg0 & 0xFFFF;
    var_a3 = NULL;
    var_v1 = 0;
    if (temp_a2 < 0x1388) {
        var_v1 = (*(s32 *)D_00530C54) + (temp_a2 * 0x7C);
    }
    if (var_v1 != 0) {
        var_a3 = var_v1 + 0x32;
    }
    if (var_a3 != NULL) {
        *var_a3 = arg1;
    }
}
