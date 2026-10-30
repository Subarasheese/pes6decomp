/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC8BC0();                                /* extern */
s32 func_00C137D0(s32);                             /* extern */
extern char D_00CCB9D0[];

s32 func_00C59F70(s32 arg0) {
    s32 temp_a0;
    s32 temp_s2;
    s32 var_s1;

    temp_s2 = arg0 & 0xFF;
    var_s1 = -1;
    if (temp_s2 < (func_00BC8BC0() & 0xFF)) {
        temp_a0 = M2C_FIELD(((temp_s2 * 0xC) + ((void *)D_00CCB9D0)), s32 *, 4);
        if (temp_a0 >= 0) {
            var_s1 = func_00C137D0(temp_a0);
        }
    }
    return var_s1;
}
