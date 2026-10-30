/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F2770(void *, f32);
void func_00AEDE10(void *arg0, f32 fparg0) {
    if (arg0 != NULL) {
        func_001F2770(M2C_FIELD(arg0, void **, 8), fparg0);
    }
}
