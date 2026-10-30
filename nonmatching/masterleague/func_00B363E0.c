/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void func_001BC350(int);
void func_00B363E0(s32 arg0) {
    func_001BC350(arg0);
    func_001BC2B0();
}
