/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

void *func_0093E330(s32 arg0, s32 arg1) {
    u32 *var_a1;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_a1 = M2C_FIELD(temp_v0, u32 **, 0x4BB4);
    } else {
        var_a1 = NULL;
    }
    if (var_a1 != NULL) {
        if ((u32) *var_a1 < 0x15U) {
            temp_v1 = (arg1 * 0x38) + ((arg0 * 0x168) + var_a1);
            if (M2C_FIELD(temp_v1, s32 *, 0xEC) == 0) {
                return NULL;
            }
            return temp_v1 + 0xF0;
        }
        return NULL;
    }
    return NULL;
}
