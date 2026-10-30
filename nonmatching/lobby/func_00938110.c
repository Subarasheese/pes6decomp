/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_00942ED0(s32);                             /* extern */
extern char D_00A43380[];

s32 func_00938110(void *arg0) {
    s32 temp_v0;
    s32 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0) != 1) {
        temp_v0 = func_00942ED0(M2C_FIELD(arg0, s32 *, 4));
        switch (temp_v0) {                          /* irregular */
        case 0:
            break;
        case 4:
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            if (((void *)D_00A43380) != NULL) {
                var_v0 = 5;
block_34:
                M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = var_v0;
            }
            break;
        case 1:
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            if (((void *)D_00A43380) != NULL) {
                var_v0 = 0xF;
                goto block_34;
            }
            break;
        default:
        case 2:
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            if (((void *)D_00A43380) != NULL) {
                var_v0 = 0xF;
                goto block_34;
            }
            break;
        }
        goto block_35;
    }
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
    if (((void *)D_00A43380) != NULL) {
        M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xF;
    }
    if (func_00818740() == 1) {
        func_008187D0();
    }
    if (func_00817B70() == 1) {
        func_00817C00();
        return 1;
    }
block_35:
    return 1;
}
