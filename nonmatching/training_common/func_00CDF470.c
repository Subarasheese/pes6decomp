/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B8DC0(void);
M2C_UNK func_00CE41E0();                            /* extern */
M2C_UNK func_00CE9B90();                            /* extern */
M2C_UNK func_00CEC960(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00CECDB0();                            /* extern */

s32 func_00CDF470(void) {
    if (func_001B8DC0() == 0) {
        return 0;
    }
    func_00CECDB0();
    func_00CE9B90();
    func_00CE41E0();
    func_00CEC960(0, 0);
    return 1;
}
