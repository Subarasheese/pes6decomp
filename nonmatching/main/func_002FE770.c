/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0023A380(void);
extern void func_002D4BE0(int);
extern void func_00305E50(int);
s32 func_002FE770(s32 arg0) {
    if (func_0023A380() == 0) {
        func_002D4BE0(0);
        func_002D4BE0(3);
        func_00305E50(arg0);
        return 1;
    }
    return 0;
}
