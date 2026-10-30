/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B787B0();                            /* extern */
M2C_UNK func_00B789F0();                            /* extern */
extern s32 D_003EAF14;

void func_00B77C60(void) {
    if (D_003EAF14 != 0) {
        func_00B789F0();
        func_00B787B0();
    }
}
