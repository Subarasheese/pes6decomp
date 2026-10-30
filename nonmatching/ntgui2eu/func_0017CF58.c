/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0017CF58(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x538) == 0) {
        M2C_FIELD(arg0, s64 *, 0x930) = (s64) M2C_FIELD(arg0, s64 *, 0x940);
        M2C_FIELD(arg0, s64 *, 0x938) = (s64) M2C_FIELD(arg0, s64 *, 0x948);
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(), 0x110)();
}
