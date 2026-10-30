/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00835E50();                              /* extern */

void *func_00947650(void) {
    void *temp_v0;

    temp_v0 = func_00835E50();
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, s8 *, 0x38) != 0) {
            return temp_v0 + 0x38;
        }
        return NULL;
    }
    return NULL;
}
