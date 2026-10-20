/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001AFD70(s32);                         /* extern */
s32 func_00208310(u16);                             /* extern */
extern f32 *D_003E74CC;

void func_00209670(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x3F800000;
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) *D_003E74CC;
    M2C_FIELD(arg0, u16 *, 0x30) = 0x1BFU;
    M2C_FIELD(arg0, s32 *, 4) = func_00208310(M2C_FIELD(arg0, u16 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    func_001AFD70(arg1);
}
