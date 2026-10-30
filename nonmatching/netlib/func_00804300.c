/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817B70();                                /* extern */
M2C_UNK func_00817B80();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_00818750();                            /* extern */
s32 func_00827D50();                                /* extern */
s32 func_00827F60(s32);                             /* extern */
s32 func_00828050(s32);                             /* extern */
extern char D_0088A930[];

s32 func_00804300(void *arg0) {
    s32 var_v0;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0) != 1) {
            if (func_00828050(M2C_FIELD(arg0, s32 *, 4)) == 1) {
                if (((void *)D_0088A930) != NULL) {
                    var_v0 = 6;
                    goto block_22;
                }
            } else if (func_00827D50() != 1) {
                if (func_00827F60(M2C_FIELD(arg0, s32 *, 4)) == 1) {
                    if (((void *)D_0088A930) != NULL) {
                        var_v0 = 7;
                        goto block_22;
                    }
                } else if (((void *)D_0088A930) != NULL) {
                    var_v0 = 6;
                    goto block_22;
                }
            } else if (((void *)D_0088A930) != NULL) {
                var_v0 = 4;
block_22:
                M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = var_v0;
            }
            if (func_00818740() == 1) {
                func_00818750();
            }
            if (func_00817B70() == 1) {
                func_00817B80();
            }
            goto block_27;
        }
        if (((void *)D_0088A930) != NULL) {
            M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0x12;
            return 1;
        }
block_27:
        return 1;
    }
    return 0;
}
