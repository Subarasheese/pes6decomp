/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003DF3A0[];

void func_0093DB60(s32 arg0, s16 *arg1) {
    s16 *var_a1;
    s16 var_a3;
    s32 temp_a0;
    s32 var_a4;
    u16 temp_a0_2;

    var_a1 = arg1;
    temp_a0 = arg0 & 0xFF;
    var_a4 = 3;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        var_a4 = 5;
    case 3:                                         /* switch 1 */
    case 1:                                         /* switch 2 */
block_13:
        var_a3 = 0;
        do {
            temp_a0_2 = M2C_FIELD((((void *)D_003DF3A0) + ((var_a3 & 0xFFFF) * 0x10)), u16 *, 0xE);
            if ((var_a4 == (((s32) temp_a0_2 >> 0xC) & 0xF)) && !(temp_a0_2 & 2) && !(temp_a0_2 & 4)) {
                if (var_a1 != NULL) {
                    *var_a1 = var_a3;
                    var_a1 += 2;
                }
            }
            var_a3 = (var_a3 + 1) & 0xFFFF;
        } while (var_a3 < 0x128);
        return;
    default:                                        /* switch 1 */
        var_a4 = 1;
        switch (temp_a0) {                          /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            var_a4 = 2;
            goto block_13;
        case 0:                                     /* switch 2 */
            var_a4 = 2;
            goto block_13;
        }
        break;
    }
}
