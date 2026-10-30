/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009F1090(void *);                      /* extern */
extern void *D_00A68D60;

void func_00979180(s8 arg0) {
    void *temp_v0;

    if (D_00A68D60 == NULL) {
        temp_v0 = func_0099C7E0(0xC);
        D_00A68D60 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 2) = 0;
            M2C_FIELD(D_00A68D60, s8 *, 4) = arg0;
            M2C_FIELD(D_00A68D60, s8 *, 3) = 2;
            func_009F1090(D_00A68D60);
        }
    }
}
