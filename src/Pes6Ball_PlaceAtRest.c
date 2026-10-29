/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00284EA0(M2C_UNK);
extern void *Pes6Ball_Current;

void Pes6Ball_PlaceAtRest(f32 x, f32 z) {
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) = x;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x14) = 0xC1E00000;
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x18) = z;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x2C) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x30) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x34) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = 0;
    M2C_FIELD(Pes6Ball_Current, s16 *, 0x6A) = 0;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 0;
    func_00284EA0(0x64);
}
