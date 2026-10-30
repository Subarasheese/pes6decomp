/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B46DC0();                            /* extern */
M2C_UNK func_00B49E30();                            /* extern */
extern void *D_003EAE74;

void func_00B495A0(void) {
    if (D_003EAE74 != NULL) {
        M2C_FIELD(D_003EAE74, s8 *, 0x5C4) = 1;
        func_00B49E30();
        func_00B46DC0();
    }
}
