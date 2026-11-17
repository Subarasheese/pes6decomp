/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern f32 *D_003E74CC;

void func_002075B0(void *arg0, u16 arg1, u32 arg2, u8 arg3) {
    f32 inv;
    u32 q;
    void *a1;

    a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10);
    M2C_FIELD(arg0, u8 *, 0x4D) = 1;
    M2C_FIELD(arg0, u8 *, 0x4E) = 1;
    if (M2C_FIELD(arg0, u8 *, 0x5C) == 0) {
        M2C_FIELD(arg0, u8 *, 0x5C) = 1;
        M2C_FIELD(a1, s8 *, 9) = M2C_FIELD(a1, s8 *, 9) ^ 1;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = *D_003E74CC;
    M2C_FIELD(arg0, u16 *, 0x3C) = M2C_FIELD(arg0, u16 *, 0x52);
    M2C_FIELD(arg0, f32 *, 0x40) = M2C_FIELD(arg0, f32 *, 0x54);
    M2C_FIELD(arg0, u16 *, 0x44) = M2C_FIELD(arg0, u16 *, 0x58);
    M2C_FIELD(arg0, u8 *, 0x46) = M2C_FIELD(arg0, u8 *, 0x5A);
    M2C_FIELD(arg0, u32 *, 4) = func_00208310(arg1);
    M2C_FIELD(arg0, u16 *, 0x30) = arg1;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) arg2;
    M2C_FIELD(arg0, u16 *, 0x34) = 0;
    q = (u32) arg3 / (u32) (s32) *D_003E74CC;
    q &= 0xFF;
    if (M2C_FIELD(arg0, u8 *, 0x4C) < (s32) q) {
        M2C_FIELD(arg0, u8 *, 0x4C) = q;
    }
    M2C_FIELD(arg0, f32 *, 0x48) = 1.0f / (f32) (u32) M2C_FIELD(arg0, u8 *, 0x4C);
    inv = 1.0f / (f32) (u32) M2C_FIELD(arg0, u8 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x48) = M2C_FIELD(arg0, f32 *, 0x48) + inv / 10.0f;
    M2C_FIELD(arg0, u8 *, 0x51) = 1;
    M2C_FIELD(arg0, u8 *, 0x4F) = 0;
}
