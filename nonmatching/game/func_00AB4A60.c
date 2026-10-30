/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00A07B40(void);
extern s32 func_009B3070(s32, s32);
extern s32 func_00207920(void *);
extern s32 func_00A1FE80(s32, s32);
extern s32 func_009B3220(s32, s32, s32);
extern s32 func_00A13E50(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00A9B270(void *, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209540(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32, s32);   /* extern */
M2C_UNK func_00AFB7C0(void *, s32, s32);            /* extern */
extern char D_005926DE[];
extern char D_005926E2[];

s32 func_00AB4A60(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a2_5;
    s32 var_s1;
    s32 var_s2;
    u16 temp_v1;
    u16 temp_v1_2;
    u32 var_a2_2;
    u8 var_v0;
    u8 var_v0_2;
    void *temp_a0;

    var_s2 = arg2;
    temp_s0 = arg1 & 0xFFFF;
    temp_a3 = func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    temp_a2 = ((temp_s0 - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF;
    var_s1 = temp_a2 < 0x8001;
    switch (temp_v1) {                              /* irregular */
    case 0xC3:
        if (((temp_a3 & 0xFFFF) >= 0x801) && (M2C_FIELD(temp_a0, u8 *, 0x2D) != var_s1)) {
            var_v0 = M2C_FIELD(arg0, u8 *, 0x65) + 1;
            goto block_83;
        }
        if ((s32) (*(u8 *)D_005926DE) >= (s32) M2C_FIELD(arg0, u8 *, 0x65)) {
            temp_f1 = M2C_FIELD(temp_a0, f32 *, 0x38);
            if (temp_f1 >= 2.1474836e9f) {
                var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            } else {
                var_a2 = (s32) temp_f1;
            }
            func_00209A00(temp_a0, 0xC2, var_a2 & 0xFFFF, temp_a3);
            func_00207390(M2C_FIELD(arg0, void **, 4), 4);
            var_v0 = (*(u8 *)D_005926E2);
block_83:
            M2C_FIELD(arg0, u8 *, 0x65) = var_v0;
        }
        var_s1 = temp_a2 >= 0x8001;
    default:
block_90:
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) == var_s1) {
            if (M2C_FIELD(arg0, u8 *, 0x64) != 0) {
                goto block_92;
            }
            if ((func_00A07B40() != 0) && (M2C_FIELD(arg0, u8 *, 0x16) != 7)) {
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
                if (temp_v0 < 0x1101) {
                    var_a2_2 = 0x400;
                } else {
                    var_a2_2 = (0x400 - (((temp_v0 - 0x1100) / 6) + ((u32) (temp_v0 - 0x1100) >> 0x1F))) & 0xFFFF;
                }
                temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
                if ((temp_v1_2 != 0xC5) && (temp_v1_2 != 0xC3) && (temp_v1_2 != 0x2D)) {

                } else {
                    var_a2_2 = (var_a2_2 + 0x200) & 0xFFFF;
                }
            } else {
block_92:
                var_a2_2 = 0x300;
            }
            if (M2C_FIELD(arg0, u8 *, 0x63) != 0) {
                var_a2_2 = (var_a2_2 >> 1) & 0xFFFF;
            }
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) var_a2_2);
        }
        M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
        M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        if (M2C_FIELD(arg0, u8 *, 0x63) != 0) {
            if (var_s2 >= 0x1601) {
                var_s2 = 0x1600;
            }
            goto block_107;
        }
        if ((M2C_FIELD(arg0, u16 *, 0x28) == temp_s0) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) < 0x31)) {
            if (var_s2 >= 0x1601) {
                var_s2 = 0x1600;
            }
            goto block_107;
        }
        var_s2 = func_00A13E50(var_s2, 0x1600 - ((u32) (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) >> 2));
        if (var_s2 < 0x1100) {
            var_s2 = 0x1100;
        }
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (var_s2 < temp_a0_2) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (((temp_a0_2 * 0x5F) / 100) + ((u32) (temp_a0_2 * 0x5F) >> 0x1F));
            return 0;
        }
