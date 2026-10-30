/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0011DE30(void *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x380);
    if (temp_a0 != NULL) {
        if (arg1 < M2C_FIELD(temp_a0, s32 *, 0x58)) {
            return temp_a0 + M2C_FIELD((temp_a0 + (arg1 * 4)), s32 *, 0x5C);
        }
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}
