/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B598A0();                            /* extern */
M2C_UNK func_00B5AC40();                            /* extern */
extern void *D_003EAEB4;

void func_00B595A0(void) {
    if (D_003EAEB4 != NULL) {
        M2C_FIELD(D_003EAEB4, s32 *, 0x70) = 0;
        func_00B598A0();
        func_00B5AC40();
    }
}
