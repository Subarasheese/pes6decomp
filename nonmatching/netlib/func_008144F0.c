/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_00827D50();                                /* extern */
s32 func_00827F60(s32);                             /* extern */
s32 func_00828050(s32);                             /* extern */
s32 func_00828160();                                /* extern */
extern char D_008A3390[];

s32 func_008144F0(void *arg0) {
    s32 temp_s0;
    s32 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0) != 1) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_s0 != func_00828160()) {
            if (func_00828050(temp_s0) == 1) {
                if (((void *)D_008A3390) != NULL) {
                    var_v0 = 2;
                    goto block_33;
                }
            } else if (func_00827D50() != 1) {
                if (func_00827F60(M2C_FIELD(arg0, s32 *, 4)) == 1) {
                    if (((void *)D_008A3390) != NULL) {
                        var_v0 = 4;
                        goto block_33;
                    }
                } else if (((void *)D_008A3390) != NULL) {
                    var_v0 = 6;
                    goto block_33;
                }
            } else if (((void *)D_008A3390) != NULL) {
                var_v0 = 3;
block_33:
                M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = var_v0;
            }
            goto block_34;
        }
        if (((void *)D_008A3390) != NULL) {
            M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = 0x11;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
            return 1;
        }
        goto block_34;
    }
    if (((void *)D_008A3390) != NULL) {
        M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = 0x11;
    }
    if (func_00818740() == 1) {
        func_008187D0();
    }
    if (func_00817B70() == 1) {
        func_00817C00();
        return 1;
    }
block_34:
    return 1;
}
