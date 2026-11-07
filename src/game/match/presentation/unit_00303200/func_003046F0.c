/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_009E1C90(M2C_UNK);                         /* extern */

s32 func_003046F0(void) {
    if (((func_009E1C90(1) & 0xFF) == 5) && ((func_009E1C90(2) & 0xFF) < 5)) {
        return 1;
    }
    return 0;
}
