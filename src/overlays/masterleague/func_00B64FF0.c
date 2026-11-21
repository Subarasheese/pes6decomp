/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s64 func_001D7980(s32);
extern void *D_003EAED0;

s64 func_00B64FF0(void) {
    if (D_003EAED0 == NULL) {
        return 0;
    }
    return (s64)(func_001D7980(M2C_FIELD(D_003EAED0, s32 *, 0x388)) << 0x38) >> 0x38;
}
