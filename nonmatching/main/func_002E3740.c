/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EEE60(s32);                         /* extern */

void func_002E3740(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg1 == 0) {
            return;
        }
        func_001EEE60(M2C_FIELD(arg0, s32 *, 4));
    }
}
