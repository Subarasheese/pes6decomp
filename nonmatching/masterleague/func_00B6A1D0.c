/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B6A3F0();                            /* extern */
M2C_UNK func_00B6CDE0();                            /* extern */
extern void *D_003EAEE8;

void func_00B6A1D0(void) {
    if (D_003EAEE8 != NULL) {
        M2C_FIELD(D_003EAEE8, s8 *, 0x377C) = 0;
        func_00B6A3F0();
        func_00B6CDE0();
    }
}
