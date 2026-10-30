/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEDA0(void *, u8);
M2C_UNK func_00C75160(s64);                         /* extern */

void func_008FD320(void *arg0, s64 arg1) {
    u8 temp_s0;

    if (arg0 != NULL) {
        func_00C75160((s64) (arg1 << 0x38) >> 0x38);
        temp_s0 = arg1 & 0xFF;
        func_001EEDA0(M2C_FIELD(arg0, void **, 0x1C), temp_s0);
        func_001EEDA0(M2C_FIELD(arg0, void **, 0x18), temp_s0);
    }
}
