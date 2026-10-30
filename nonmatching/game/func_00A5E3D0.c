/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_009B30B0(s32, s32);
extern void *Pes6Ball_Current;
extern char D_00591E70[];

s32 func_00A5E3D0(void *arg0, s32 arg1) {
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;
    u16 temp_v0;
    void *temp_v1;

    var_s0 = arg1;
    if ((((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60) || ((M2C_FIELD(arg0, s32 *, 0x1C) < 0xE00) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60))) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x1801)) {
        var_a0 = 0x1800;
    } else {
        var_a0 = 0;
    }
    temp_v1 = M2C_FIELD(arg0, void **, 4);
    temp_v0 = M2C_FIELD(temp_v1, u16 *, 0x30);
    switch (temp_v0) {                              /* irregular */
    case 0x1D1:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x4800)) & 0xFFFF, 0xC00);
block_131:
        var_s0 = var_v0 & 0xFFFF;
        break;
    case 0xA7:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x2000);
        goto block_131;
    case 0x88:
        var_s0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x2000) & 0xFFFF;
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1401) {
            var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x2000);
            goto block_131;
        }
        break;
    case 0x82:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) << 0xE)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0x2000) & 0xFFFF);
        goto block_131;
    case 0x94:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2800)) & 0xFFFF, 0xC00);
        goto block_131;
    case 0x7D:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) << 0xE)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0xC00) & 0xFFFF);
        goto block_131;
    case 0x78:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x5000)) & 0xFFFF, 0xC00);
        goto block_131;
    case 0x8E:
        if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= (8.0f + (*(f32 *)D_00591E70))) {
            var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x3800)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0x1800) & 0xFFFF);
        } else {
            var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2800)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0xC00) & 0xFFFF);
        }
        goto block_131;
    case 0x265:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x1200);
        goto block_131;
    case 0x23D:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1000);
        goto block_131;
    case 0x77:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) + 0x7FFF + 1) & 0xFFFF, 0x1000);
        goto block_131;
    default:
        var_s0 = (s32) M2C_FIELD(arg0, u16 *, 0x26);
        break;
    case 0x90:
    case 0x98:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) << 0xC)) & 0xFFFF, 0x1000);
        goto block_131;
    case 0x92:
    case 0x83:
    case 0x231:
    case 0x48:
    case 0xAA:
    case 0x16C:
    case 0x8F:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) + 0x7FFF + 1) & 0xFFFF, 0x1800);
        goto block_131;
    case 0x85:
    case 0xB0:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x3000);
        goto block_131;
    case 0xA9:
    case 0x7C:
    case 0x95:
    case 0x1D6:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x2000);
        goto block_131;
    case 0x9E:
    case 0xA5:
    case 0xA1:
    case 0x23E:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1800)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0x1000) & 0xFFFF);
        goto block_131;
    case 0x86:
    case 0x8A:
    case 0x23B:
    case 0x8D:
    case 0x16A:
    case 0x79:
    case 0xAB:
    case 0xB1:
    case 0xAE:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1800)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0x1000) & 0xFFFF);
        goto block_131;
    case 0x2FF:
    case 0xAD:
    case 0xA4:
    case 0x9D:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1000);
        goto block_131;
    case 0xA0:
    case 0x366:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1C00);
        goto block_131;
    case 0x1C2:
    case 0x23F:
        if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= (8.0f + (*(f32 *)D_00591E70))) {
            var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) << 0xD)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0x1000) & 0xFFFF);
        } else {
            var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1800)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0xC00) & 0xFFFF);
        }
        goto block_131;
    case 0x23A:
    case 0x97:
    case 0x8B:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x3400)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0x1400) & 0xFFFF);
        goto block_131;
    case 0x96:
    case 0xA6:
    case 0xA8:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2800)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0x2800) & 0xFFFF);
        goto block_131;
    case 0x7B:
    case 0x7A:
    case 0x87:
    case 0xA2:
    case 0xB2:
    case 0xAF:
    case 0x23C:
    case 0xAC:
    case 0x9F:
        var_v0 = func_009B32D0(var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v1, u8 *, 0x2D) != 0) ? -1 : 1) << 0xD)) & 0xFFFF, ((var_a0 & 0xFFFF) + 0x2800) & 0xFFFF);
        goto block_131;
    case 0x8C:
    case 0x76:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1200);
        goto block_131;
    case 0x81:
    case 0x240:
        var_v0 = func_009B32D0(var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x2000);
        goto block_131;
    }
    return var_s0;
}
