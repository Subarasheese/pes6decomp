/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00271DB0(void);
M2C_UNK func_0099DCB0();                            /* extern */
s32 func_009A2D10();                                /* extern */
M2C_UNK func_009A2F50();                            /* extern */
s32 func_009A3520();                                /* extern */
M2C_UNK func_00B25BD0();                            /* extern */

void func_00271E40(void) {
    func_0099DCB0();
    if (func_009A3520() != 0) {
        if (func_009A2D10() == 0) {
            func_00B25BD0();
            goto block_3;
        }
        return;
    }
    func_00271DB0();
block_3:
    func_009A2F50();
}
