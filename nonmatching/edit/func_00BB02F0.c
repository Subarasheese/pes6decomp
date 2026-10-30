/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BA3A00();                                /* extern */
s32 func_00BA5B20();                                /* extern */
s32 func_00BA6A40(void *, s32);                     /* extern */

void func_00BB02F0(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v0;
    s8 var_v1;

    if (func_00BA3A00() == 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0);
    } else {
        var_v0 = func_00BA5B20();
    }
    temp_v0 = func_00BA6A40(arg0, var_v0);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        var_v1 = 5;
        M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
block_21:
        M2C_FIELD(arg0, s8 *, 4) = var_v1;
        return;
    case 1:                                         /* switch 1 */
        var_v1 = 8;
        M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
        goto block_21;
    case 2:                                         /* switch 1 */
        if (func_00BA3A00() == 0) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
            switch (temp_a0) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                goto block_17;
            case 1:                                 /* switch 2 */
                var_v1 = 3;
                M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
                goto block_21;
            }
        } else {
block_17:
            var_v1 = 1;
            M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
            goto block_21;
        }
        break;
    }
}
