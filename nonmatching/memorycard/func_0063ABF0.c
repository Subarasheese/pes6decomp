/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6C80(s32, s32);
extern void func_001DF370(void *, s32);
void func_0063ABF0(s32 arg0, s32 arg1, void *arg2) {
    func_001DF370(M2C_FIELD(arg2, void **, 0xC), func_001D6C80(arg0, arg1));
}
