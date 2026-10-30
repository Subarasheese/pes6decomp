/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00817B70();                                /* extern */
M2C_UNK func_00817B80();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_00818750();                            /* extern */
M2C_UNK func_00828C50();                            /* extern */
s32 func_00828C70(s32);                             /* extern */
extern char D_0088A930[];

s32 func_00803790(void *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0) != 1) {
        temp_v0 = func_00828C70(M2C_FIELD(arg0, s32 *, 4));
        switch (temp_v0) {                          /* irregular */
        case 0:
            break;
        default:
        case 3:
        case 2:
        case 1:
            if (((void *)D_0088A930) != NULL) {
                M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0x11;
            }
            if (func_00818740() == 1) {
                func_00818750();
            }
            if (func_00817B70() == 1) {
                func_00817B80();
            }
            func_00828C50();
            break;
        case 4:
            if (((void *)D_0088A930) != NULL) {
                M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 9;
            }
            if (func_00818740() == 1) {
                func_00818750();
            }
            if (func_00817B70() == 1) {
                func_00817B80();
            }
            func_00828C50();
            break;
        }
    } else {
        if (((void *)D_0088A930) != NULL) {
            M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0x12;
        }
        if (func_00818740() == 1) {
            func_00818750();
        }
        if (func_00817B70() == 1) {
            func_00817B80();
        }
        func_00828C50();
    }
    return 1;
}
