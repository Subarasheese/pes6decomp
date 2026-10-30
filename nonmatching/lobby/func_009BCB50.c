/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_009BCB50(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) == 1) {
            if (M2C_FIELD(arg0, s8 *, 0x148) != 0) {
                return arg0 + 0x148;
            }
            return NULL;
        }
        return NULL;
    }
    return NULL;
}
