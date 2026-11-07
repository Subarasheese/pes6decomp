/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009B45F0();                                /* extern */
s32 func_00BD9E70();                                /* extern */
extern char D_00591F12[];
extern char func_00303F90[];

s32 func_003042A0(void *arg0) {
    if ((*(u8 *)D_00591F12) != 0) {
        return 0;
    }
    if (func_009B45F0() != 0) {
        return 0;
    }
    if (func_00BD9E70() != 0) {
        M2C_FIELD(arg0, char **, 0x58) = func_00303F90;
        return 1;
    }
    return 0;
}
