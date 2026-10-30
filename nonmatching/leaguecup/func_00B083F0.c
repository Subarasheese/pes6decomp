/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B071C0();                            /* extern */
M2C_UNK func_00B079F0();                            /* extern */
extern s32 D_003EAD5C;

void func_00B083F0(void) {
    if (D_003EAD5C != 0) {
        func_00B071C0();
        func_00B079F0();
    }
}
