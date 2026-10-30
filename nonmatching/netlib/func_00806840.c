/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817B70();                                /* extern */
M2C_UNK func_00817B80();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_00818750();                            /* extern */
s32 func_0083BFA0(M2C_UNK);                         /* extern */
extern char D_0088ADB0[];

s32 func_00806840(s8 *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 != 1) {
        temp_v0 = func_0083BFA0(0);
        switch (temp_v0) {                          /* irregular */
        case 0:
            break;
        case 4:
            if (((void *)D_0088ADB0) != NULL) {
                M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 0xE;
            }
            break;
        default:
        case 2:
        case 1:
            if (((void *)D_0088ADB0) != NULL) {
                M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 0xE;
            }
            if (func_00818740() == 1) {
                func_00818750();
            }
            if (func_00817B70() == 1) {
                func_00817B80();
            }
            break;
        }
        goto block_24;
    }
    if (((void *)D_0088ADB0) != NULL) {
        M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 0xF;
    }
    if (func_00818740() == 1) {
        func_00818750();
    }
    if (func_00817B70() == 1) {
        func_00817B80();
        return 1;
    }
block_24:
    return 1;
}
