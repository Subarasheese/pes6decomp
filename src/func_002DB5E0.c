/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F3C80(s32);                         /* extern */

void func_002DB5E0(void *arg0) {
    if (arg0 != NULL) {
        func_001F3C80(M2C_FIELD(arg0, s32 *, 0x38));
    }
}
