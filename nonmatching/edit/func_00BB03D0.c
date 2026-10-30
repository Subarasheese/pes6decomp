/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
s32 func_00BA3A00();                                /* extern */
s32 func_00BB0580();                                /* extern */

void func_00BB03D0(void *arg0) {
    s32 temp_v0;
    s8 var_v1;

    temp_v0 = func_00BB0580();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_00B91440(0x1D);
        var_v1 = 7;
        M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
block_19:
        M2C_FIELD(arg0, s8 *, 4) = var_v1;
        return;
    case 0:
        func_00B91440(0x1D);
        var_v1 = 6;
        M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
        goto block_19;
    case 2:
        if (func_00BA3A00() == 0) {
            if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                var_v1 = 3;
                M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
            } else {
                var_v1 = 4;
                M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
            }
        } else {
            var_v1 = 1;
            M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
        }
        goto block_19;
    }
}
