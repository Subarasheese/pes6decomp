/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00CECE10(void);
M2C_UNK func_00CE9B90();                            /* extern */
M2C_UNK func_00CECDB0();                            /* extern */

s32 func_00CDEB50(void) {
    func_00CE9B90();
    func_00CECE10();
    func_00CECDB0();
    return 1;
}
