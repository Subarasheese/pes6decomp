/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082AE20();                              /* extern */

void *func_0082ADE0(void) {
    void *temp_v0;

    temp_v0 = func_0082AE20();
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, s8 *, 8) != 0) {
            return temp_v0 + 8;
        }
        return NULL;
    }
    return NULL;
}
