/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
void func_00C75040(void *arg0, s64 arg1) {
    if (arg0 != NULL) {
        func_001D7D80(arg0, (s16) ((s64) (arg1 << 0x38) >> 0x38));
    }
}
