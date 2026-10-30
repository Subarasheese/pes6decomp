/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7B0C;

void func_00961000(void) {
    u16 temp_a0;

    M2C_FIELD(D_003E7B0C, u8 *, 0x2E) = (u8) M2C_FIELD(D_003E7B0C, u8 *, 0x26);
    temp_a0 = M2C_FIELD(D_003E7B0C, u16 *, 0x30);
    M2C_FIELD(D_003E7B0C, u16 *, 0x30) = (u16) M2C_FIELD(D_003E7B0C, u16 *, 0x32);
    M2C_FIELD(D_003E7B0C, u16 *, 0x32) = temp_a0;
}
