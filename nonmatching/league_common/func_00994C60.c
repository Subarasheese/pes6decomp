/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void *func_00994C60(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 == NULL) {
        return NULL;
    }
    if (arg0 < 0) {
        return NULL;
    }
    if (arg0 >= 0x49) {
        return NULL;
    }
    if (arg1 < 0) {
        return NULL;
    }
    if (arg1 < 0x26) {
        return temp_v0 + (arg0 * 0x250) + (arg1 * 0x10);
    }
    return NULL;
}
