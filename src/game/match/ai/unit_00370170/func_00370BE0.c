/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s64 func_008FF830();                                /* extern */

s32 func_00370BE0(void) {
    return ((s64) (func_008FF830() << 0x38) >> 0x38) == 1;
}
