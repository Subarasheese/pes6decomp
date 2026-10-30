/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
extern void func_00207BE0(void *);
extern s32 func_00A13E50(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00AB3B70(void *, s32, s32);
extern void func_00B00970(void *, s32);
extern s32 func_00207920(void *);
extern s32 func_009B3220(s32, s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_00A9B270(void *, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209540(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00930240(void *);                      /* extern */
M2C_UNK func_00A11DD0(void *, s32, M2C_UNK);        /* extern */
s32 func_00A99F00(void *, M2C_UNK);                 /* extern */
M2C_UNK func_00AF7FC0(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00AF83C0(void *);                      /* extern */
M2C_UNK func_00AF8870(void *, s32, s32, s32, s32);  /* extern */
M2C_UNK func_00AFB600(void *, s32, M2C_UNK);        /* extern */
s32 func_00AFF630(s32);                             /* extern */
extern f32 *D_003E74CC;

void func_00AA74B0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1;
    s8 var_v1_2;
    u16 temp_a0;
    u16 temp_v0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (func_00AFF630(arg4) == 0) {
        temp_s1 = func_00A9B270(arg0, func_00A13E50(arg3, 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)));
        var_v1 = func_009B30B0(arg2, arg1) & 0xFFFF;
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        switch (temp_v0) {                          /* irregular */
        case 0x12:
            if (((0x1B00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) || ((var_v1 & 0xFFFF) < 0x61)) {
            case 0xBB:
            case 0xB7:
            case 0x68:
            case 0x6B:
            case 0x6E:
            case 0x6D:
            case 0x6A:
                func_00AF8870(arg0, arg1, arg2, temp_s1, arg4);
                return;
            }
        default:
block_38:
            if ((var_v1 & 0xFFFF) >= 0x61) {
                temp_s0 = (arg1 & 0xFFFF) + 0x7FFF + 1;
                temp_s2 = func_009B32D0(arg2, temp_s0 & 0xFFFF, 0x1000) & 0xFFFF;
                temp_v1 = func_009B3070(temp_s2, (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF;
                if ((M2C_FIELD(arg0, s32 *, 0x1C) >= 0x801) && (temp_s5 = temp_v1 & 0xFFFF, ((temp_s5 < 0x4000) == 0))) {
                    if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) < 0x31) {
                        if (temp_s5 >= 0x4000) {
                            temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
                            if ((temp_a0 != 0x22) && (temp_a0 != 0x23) && (temp_a0 != 0x21) && (temp_a0 != 0xC3) && (temp_a0 != 0xC2) && (temp_a0 != 0xC5) && (temp_a0 != 0xBC) && (temp_a0 != 0xC4) && (temp_a0 != 0xBE) && (temp_a0 != 0xC6) && (temp_a0 != 0xC7) && (temp_a0 != 0xB6)) {
                                var_v1_2 = ((((temp_s2 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) >= 0x8001;
                                goto block_56;
                            }
                        } else {
                            var_v1_2 = ((((temp_s2 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) >= 0x8001;
block_56:
                            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = var_v1_2;
                        }
                        temp_a0_2 = M2C_FIELD(arg0, void **, 4);
                        if (M2C_FIELD(temp_a0_2, u16 *, 0x30) != 3) {
                            goto block_58;
                        }
                        var_a2 = 0x2710 - func_00207920(temp_a0_2);
                        if (var_a2 < 0x7D0) {
block_58:
                            var_a2 = 0x7D0;
                        }
                        if ((0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) {
                            func_00209540(M2C_FIELD(arg0, void **, 4), 0xB7, var_a2);
                        } else {
                            func_00209540(M2C_FIELD(arg0, void **, 4), 0xBB, var_a2);
                        }
                        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
                        func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                        M2C_FIELD(arg0, u16 *, 0x36) = (u16) temp_s2;
                        M2C_FIELD(arg0, s16 *, 0x34) = func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x1000);
                        M2C_FIELD(arg0, u16 *, 0x38) = func_00AB3B70(arg0, (s32) M2C_FIELD(arg0, u16 *, 0x36), M2C_FIELD(&D_003E74CC[M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30)], s32 *, 0x2FD8) - 6);
                        M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) + ((M2C_FIELD(arg0, u16 *, 0x38) * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
                    } else if (func_00A99F00(arg0, 0) != 0) {
                        func_00A11DD0(arg0, temp_s2, 1);
                        return;
                    }
                } else {
                    func_00AF83C0(arg0);
                    temp_a0_3 = M2C_FIELD(arg0, void **, 4);
                    if (M2C_FIELD(temp_a0_3, u16 *, 0x30) == 2) {
                        func_00207BE0(temp_a0_3);
                    } else {
                        func_00AF7FC0(arg0, 2, temp_s2);
                        func_00209A00(M2C_FIELD(arg0, void **, 4), 2, 0x10);
                        func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                        if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) {
                            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x38) = 0;
                            M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
                        }
                    }
                    M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(temp_s0 & 0xFFFF, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x400);
                    if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x800) {
                        M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
                    }
                    if ((func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) < 0x2001) {
                        M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x400);
                        temp_v0_2 = temp_s1 * 0x14;
                        var_a1 = temp_v0_2 >> 4;
                        if (temp_v0_2 < 0) {
                            var_a1 = (s32) (temp_v0_2 + 0xF) >> 4;
                        }
                        func_00AFB600(arg0, var_a1, 0x1900);
                        func_00930240(arg0);
                    } else {
                        func_00B00970(arg0, (s32) (512.0f * *D_003E74CC));
                        M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x2000);
                    }
                    M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
                    return;
                }
            } else {
                func_00AF8870(arg0, arg1, arg2, temp_s1, arg4);
                return;
            }
            break;
        case 0x22A:
        case 0x2B4:
            if ((var_v1 & 0xFFFF) < 0x1B) {
                var_v1 = 0x16;
            }
            goto block_38;
        case 0xC5:
        case 0xC4:
        case 0xC3:
        case 0xC2:
        case 0xC6:
        case 0xB6:
        case 0xBE:
            temp_a0_4 = var_v1 & 0xFFFF;
            if ((temp_a0_4 < 0x17) && (temp_a0_4 >= 0xE)) {
                var_v1 = 0x17;
            } else if ((temp_a0_4 >= 0x51) && (temp_a0_4 < 0x61)) {
                var_v1 = 0x4F;
            }
            goto block_38;
        case 0x114:
            temp_a0_5 = var_v1 & 0xFFFF;
            if ((temp_a0_5 >= 0x24) && (temp_a0_5 < 0x69)) {
                var_v1 = 0x29;
            }
            goto block_38;
        case 0x2:
        case 0x1:
            if ((var_v1 & 0xFFFF) >= 0x60) {
                var_v1 = 0x71;
            }
            goto block_38;
        }
    }
}
