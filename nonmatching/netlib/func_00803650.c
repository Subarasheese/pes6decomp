/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00818740(void);
extern s32 func_00817B80(void);
extern s32 func_00818750(void);
extern s32 func_00817B70(void);
s32 func_0083C270(M2C_UNK);                         /* extern */
extern char D_0088A930[];

s32 func_00803650(s8 *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 == 1) {
        if (((void *)D_0088A930) != NULL) {
            M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0x12;
        }
        if (func_00818740() == 1) {
            func_00818750();
        }
        if (func_00817B70() == 1) {
            func_00817B80();
            return 1;
        }
        goto block_22;
    }
    temp_v0 = func_0083C270(1);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 4:
        if (((void *)D_0088A930) != NULL) {
            M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0xA;
        }
        break;
    default:
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
        break;
    }
block_22:
    return 1;
}
