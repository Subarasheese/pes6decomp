/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
s32 func_00CE4310();                                /* extern */
extern s32 *D_003E7E1C;

void func_00CE99C0(void) {
    if (func_00CE4310() != 0) {
        *D_003E7E1C = 2;
        func_00CD7A00(4);
    }
}
