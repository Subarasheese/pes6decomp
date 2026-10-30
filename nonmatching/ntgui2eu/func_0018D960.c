/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00192438(void);
void func_0018D960(void *arg0, s16 arg1, s16 arg2, M2C_UNK arg3, s16 arg4, s16 arg5) {
    s16 temp_v1;
    s32 var_v0_3;
    s32 var_v1;
    s64 var_a0;
    s64 var_a0_2;
    s64 var_a1;
    s64 var_a1_2;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v1_2;
    u16 temp_a2;
    u32 temp_a1;

    temp_a1 = func_00192438();
    M2C_FIELD(arg0, s64 *, 0) = 0x66;
    var_v0 = 2;
    if (M2C_FIELD(temp_a1, s16 *, 0) != 0) {
        var_v0 = 3;
        if (M2C_FIELD(temp_a1, s16 *, 4) == 0) {
            var_v0 = 1;
        }
    }
    M2C_FIELD(arg0, s64 *, 8) = var_v0;
    temp_a2 = M2C_FIELD(temp_a1, u16 *, 2);
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) (((arg1 & 0xF) << 0xF) | ((((s32) (arg2 + 0x3F) >> 6) & 0x3F) << 9));
    temp_v1 = (s16) M2C_FIELD(temp_a1, u16 *, 2);
    switch (temp_v1) {                              /* irregular */
    case 0x1A:
        var_v1 = ((arg4 * 2) + 0x114) & 0xFFF;
        var_a0 = 0x9FE0 << 0x1B;
        var_v0_2 = ((arg5 + 0x22) & 0xFFF) << 0xC;
block_65:
        var_a1 = ((0x1DF000 << 0x10) | 0x80) << 0x10;
block_66:
        M2C_FIELD(arg0, s64 *, 0x18) = (s64) (var_v1 | var_a0 | (var_v0_2 | var_a1));
        break;
    case 0x1B:
        var_v1 = ((arg4 * 2) + 0x144) & 0xFFF;
        var_a0 = 0x9FE0 << 0x1B;
        var_v0_2 = ((arg5 + 0x1E) & 0xFFF) << 0xC;
        goto block_65;
    case 0x1C:
        var_v1 = ((arg4 * 2) + 0x164) & 0xFFF;
        var_a0 = 0x9FE0 << 0x1B;
        var_v0_2 = ((arg5 + 0x12) & 0xFFF) << 0xC;
        goto block_65;
    case 0x1D:
        var_v1 = ((arg4 * 2) + 0x104) & 0xFFF;
        var_a0 = 0x9FE0 << 0x1B;
        var_v0_2 = ((arg5 + 0x1B) & 0xFFF) << 0xC;
        goto block_65;
    case 0x2A:
        var_v1 = ((arg4 * 2) + 0x184) & 0xFFF;
        var_a0 = 0xC7E0 << 0x1B;
        var_a1 = ((0x257000 << 0x10) | 0x80) << 0x10;
        var_v0_2 = ((arg5 + 0x17) & 0xFFF) << 0xC;
        goto block_66;
    case 0x2B:
        var_v1 = ((arg4 * 2) + 0x1A4) & 0xFFF;
        var_a0 = 0xC7E0 << 0x1B;
        var_a1 = ((0x257000 << 0x10) | 0x80) << 0x10;
        var_v0_2 = ((arg5 + 0x1A) & 0xFFF) << 0xC;
        goto block_66;
    case 0x2C:
        var_v1 = ((arg4 * 2) + 0x164) & 0xFFF;
        var_a0 = 0xC7E0 << 0x1B;
        var_a1 = ((0x257000 << 0x10) | 0x80) << 0x10;
        var_v0_2 = ((arg5 + 0x1C) & 0xFFF) << 0xC;
        goto block_66;
    case 0x2D:
        var_v1 = ((arg4 * 2) + 0x1D4) & 0xFFF;
        var_a0 = 0xC7E0 << 0x1B;
        var_a1 = ((0x257000 << 0x10) | 0x80) << 0x10;
        var_v0_2 = ((arg5 + 0x17) & 0xFFF) << 0xC;
        goto block_66;
    case 0x2E:
        var_v1 = ((arg4 * 2) + 0x1A4) & 0xFFF;
        var_a0 = 0xC7E0 << 0x1B;
        var_a1 = ((0x257000 << 0x10) | 0x80) << 0x10;
        var_v0_2 = ((arg5 + 0x1D) & 0xFFF) << 0xC;
        goto block_66;
    case 0x3B:
        var_v1 = ((arg4 * 2) + 0x244) & 0xFFF;
        var_a0 = 0xFFE0 << 0x1B;
        var_a1 = ((0x2FF000 << 0x10) | 0x80) << 0x10;
        var_v0_2 = ((arg5 + 0x22) & 0xFFF) << 0xC;
        goto block_66;
    case 0x3C:
        var_v1_2 = ((arg5 + 0x22) & 0xFFF) << 0xC;
        var_a0_2 = 0xFFC0 << 0x1A;
        var_a1_2 = 0xBFC0 << 0x26;
        var_v0_3 = (((s64) ((s64) arg4 << 0x30) >> 0x30) + 0x10C) & 0xFFF;
block_73:
        M2C_FIELD(arg0, s64 *, 0x18) = (s64) (var_v0_3 | var_a0_2 | (var_v1_2 | var_a1_2));
        break;
    case 0x3D:
        var_v1_2 = ((arg5 + 0x1E) & 0xFFF) << 0xC;
        var_a0_2 = 0xFFC0 << 0x1A;
        var_a1_2 = 0xBFC0 << 0x26;
        var_v0_3 = (((s64) ((s64) arg4 << 0x30) >> 0x30) + 0x104) & 0xFFF;
        goto block_73;
    case 0x3E:
        var_v1_2 = ((arg5 + 0x26) & 0xFFF) << 0xC;
        var_a0_2 = 0xFFC0 << 0x1A;
        var_a1_2 = 0xBFC0 << 0x26;
        var_v0_3 = (((s64) ((s64) arg4 << 0x30) >> 0x30) + 0x124) & 0xFFF;
        goto block_73;
    case 0x4A:
        var_v1_2 = ((arg5 + 0x28) & 0xFFF) << 0xC;
        var_a0_2 = 0x9FE0 << 0x1B;
        var_a1_2 = 0xFFC0 << 0x26;
        var_v0_3 = (((s64) ((s64) arg4 << 0x30) >> 0x30) + 0x15C) & 0xFFF;
        goto block_73;
    case 0x4B:
        var_v1_2 = ((arg5 + 0x28) & 0xFFF) << 0xC;
        var_a0_2 = 0x9FE0 << 0x1B;
        var_a1_2 = 0xFFC0 << 0x26;
        var_v0_3 = (((s64) ((s64) arg4 << 0x30) >> 0x30) + 0x17C) & 0xFFF;
        goto block_73;
    case 0x50:
        var_v1 = ((arg4 * 2) + 0xE8) & 0xFFF;
        var_v0_2 = ((arg5 + 0x23) & 0xFFF) << 0xC;
        var_a0 = 0xB3E0 << 0x1B;
        goto block_65;
    case 0x51:
        var_v1_2 = ((arg5 + 0x28) & 0xFFF) << 0xC;
        var_a0_2 = 0xEFE0 << 0x1B;
        var_a1_2 = 0x86E0 << 0x27;
        var_v0_3 = (((s64) ((s64) arg4 << 0x30) >> 0x30) + 0xEE) & 0xFFF;
        goto block_73;
    case 0x52:
        var_v1_2 = ((arg5 + 0x18) & 0xFFF) << 0xC;
        var_v0_3 = (((s64) ((s64) arg4 << 0x30) >> 0x30) + 0x12E) & 0xFFF;
        var_a0_2 = 0x9FE0 << 0x1B;
        var_a1_2 = 0xB3C0 << 0x26;
        goto block_73;
    }
    M2C_FIELD(arg0, s64 *, 0x20) = 0;
}
