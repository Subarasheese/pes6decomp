/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B22A90();                            /* extern */
M2C_UNK func_00B232A0();                            /* extern */
extern s32 D_003EAD90;

void func_00B23D60(void) {
    if (D_003EAD90 != 0) {
        func_00B22A90();
        func_00B232A0();
    }
}
