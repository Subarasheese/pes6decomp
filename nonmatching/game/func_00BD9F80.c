/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char D_005926FD[];
extern char D_005926FF[];

s32 func_00BD9F80(void) {
    s32 var_a0;

    if ((func_009E1C90(0) & 0xFF) == 4) {
        if (((func_009E1C90(1) & 0xFF) == 0xE) && (var_a0 = 1, ((*(u8 *)D_005926FD) == 1)) && ((*(u8 *)D_005926FF) == 3)) {

        } else {
            goto block_3;
        }
    } else {
block_3:
        var_a0 = 0;
    }
    if (var_a0 == 1) {
        if ((func_009E1C90(2) & 0xFF) == 0x10) {
            return 1;
        }
        goto block_7;
    }
block_7:
    return 0;
}
