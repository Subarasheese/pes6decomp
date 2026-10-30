/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B361F0(M2C_UNK);                     /* extern */
M2C_UNK func_00B36350();                            /* extern */
extern void *D_003EAE50;

void func_00B364D0(void) {
    if (D_003EAE50 != NULL) {
        M2C_FIELD(D_003EAE50, s32 *, 4) = 1;
        func_00B361F0(1);
        func_00B36350();
    }
}
