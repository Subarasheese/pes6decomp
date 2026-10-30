/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F3E20(s32, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_002F3F30(s32, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_002F4030(s32, M2C_UNK, s32, s32);      /* extern */
extern char D_0065EDC0[];

void func_006561B0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_s2;
    s32 var_a0;
    s32 var_s1;

    var_s1 = arg1;
    temp_s2 = ((void *)D_0065EDC0) + (arg0 * 0xC4);
    if ((var_s1 >= 0) && (var_s1 < 2)) {
        var_a0 = 0;
    } else if ((var_s1 >= 2) && (var_s1 < 0xA)) {
        var_a0 = 1;
        var_s1 -= 2;
    } else {
        var_a0 = 2;
        var_s1 -= 0xA;
    }
    switch (var_a0) {                               /* irregular */
    case 2:
        func_002F3E20(*temp_s2, 1, var_s1, arg2);
        func_002F3E20(*temp_s2, 0, var_s1, arg2);
        return;
    case 1:
        func_002F3F30(*temp_s2, 1, var_s1, arg2);
        func_002F3F30(*temp_s2, 0, var_s1, arg2);
        return;
    case 0:
        func_002F4030(*temp_s2, 1, var_s1, arg2);
        func_002F4030(*temp_s2, 0, var_s1, arg2);
        return;
    }
}
