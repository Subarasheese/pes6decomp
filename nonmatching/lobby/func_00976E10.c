/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_009B67F0(void *);
s32 func_00976E10(void *arg0) {
    void *temp_v0;

    temp_v0 = func_009B67F0(arg0 + 0x10);
    if (temp_v0 != NULL) {
        M2C_FIELD(arg0, void **, 0x54) = temp_v0;
        return 1;
    }
    return 0;
}
