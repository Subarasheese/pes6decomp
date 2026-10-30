/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern u32 func_00B2FBB0(void);
void func_00B2FB80(void) {
    if (func_00B2FBB0() != 0) {
        func_001BC300();
    }
}
