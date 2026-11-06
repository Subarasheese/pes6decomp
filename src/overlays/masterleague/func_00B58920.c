/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00B54300();                                /* extern */

s32 func_00B58920(void) {
    if (func_00B54300() == 7) {
        return 1;
    }
    if (func_00B54300() == 0xF) {
        return 1;
    }
    return func_00B54300() == 0x1B;
}
