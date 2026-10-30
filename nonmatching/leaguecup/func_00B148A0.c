/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B12DC0();                            /* extern */
M2C_UNK func_00B12ED0();                            /* extern */
extern s32 D_003EAD70;

void func_00B148A0(void) {
    if (D_003EAD70 != 0) {
        func_00B12ED0();
        func_00B12DC0();
    }
}
