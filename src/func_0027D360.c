/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00284EA0(M2C_UNK);
extern void *D_003E7574;

void func_0027D360(f32 first, f32 second) {
    M2C_FIELD(D_003E7574, f32 *, 0x10) = first;
    M2C_FIELD(D_003E7574, s32 *, 0x14) = 0xC1E00000;
    M2C_FIELD(D_003E7574, f32 *, 0x18) = second;
    M2C_FIELD(D_003E7574, s32 *, 0x2C) = 0;
    M2C_FIELD(D_003E7574, s32 *, 0x30) = 0;
    M2C_FIELD(D_003E7574, s32 *, 0x34) = 0;
    M2C_FIELD(D_003E7574, s32 *, 0x50) = 0;
    M2C_FIELD(D_003E7574, s32 *, 0x74) = 0;
    M2C_FIELD(D_003E7574, s16 *, 0x6A) = 0;
    M2C_FIELD(D_003E7574, s8 *, 0x62) = 0;
    func_00284EA0(0x64);
}
