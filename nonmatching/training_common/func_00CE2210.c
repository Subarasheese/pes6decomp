/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B8DC0(void);
extern u32 func_00CECE10(void);
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_002133E0(M2C_UNK);                     /* extern */
M2C_UNK func_00C89070();                            /* extern */
M2C_UNK func_00CE9B90();                            /* extern */
M2C_UNK func_00CECDB0();                            /* extern */

s32 func_00CE2210(void) {
    if (func_001B8DC0() == 0) {
        return 0;
    }
    func_00CE9B90();
    func_00C89070();
    func_002133E0(0);
    func_00CECE10();
    func_001B6460(0);
    func_00CECDB0();
    return 1;
}
