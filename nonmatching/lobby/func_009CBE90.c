/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DDA8[];

void func_009CBE90(s32 arg0, s32 arg1) {
    s32 var_v1;
    void *temp_v1;

    temp_v1 = arg0 + (*(s32 *)D_00A7DDA8);
    var_v1 = M2C_FIELD(temp_v1, u8 *, 0xC) + arg1;
    if (var_v1 >= 5) {
        var_v1 = 4;
    } else if (var_v1 < 0) {
        var_v1 = 0;
    }
    M2C_FIELD(temp_v1, u8 *, 0xC) = (u8) var_v1;
}
