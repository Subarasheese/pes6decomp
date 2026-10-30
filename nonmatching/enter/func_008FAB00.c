/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00333440(int, int, int);
extern void func_00338930(int);
s32 func_008FAB00(s32 arg0) {
    func_00333440(0x76, 0, 1);
    func_00338930(arg0);
    return 1;
}
