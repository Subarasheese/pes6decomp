/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0013B660();                                /* extern */
s32 func_001BE7C0();                                /* extern */
s32 func_001BE800();                                /* extern */
s32 func_001BE920();                                /* extern */

s32 func_001BE450(void) {
    if (func_001BE920() == 0) {
        return 1;
    }
    if (func_001BE800() == 1) {
        return 0;
    }
    if ((func_001BE7C0() == 1) && (func_0013B660() != 0)) {
        return 1;
    }
    return 2;
}
