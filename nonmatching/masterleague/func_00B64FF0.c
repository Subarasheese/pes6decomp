/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D7980(void *);
extern void *D_003EAED0;

s64 func_00B64FF0(void) {
    if (D_003EAED0 != NULL) {
        return (s64) (func_001D7980(M2C_FIELD(D_003EAED0, void **, 0x388)) << 0x38) >> 0x38;
    }
    return 0;
}
