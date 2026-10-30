/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern s32 func_001F08B0(s32);
void func_0063ACE0(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = func_001F08B0(arg1);
    if ((arg0 != NULL) && (temp_a1 != 0)) {
        func_001DF820(M2C_FIELD(arg0, void **, 0xC), temp_a1);
    }
}
