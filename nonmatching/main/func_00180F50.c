/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0051FEB0[];
extern char D_0051FEB4[];

s32 func_00180F50(s32 arg0) {
    M2C_UNK *var_v1;
    s32 var_a1;

    var_v1 = ((void *)D_0051FEB4);
    if ((*(s32 *)D_0051FEB0) != 0) {
        var_a1 = 0x10;
loop_2:
        if (M2C_FIELD(var_v1, s32 *, 0) != arg0) {
            var_a1 -= 1;
            var_v1 += 8;
            if (var_a1 == 0) {
                goto block_8;
            }
            goto loop_2;
        }
        return M2C_FIELD(var_v1, s32 *, 4);
    }
block_8:
    return 0;
}
