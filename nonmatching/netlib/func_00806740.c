/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817B70();                                /* extern */
M2C_UNK func_00817B80();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_00818750();                            /* extern */
s32 func_0093CCD0();                                /* extern */
extern char D_0088ADB0[];

s32 func_00806740(s32 arg0) {
    s32 temp_v0;

    if (arg0 == 0) {
        return 0;
    }
    temp_v0 = func_0093CCD0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        if (((void *)D_0088ADB0) != NULL) {
            M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 9;
        }
        if (func_00818740() == 1) {
            func_00818750();
        }
        if (func_00817B70() == 1) {
            func_00817B80();
        }
        break;
    default:
    case -1:
        if (((void *)D_0088ADB0) != NULL) {
            M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 9;
        }
        if (func_00818740() == 1) {
            func_00818750();
        }
        if (func_00817B70() == 1) {
            func_00817B80();
        }
        break;
    }
    return 1;
}
