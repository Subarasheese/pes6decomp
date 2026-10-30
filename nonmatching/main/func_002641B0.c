/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002641B0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s64 *, 0) = (s64) M2C_FIELD(arg1, s64 *, 0x170);
    M2C_FIELD(arg0, s64 *, 8) = (s64) M2C_FIELD(arg1, s64 *, 0x178);
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) M2C_FIELD(arg1, s64 *, 0x180);
    M2C_FIELD(arg0, s64 *, 0x18) = (s64) M2C_FIELD(arg1, s64 *, 0x188);
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) M2C_FIELD(arg1, s64 *, 0x190);
    M2C_FIELD(arg0, s64 *, 0x28) = (s64) M2C_FIELD(arg1, s64 *, 0x198);
    M2C_FIELD(arg0, s64 *, 0x30) = (s64) M2C_FIELD(arg1, s64 *, 0x1A0);
    M2C_FIELD(arg0, s64 *, 0x38) = (s64) M2C_FIELD(arg1, s64 *, 0x1A8);
}
