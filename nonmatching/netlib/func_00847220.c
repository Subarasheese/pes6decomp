/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00857C00(s16, s16 *);                      /* extern */
extern char D_008B09E0[];

s32 func_00847220(s64 arg0) {
    s16 *var_a1;
    s32 var_a0;

    var_a1 = ((void *)D_008B09E0);
    var_a0 = 0;
loop_1:
    if (*var_a1 != ((s64) (arg0 << 0x30) >> 0x30)) {
        var_a0 += 1;
        var_a1 += 0x88;
        if (var_a0 >= 8) {
            var_a1 = NULL;
        } else {
            goto loop_1;
        }
    }
    if (var_a1 == NULL) {
        return -1;
    }
    return func_00857C00(M2C_FIELD(var_a1, s16 *, 0x78), var_a1);
}
