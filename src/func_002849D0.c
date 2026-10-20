/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *D_003E7574;
extern void *D_003E7A08;

void func_002849D0(void) {
    M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
    M2C_FIELD(D_003E7A08, u8 *, 0x288) = 0xFF;
    M2C_FIELD(D_003E7A08, f32 *, 0x290) = (f32) M2C_FIELD(D_003E7574, f32 *, 0x10);
    M2C_FIELD(D_003E7A08, f32 *, 0x294) = (f32) M2C_FIELD(D_003E7574, f32 *, 0x14);
    M2C_FIELD(D_003E7A08, f32 *, 0x298) = (f32) M2C_FIELD(D_003E7574, f32 *, 0x18);
}
