/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AEDD20();                            /* extern */
M2C_UNK func_00AEE4D0();                            /* extern */
extern s32 D_003EAD40;

void func_00AEE6A0(void) {
    if (D_003EAD40 != 0) {
        func_00AEDD20();
        func_00AEE4D0();
    }
}
