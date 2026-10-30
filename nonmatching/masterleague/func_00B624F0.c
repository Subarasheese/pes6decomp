/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B62800();                            /* extern */
M2C_UNK func_00B644B0();                            /* extern */
extern s32 D_003EAECC;

void func_00B624F0(void) {
    if (D_003EAECC != 0) {
        func_00B62800();
        func_00B644B0();
    }
}
