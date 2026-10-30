/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7960(s32);                         /* extern */
extern s32 D_003E7E38;

void func_00CEC510(void) {
    if (D_003E7E38 != 0x2B) {
        func_00CD7960(D_003E7E38);
        D_003E7E38 = 0x2B;
    }
}
