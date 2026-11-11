/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_00C13A10(u32);
extern int func_0084FBE0(void);

void func_00C5A170(void) {
    if (func_002DCA30() != 0) {
        if (func_0084FBE0() == 1) {
            func_00C13A10(0x5000U);
            return;
        }
    }
    return;
}
