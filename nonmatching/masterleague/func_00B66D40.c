/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B66E70();                            /* extern */
M2C_UNK func_00B671F0();                            /* extern */
extern s32 D_003EAEE0;

void func_00B66D40(void) {
    if (D_003EAEE0 != 0) {
        func_00B66E70();
        func_00B671F0();
    }
}
