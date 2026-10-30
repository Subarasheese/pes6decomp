/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
void func_002E3660(void *arg0, u8 arg1) {
    s8 temp_s0;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 0x12) = arg1;
        temp_s0 = M2C_FIELD(arg0, u8 *, 0x10) & M2C_FIELD(arg0, u8 *, 0x11) & 0xFF;
        func_001EF900(M2C_FIELD(arg0, void **, 4), temp_s0);
        func_001EF900(M2C_FIELD(arg0, void **, 8), temp_s0 & 0xFF & M2C_FIELD(arg0, u8 *, 0x12) & 0xFF);
    }
}
