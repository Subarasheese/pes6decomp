/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_00182730(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (0.2f * -fparg0);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (0.2f * fparg1);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (0.2f * fparg2);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0x3F800000;
}
