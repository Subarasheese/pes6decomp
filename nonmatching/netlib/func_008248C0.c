/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001CDAA0(void);
s64 func_008248C0(void) {
    return (s64) (func_001CDAA0() << 0x38) >> 0x38;
}
