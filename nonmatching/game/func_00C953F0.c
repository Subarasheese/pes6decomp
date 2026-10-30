/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D4970(s32);
extern int func_0023A3E0(void);
extern int func_0023A380(void);
void func_00C953F0(void) {
    s32 var_s0;

    if (func_0023A380() != 0) {
        var_s0 = 0x58;
        if ((func_0023A3E0() & 0xFF) == 1) {
            var_s0 = 0x5C;
        }
        func_002D4970(var_s0);
    }
}
