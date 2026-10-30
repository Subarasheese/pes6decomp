/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern s32 func_001D6D30(s32, s32);
extern s32 func_001D6E70(s32, s32, s32);
void func_008C13D0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        func_001D6E70(arg0, arg1, arg2);
        return;
    }
    func_001D6E70(arg0, arg1, func_001F08B0(func_001D6D30(arg0, arg1)));
}
