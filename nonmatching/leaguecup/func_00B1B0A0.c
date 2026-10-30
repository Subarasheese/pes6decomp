/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B1BFA0();                            /* extern */
M2C_UNK func_00B1C190();                            /* extern */
extern s32 D_003EAD7C;

void func_00B1B0A0(void) {
    if (D_003EAD7C != 0) {
        func_00B1C190();
        func_00B1BFA0();
    }
}
