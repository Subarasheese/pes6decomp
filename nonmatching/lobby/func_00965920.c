/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00841140();                              /* extern */
s32 func_0094BC80(s8, s8, s8, s8, s8, void *, void *); /* extern */

s32 func_00965920(void) {
    void *temp_v0;

    temp_v0 = func_00841140();
    if (temp_v0 != NULL) {
        return func_0094BC80(M2C_FIELD(temp_v0, s8 *, 0x8D6), M2C_FIELD(temp_v0, s8 *, 0x8D7), M2C_FIELD(temp_v0, s8 *, 0x87F), M2C_FIELD(temp_v0, s8 *, 0x880), M2C_FIELD(temp_v0, s8 *, 0x8EA), temp_v0 + 0x8F4, temp_v0 + 0x8F9);
    }
    return 0;
}
