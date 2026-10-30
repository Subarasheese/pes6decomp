/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_009488F0(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x180) != 0) {
            return arg0 + 0x180;
        }
        return NULL;
    }
    return NULL;
}
