/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081D200(M2C_UNK);                     /* extern */
s32 func_008214E0();                                /* extern */
s32 func_0082B810();                                /* extern */
M2C_UNK func_0099C6D0(M2C_UNK);                     /* extern */
s32 func_009CCF30(s32);                             /* extern */

void func_009CD1F0(void) {
    s32 temp_v0;

    temp_v0 = func_0082B810();
    if (((temp_v0 == 0) || (func_008214E0() != 0)) && (func_009CCF30(temp_v0) != 0)) {
        func_0099C6D0(0);
        func_0081D200(0);
    }
}
