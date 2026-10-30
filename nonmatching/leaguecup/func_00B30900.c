/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B2F620();                            /* extern */
M2C_UNK func_00B2FE50();                            /* extern */
extern s32 D_003EAD9C;

void func_00B30900(void) {
    if (D_003EAD9C != 0) {
        func_00B2F620();
        func_00B2FE50();
    }
}
