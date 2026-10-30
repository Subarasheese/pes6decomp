/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7A08;

s32 func_00991470(s32 arg0) {
    s32 temp_v1;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_v0;
    void *var_a2;

    var_a4 = 0;
    switch (arg0) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_a3 = 6;
        break;
    default:                                        /* switch 1 */
    case 1:                                         /* switch 1 */
        var_a4 = 0xA;
        var_a3 = 0xC;
        break;
    }
    var_a2 = D_003E7A08;
    var_v0 = 0xFF;
    var_a6 = 0;
    var_a5 = 0;
loop_6:
    temp_v1 = M2C_FIELD(var_a2, s32 *, 4);
    switch (temp_v1) {                              /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        if (M2C_FIELD(var_a2, u8 *, 0x25) == var_a3) {
block_16:
            var_v0 = var_a6;
        case 0:                                     /* switch 2 */
            return var_v0;
        }
    default:                                        /* switch 2 */
block_13:
        var_a5 += 1;
        var_a6 += 1;
        var_a2 += 0x40;
        if (var_a5 >= 0xA) {
            return 0xFF;
        }
        goto loop_6;
    case 3:                                         /* switch 2 */
        if (M2C_FIELD(var_a2, s32 *, 0x24) == var_a4) {
            goto block_16;
        }
        goto block_13;
    }
}
