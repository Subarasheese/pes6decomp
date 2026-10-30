/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00C13280(s32);                           /* extern */
s32 func_00C595D0(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK func_00370120;

s32 func_00368980(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg1 & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 11:                                        /* switch 1 */
    case 10:                                        /* switch 1 */
    case 9:                                         /* switch 1 */
        var_v0 = 3;
block_28:
        *arg0 = var_v0;
        break;
    case 13:                                        /* switch 1 */
    case 12:                                        /* switch 1 */
        var_v0 = 2;
        goto block_28;
    case 19:                                        /* switch 1 */
    case 20:                                        /* switch 1 */
        if (func_00C595D0(arg2, &func_00370120) == -1) {
            var_v0 = 4;
        } else {
            var_v0 = 1;
        }
        goto block_28;
    default:                                        /* switch 1 */
        temp_v0 = func_00C595D0(arg2, (M2C_UNK *)0x3700D0);
        if (temp_v0 == -1) {
            var_v0 = 4;
            goto block_28;
        }
        temp_a0 = M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 3;
        switch (temp_a0) {                          /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            *arg0 = 2;
            break;
        case 2:                                     /* switch 2 */
            if (func_00C595D0(arg2, &func_00370120) == -1) {
                var_v0 = 4;
            } else {
                var_v0 = 1;
            }
            goto block_28;
        }
        break;
    }
    return 1;
}