block_107:
        func_00AFB7C0(arg0, func_00A9B270(arg0, func_00A1FE80(var_s2, 0xC00)), M2C_FIELD(arg0, u8 *, 0x5C) + 0x20);
        return 0;
    case 0x2D:
        if (((temp_a3 & 0xFFFF) >= 0x801) && (M2C_FIELD(temp_a0, u8 *, 0x2D) == var_s1)) {
            M2C_FIELD(arg0, u8 *, 0x65) = (u8) (M2C_FIELD(arg0, u8 *, 0x65) + 1);
        } else if ((s32) (*(u8 *)D_005926DE) >= (s32) M2C_FIELD(arg0, u8 *, 0x65)) {
            func_00209540(M2C_FIELD(arg0, void **, 4), 0x2B, func_00207920(temp_a0) + 0x3E8);
            func_00207390(M2C_FIELD(arg0, void **, 4), 4);
            M2C_FIELD(arg0, u8 *, 0x65) = (u8) (*(u8 *)D_005926E2);
        }
        goto block_90;
    case 0xC4:
        temp_v1_3 = temp_a3 & 0xFFFF;
        if (temp_v1_3 >= 0x21) {
            if (M2C_FIELD(temp_a0, u8 *, 0x2D) != var_s1) {
                return 1;
            }
            if (temp_v1_3 < 0x801) {
                M2C_FIELD(arg0, u8 *, 0x65) = (u8) (M2C_FIELD(arg0, u8 *, 0x65) + 1);
            } else if ((s32) (*(u8 *)D_005926DE) >= (s32) M2C_FIELD(arg0, u8 *, 0x65)) {
                func_00209540(M2C_FIELD(arg0, void **, 4), 0xC5, func_00207920(temp_a0));
                func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                M2C_FIELD(arg0, u8 *, 0x65) = (u8) (*(u8 *)D_005926E2);
            }
            goto block_90;
        }
        if (M2C_FIELD(arg0, u8 *, 0x65) == 0) {
            return 1;
        }
        goto block_90;
    case 0xC2:
        temp_v1_4 = temp_a3 & 0xFFFF;
        if (temp_v1_4 >= 0x21) {
            if (M2C_FIELD(temp_a0, u8 *, 0x2D) == var_s1) {
                return 1;
            }
            if (temp_v1_4 < 0x801) {
                var_v0_2 = M2C_FIELD(arg0, u8 *, 0x65) + 1;
                goto block_53;
            }
            if ((s32) (*(u8 *)D_005926DE) >= (s32) M2C_FIELD(arg0, u8 *, 0x65)) {
                temp_f1_2 = M2C_FIELD(temp_a0, f32 *, 0x38);
                if (temp_f1_2 >= 2.1474836e9f) {
                    var_a2_3 = (s32) (temp_f1_2 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_a2_3 = (s32) temp_f1_2;
                }
                func_00209A00(temp_a0, 0xC3, var_a2_3 & 0xFFFF, temp_a3);
                func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                var_v0_2 = (*(u8 *)D_005926E2);
block_53:
                M2C_FIELD(arg0, u8 *, 0x65) = var_v0_2;
            }
            var_s1 = temp_a2 >= 0x8001;
            goto block_90;
        }
        if (M2C_FIELD(arg0, u8 *, 0x65) == 0) {
            return 1;
        }
        goto block_90;
    case 0x2B:
        temp_v1_5 = temp_a3 & 0xFFFF;
        if (temp_v1_5 >= 0x21) {
            if (M2C_FIELD(temp_a0, u8 *, 0x2D) != var_s1) {
                return 1;
            }
            if (temp_v1_5 < 0x801) {
                M2C_FIELD(arg0, u8 *, 0x65) = (u8) (M2C_FIELD(arg0, u8 *, 0x65) + 1);
            } else if ((s32) (*(u8 *)D_005926DE) >= (s32) M2C_FIELD(arg0, u8 *, 0x65)) {
                temp_f1_3 = M2C_FIELD(temp_a0, f32 *, 0x38);
                if (temp_f1_3 >= 2.1474836e9f) {
                    var_a2_4 = (s32) (temp_f1_3 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_a2_4 = (s32) temp_f1_3;
                }
                func_00209A00(temp_a0, 0x2D, var_a2_4 & 0xFFFF, temp_a3);
                func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                M2C_FIELD(arg0, u8 *, 0x65) = (u8) (*(u8 *)D_005926E2);
            }
            goto block_90;
        }
        if (M2C_FIELD(arg0, u8 *, 0x65) == 0) {
            return 1;
        }
        goto block_90;
    case 0xC5:
        if (((temp_a3 & 0xFFFF) >= 0x801) && (M2C_FIELD(temp_a0, u8 *, 0x2D) == var_s1)) {
            M2C_FIELD(arg0, u8 *, 0x65) = (u8) (M2C_FIELD(arg0, u8 *, 0x65) + 1);
        } else if (((s32) (*(u8 *)D_005926DE) >= (s32) M2C_FIELD(arg0, u8 *, 0x65)) || (M2C_FIELD(temp_a0, u8 *, 0x2D) != var_s1)) {
            temp_f1_4 = M2C_FIELD(temp_a0, f32 *, 0x38);
            if (temp_f1_4 >= 2.1474836e9f) {
                var_a2_5 = (s32) (temp_f1_4 - 2.1474836e9f) | 0x80000000;
            } else {
                var_a2_5 = (s32) temp_f1_4;
            }
            func_00209A00(temp_a0, 0xC4, var_a2_5 & 0xFFFF, temp_a3);
            func_00207390(M2C_FIELD(arg0, void **, 4), 4);
            M2C_FIELD(arg0, u8 *, 0x65) = (u8) (*(u8 *)D_005926E2);
        }
        goto block_90;
    }
}
