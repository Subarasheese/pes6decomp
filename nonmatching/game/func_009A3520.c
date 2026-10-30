/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B2A3B0();                                /* extern */
extern void *D_003EA710;
extern char D_00591DD6[];

s32 func_009A3520(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((*(u8 *)D_00591DD6) != 0) {
        if (M2C_FIELD(D_003EA710, s32 *, 0x24) != 0) {
            goto block_2;
        }
        if (func_00B2A3B0() != 0) {
block_2:
            var_s0 = 1;
        }
    }
    return var_s0;
}
