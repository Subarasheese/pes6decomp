/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, s32, s32);            /* extern */
extern s32 D_003E74CC;

void func_009D4BA0(void *arg0) {
    s32 temp_f0;
    s32 var_a1;
    u16 temp_a1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_a1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_a1) {                              /* irregular */
    case 0x19E:
        var_a1 = 0xF2;
block_49:
        temp_f0 = (s32) (M2C_FIELD(temp_a0, f32 *, 0x38) - (f32) (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 8) * 2));
        if (M2C_FIELD((((var_a1 & 0xFFFF) * 4) + D_003E74CC), s32 *, 0x2FD8) >= temp_f0) {
            func_00209A00(temp_a0, var_a1, temp_f0 & 0xFFFF);
        }
        func_00207390(M2C_FIELD(arg0, void **, 4), 2);
        return;
    case 0x191:
        var_a1 = 0x196;
        goto block_49;
    case 0x17B:
        var_a1 = 0x171;
        goto block_49;
    case 0x1A:
        var_a1 = 0x194;
        goto block_49;
    case 0x1DD:
        var_a1 = 0x1B;
        goto block_49;
    case 0xB:
        var_a1 = 0x10;
        goto block_49;
    case 0x3CA:
        var_a1 = 0x3DE;
        goto block_49;
    case 0x3CC:
        var_a1 = 0x3E0;
        goto block_49;
    case 0x3D0:
        var_a1 = 0x3E4;
        goto block_49;
    case 0x3C6:
        var_a1 = 0x25C;
        goto block_49;
    case 0x3C4:
        var_a1 = 0x3D9;
        goto block_49;
    case 0x3CE:
        var_a1 = 0x3E2;
        goto block_49;
    case 0x3CD:
        var_a1 = 0x3E1;
        goto block_49;
    case 0x3D1:
        var_a1 = 0x3E5;
        goto block_49;
    case 0x3C7:
        var_a1 = 0x3DB;
        goto block_49;
    case 0x3C8:
        var_a1 = 0x3DC;
        goto block_49;
    }
}
