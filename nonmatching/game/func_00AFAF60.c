/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A13E50(s32, s32);                        /* extern */
s32 func_00A9B270(void *, s32);                     /* extern */
M2C_UNK func_00AA74B0(void *, u16, u16, s32, s32);  /* extern */
M2C_UNK func_00AA8B90(void *, u16, u16, s32, s32);  /* extern */
M2C_UNK func_00AF8870(void *, u16, u16, s32, s32);  /* extern */
s32 func_00AFF630(s32);                             /* extern */
extern s32 D_003E74CC;

void func_00AFAF60(void *arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s5;
    s32 var_s0;
    s32 var_v0;
    s32 var_v1;
    s8 var_v1_2;
    u16 temp_a0;
    u16 temp_v0;

    if (func_00AFF630(arg4) == 0) {
        var_s0 = func_00A9B270(arg0, func_00A13E50(arg3, 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)));
        var_v1 = func_009B30B0(arg2, arg1) & 0xFFFF;
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        switch (temp_v0) {                          /* irregular */
        case 0x1:
            if ((var_v1 & 0xFFFF) >= 0x60) {
                var_v1 = 0x71;
            }
        default:
block_51:
            if ((var_v1 & 0xFFFF) < 0x61) {
                func_00AF8870(arg0, arg1, arg2, var_s0, arg4);
                return;
            }
            temp_s5 = func_009B3070(arg2, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF;
            if ((temp_s5 >= 0x5000) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x681)) {
                if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF) < 0x70) {
                    var_v1_2 = ((((arg2 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) >= 0x8001;
                    goto block_73;
                }
                temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
                if ((temp_a0 != 0x16) && (temp_a0 != 0x17) && (temp_a0 != 0x15) && (temp_a0 != 0x22) && (temp_a0 != 0x23) && (temp_a0 != 0x21) && (temp_a0 != 0xBE) && (temp_a0 != 0xC3) && (temp_a0 != 0xC2) && (temp_a0 != 0xC5) && (temp_a0 != 0xC4) && (temp_a0 != 0xC7) && (temp_a0 != 0xB6)) {
                    var_v1_2 = ((((arg2 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) >= 0x8001;
block_73:
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = var_v1_2;
                }
                if ((func_009B30B0(arg1, M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21) {
                    if ((0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) >= M2C_FIELD(arg0, s32 *, 0x1C)) {
                        func_00209A00(M2C_FIELD(arg0, void **, 4), 0xBB, 4);
                    } else {
                        func_00209A00(M2C_FIELD(arg0, void **, 4), 0xB7, 4);
                    }
                    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
                    M2C_FIELD(arg0, s16 *, 0x38) = (s16) (temp_s5 / (s32) (M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2));
                    M2C_FIELD(arg0, u16 *, 0x36) = arg2;
                    M2C_FIELD(arg0, u16 *, 0x34) = arg1;
                    func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                    return;
                }
                goto block_83;
            }
block_83:
            func_00AA8B90(arg0, arg1, arg2, var_s0, arg4);
            break;
        case 0x2C0:
            temp_a0_2 = 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC);
            var_v0 = temp_a0_2 >> 1;
            if (temp_a0_2 < 0) {
                var_v0 = (s32) (temp_a0_2 + 1) >> 1;
            }
            if (var_s0 >= var_v0) {
                var_s0 -= 0x400;
            }
        case 0x11:
        case 0x27:
        case 0x2A:
        case 0x22A:
        case 0x2B4:
            if ((var_v1 & 0xFFFF) < 0x1B) {
                var_v1 = 0x16;
            }
            goto block_51;
        case 0x2:
            if ((0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < var_s0) {
                func_00AA74B0(arg0, arg1, arg2, var_s0, arg4);
                return;
            }
            goto block_51;
        case 0x12:
            if (((0x1B00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) || ((var_v1 & 0xFFFF) < 0x61)) {
            case 0xBB:
            case 0xB7:
            case 0x68:
            case 0x6E:
            case 0x6D:
            case 0x6A:
                func_00AF8870(arg0, arg1, arg2, var_s0, arg4);
                return;
            }
            goto block_51;
        case 0xC5:
        case 0xC4:
        case 0xC3:
        case 0xC2:
        case 0xC6:
        case 0xB6:
        case 0xBE:
            temp_a0_3 = var_v1 & 0xFFFF;
            if ((temp_a0_3 < 0x17) && (temp_a0_3 >= 0xE)) {
                var_v1 = 0x17;
            } else if ((temp_a0_3 >= 0x51) && (temp_a0_3 < 0x59)) {
                var_v1 = 0x4F;
            }
            goto block_51;
        }
    }
}
