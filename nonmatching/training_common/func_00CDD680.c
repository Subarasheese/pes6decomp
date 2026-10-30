/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00CECE30(void);
extern s32 func_001B8DC0(void);
M2C_UNK func_00CE9B90();                            /* extern */

s32 func_00CDD680(void) {
    if (func_001B8DC0() == 0) {
        return 0;
    }
    func_00CE9B90();
    func_00CECE30();
    return 1;
}
