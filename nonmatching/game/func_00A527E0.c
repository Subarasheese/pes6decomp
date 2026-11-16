/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00209820(void *);
M2C_UNK func_0027A600(void *, s32);
s32 func_00A1B390(void *);
M2C_UNK func_00AAE520(void *, s32, M2C_UNK, M2C_UNK);
extern void *Pes6Ball_Current;
extern s32 D_00591F20[];

void func_00A527E0(void *arg0) {
    func_0027A600(arg0, 1);
    M2C_FIELD(arg0, s8 *, 0x66) = 2;
    func_00209820(M2C_FIELD(arg0, void **, 4));
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = 13465.0f * (f32) M2C_FIELD(arg0, s16 *, 0x14);
    if (!((f32) D_00591F20[0] < M2C_FIELD(arg0, f32 *, 0xE8))) {
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x145C) = 0xC6086400;
    } else {
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x145C) = 0x46086400;
    }
    func_00AAE520(arg0, M2C_FIELD(arg0, s32 *, 0x58), 0, 0);
    M2C_FIELD(arg0, f32 *, 0x6C) = M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(arg0, f32 *, 0x70) = M2C_FIELD(arg0, f32 *, 0xE8);
    if (func_00A1B390(arg0) != 0 || !(((f32) M2C_FIELD(arg0, s16 *, 0x14) * M2C_FIELD(arg0, f32 *, 0xE0)) < 13337.0f)) {
        M2C_FIELD(arg0, s8 *, 0x16) = 7;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
    }
}
