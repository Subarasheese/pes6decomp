/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern f32 *D_003E74CC;

void func_00299FB0(void *arg0, s16 arg1, s32 arg2) {
    M2C_FIELD(arg0, s16 *, 0x10) = arg1;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) arg2;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) *D_003E74CC;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
}
