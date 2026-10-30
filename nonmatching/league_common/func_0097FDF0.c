/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern void *D_003EA970;

void func_0097FDF0(void) {
    if (D_003EA970 != NULL) {
        M2C_FIELD(D_003EA970, s32 *, 0x1008) = 1;
        func_0026E840(0x84028400);
    }
}
