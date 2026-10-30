/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */
extern void *D_00A68D68;

void func_00979860(void) {
    void *temp_v0;

    if (D_00A68D68 == NULL) {
        temp_v0 = func_0099C7E0(8);
        D_00A68D68 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 3) = 0;
        }
    }
}
