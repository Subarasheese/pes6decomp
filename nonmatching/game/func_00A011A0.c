/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A09950();                                /* extern */
s32 func_00AA32C0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926EC[];

s32 func_00A011A0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    u16 temp_v0_3;
    u64 temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) {
        goto block_1;
    }
    if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 1) {
        goto block_59;
    }
    if (func_00A09950() == 1) {
block_59:
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
        var_a0 = temp_v0 >> 0xA;
        if (temp_v0 < 0) {
            var_a0 = (s32) (temp_v0 + 0x3FF) >> 0xA;
        }
        temp_v1 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
        var_v0 = temp_v1 >> 0xB;
        if (temp_v1 < 0) {
            var_v0 = (s32) (temp_v1 + 0x7FF) >> 0xB;
        }
        if ((*(f32 *)D_005926D8) <= (f32) (var_v0 + ((*(u8 *)D_005926EC) + var_a0))) {
            return 1;
        }
        goto block_1;
    }
block_1:
    temp_v1_2 = (u64) ((s64) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 0xD) << 0x38) >> 0x39;
    if ((temp_v1_2 != 2) && (temp_v1_2 != 1) && (temp_v1_2 != 0xB) && (temp_v1_2 != 0) && (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1001) && (func_00AA32C0(arg0) >= 0x24000)) {
        temp_v0_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 3) * 2;
        if ((temp_v0_2 != 0) && (arg1 < temp_v0_2)) {
            return 1;
        }
    }
    temp_v1_3 = M2C_FIELD(arg0, void **, 4);
    temp_v0_3 = M2C_FIELD(temp_v1_3, u16 *, 0x30);
    switch (temp_v0_3) {                            /* irregular */
    case 0x3A:
        if (arg1 < 0x23) {
            return 1;
        }
block_57:
    default:
        return 0;
    case 0x2E5:
    case 0x2E1:
    case 0x36:
    case 0x54:
    case 0x5A:
    case 0x58:
    case 0x228:
    case 0x1C:
    case 0x1C7:
    case 0x1C8:
    case 0x328:
    case 0x1F1:
    case 0x1EE:
    case 0x34A:
        if ((arg1 >= 4) && ((M2C_FIELD(M2C_FIELD(temp_v1_3, void **, 4), u8 *, 3) * 2) >= arg1)) {
            return 1;
        }
        goto block_57;
    case 0x10B:
    case 0x4D:
    case 0x4C:
    case 0x4A:
    case 0x89:
    case 0x47:
    case 0x44:
    case 0x40:
    case 0x37:
        temp_v1_4 = M2C_FIELD(temp_v1_3, void **, 4);
        if ((arg1 >= ((M2C_FIELD(temp_v1_4, u16 *, 8) * 2) - 4)) && ((M2C_FIELD(temp_v1_4, u8 *, 3) * 2) >= arg1)) {
            return 1;
        }
        goto block_57;
    case 0x2EA:
    case 0x2E9:
        if ((M2C_FIELD(M2C_FIELD(temp_v1_3, void **, 4), u8 *, 3) * 2) >= arg1) {
            return 1;
        }
        goto block_57;
    case 0x363:
    case 0x2E8:
    case 0x2E6:
    case 0x2E7:
        if ((arg1 >= 4) && ((M2C_FIELD(M2C_FIELD(temp_v1_3, void **, 4), u16 *, 8) * 2) >= arg1)) {
            return 1;
        }
        goto block_57;
    }
}
