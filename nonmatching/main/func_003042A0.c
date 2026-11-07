/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009B45F0();                                /* extern */
s32 func_00BD9E70();                                /* extern */
extern char D_00591F12[];
extern M2C_UNK func_00303F90;

s32 func_003042A0(void *arg0) {
    if ((*(u8 *)D_00591F12) != 0) {
        return 0;
    }
    if (func_009B45F0() != 0) {
        return 0;
    }
    if (func_00BD9E70() == 0) {
        return 0;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x58) = &func_00303F90;
    return 1;
}
