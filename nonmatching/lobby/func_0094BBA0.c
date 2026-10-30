/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

void *func_0094BBA0(void) {
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, s8 *, 0x117F4) != 0) {
            return temp_v0 + 0x117F4;
        }
        return NULL;
    }
    return NULL;
}
