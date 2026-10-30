/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E4F00(s32);                         /* extern */
extern s32 D_003EAFC0;

void func_00BCF8F0(void) {
    if (D_003EAFC0 != 0) {
        func_002E4F00(D_003EAFC0);
        D_003EAFC0 = 0;
    }
}
