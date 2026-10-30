/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0097A270();                            /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
extern void *D_00A68D58;

void func_00978580(void) {
    void *temp_v0;

    if (D_00A68D58 == NULL) {
        temp_v0 = func_0099C7E0(4);
        D_00A68D58 = temp_v0;
        if (temp_v0 != NULL) {
            func_0097A270();
            M2C_FIELD(D_00A68D58, s8 *, 3) = 1;
        }
    }
}
