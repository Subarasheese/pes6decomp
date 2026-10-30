/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B657B0();                            /* extern */
M2C_UNK func_00B66B50();                            /* extern */
extern s32 D_003EAED0;

void func_00B651F0(void) {
    if (D_003EAED0 != 0) {
        func_00B657B0();
        func_00B66B50();
    }
}
