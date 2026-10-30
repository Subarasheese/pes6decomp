/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0027D0B0(void *, M2C_UNK);             /* extern */
s32 func_009B32D0(s32, s32, M2C_UNK);               /* extern */
s32 func_009B34C0(f32, f32, f32, f32);              /* extern */
s32 func_00AA3540();                                /* extern */
s32 func_00BBB7F0(s32);                             /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];

s32 func_00A5ED90(void *arg0, s32 arg1) {
    s32 temp_f0;
    s32 temp_f1;
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_v0;

    if ((func_00AA3540() >= 0x10000) && (M2C_FIELD(arg0, u8 *, 0x25) == 0)) {
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    switch (temp_v0) {                              /* irregular */
    case 0x83:
    case 0x78:
    case 0x77:
        if (var_v1 == 0) {
            var_v0_2 = 0x1000;
        } else {
            var_v0_2 = 0x2000;
        }
        break;
    case 0x94:
        if (var_v1 == 0) {
            var_v0_2 = 0x1000;
        } else {
            var_v0_2 = 0x2000;
        }
        break;
    case 0x92:
        if (var_v1 != 0) {
            if (!(((*(f32 *)D_00591E70) - 16.0f) < M2C_FIELD(Pes6Ball_Current, f32 *, 0))) {
                var_v0_2 = 0x1000;
            } else {
                var_v0_2 = 0x2000;
            }
        } else if (!(((*(f32 *)D_00591E70) - 16.0f) < M2C_FIELD(Pes6Ball_Current, f32 *, 0))) {
            var_v0_2 = 0x1000;
        } else {
            var_v0_2 = 0x2000;
        }
        break;
    case 0x23C:
    case 0xAC:
    case 0xAB:
    case 0xA9:
    case 0xAF:
    case 0xAE:
    case 0xAD:
    case 0x2FF:
    case 0xA7:
    case 0xA5:
    case 0xA4:
    case 0x9F:
    case 0x9E:
    case 0x9D:
    case 0xA2:
    case 0xA1:
    case 0xA0:
    case 0xB2:
    case 0xB1:
    case 0xB0:
        if (var_v1 == 0) {
            var_v0_2 = 0x400;
        } else {
block_53:
            var_v0_2 = 0x800;
        }
        break;
    default:
        if (var_v1 == 0) {
            var_v0_2 = 0x400;
        } else {
            goto block_53;
        }
        break;
    }
    temp_s0 = (arg1 + (func_00BBB7F0(var_v0_2 & 0xFFFF) & 0xFFFF)) & 0xFFFF;
    var_v0 = temp_s0;
    temp_f1 = (s32) ((*(f32 *)D_00591E6C) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x10));
    temp_f0 = (s32) ((*(f32 *)D_00591E74) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
    if (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) >= 0x401) {
        func_0027D0B0(arg0, 0x10);
        var_v0 = func_009B32D0(temp_s0, func_009B34C0((*(f32 *)D_00591E6C), (*(f32 *)D_00591E74), M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), M2C_FIELD(Pes6Ball_Current, f32 *, 0x18)), 0x2000) & 0xFFFF;
    }
    return var_v0;
}
