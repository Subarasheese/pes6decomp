/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
s32 func_00807DF0(void *arg0) {
    func_00153FA0(M2C_FIELD(arg0, void **, 0x218));
    return 1;
}
