/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */

void func_00AFA810(void *arg0) {
    if (arg0 != NULL) {
        func_001C48E8(0, 0x10);
        M2C_FIELD(arg0, s16 *, 4) = 0;
    }
}
