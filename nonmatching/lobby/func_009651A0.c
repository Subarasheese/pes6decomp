/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0094BC80(s8, s8, s8, s8, s8, void *, void *); /* extern */
void *func_009503C0();                              /* extern */

s32 func_009651A0(void) {
    void *temp_v0;

    temp_v0 = func_009503C0();
    if (temp_v0 != NULL) {
        return func_0094BC80(M2C_FIELD(temp_v0, s8 *, 0x45), M2C_FIELD(temp_v0, s8 *, 0x46), M2C_FIELD(temp_v0, s8 *, 0x48), M2C_FIELD(temp_v0, s8 *, 0x49), M2C_FIELD(temp_v0, s8 *, 0x4A), temp_v0 + 0xB0, temp_v0 + 0xB5);
    }
    return 0;
}
