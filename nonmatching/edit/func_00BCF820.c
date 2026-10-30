/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4D60(s32, s32, s32);
extern s32 D_003EAFC0;

void func_00BCF820(s32 arg0, s32 arg1) {
    if (D_003EAFC0 != 0) {
        if (arg1 == 0) {
            return;
        }
        func_002E4D60(D_003EAFC0, arg0, arg1);
    }
}
