/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A33B0(int);
extern void func_00272800(void);
extern void func_001A4800(int);
s32 func_00901860(void) {
    func_001A33B0(0);
    func_00272800();
    func_001A4800(6);
    return 1;
}
