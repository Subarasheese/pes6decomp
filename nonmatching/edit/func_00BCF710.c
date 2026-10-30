/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E4A30(s32, s32);                    /* extern */
extern s32 D_003EAFC0;

void func_00BCF710(s32 arg0) {
    if (D_003EAFC0 != 0) {
        func_002E4A30(D_003EAFC0, arg0);
    }
}
