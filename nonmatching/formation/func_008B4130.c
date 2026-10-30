/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
extern int func_0023D820(void);
extern s32 func_008BC3B0(void);
extern s32 func_008B9450(s32);
extern s32 func_008B4920(void);
extern s32 func_008BF0E0(void);
M2C_UNK func_008B3400(void *);                      /* extern */
M2C_UNK func_008B3FD0(void *);                      /* extern */
M2C_UNK func_008BEAA0(void *, s32);                 /* extern */
M2C_UNK func_008BF270(s32, u16 *, M2C_UNK);         /* extern */
M2C_UNK func_008BFA70(void *, u16 *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591C09[];

s32 func_008B4130(void *arg0, s32 arg1, s32 arg2) {
    u16 sp40;
    M2C_UNK var_s2;
    s16 *var_a1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0_3;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_v0;
    s8 temp_v0_2;
    u16 *var_a0;
    u16 *var_a0_4;
    u16 *var_a2;
    u16 *var_s0;
    void *var_a1_2;
    void *var_a1_3;
    void *var_a2_2;
    void *var_a2_3;

    temp_a0 = arg1 & 0xFF;
    if ((u32) (temp_a0 - 0xA) < 4U) {
        switch (temp_a0) {                          /* switch 1; irregular */
        case 13:                                    /* switch 1 */
            var_a1 = arg0 + 0x6C;
            var_a0 = &sp40;
            var_v1 = 0xCD;
            do {
                var_v1 -= 1;
                *var_a0 = (u16) *var_a1;
                var_a1 += 2;
                var_a0 += 2;
            } while (var_v1 > 0);
            break;
        case 12:                                    /* switch 1 */
            func_008BF270(arg0 + 0x208, &sp40, 2);
            break;
        case 11:                                    /* switch 1 */
            func_008BF270(arg0 + 0x208, &sp40, 1);
            break;
        case 10:                                    /* switch 1 */
            func_008BF270(arg0 + 0x208, &sp40, 0);
            break;
        }
        if (sp40 != 0x11E) {
            var_a2 = &sp40;
        } else {
            if (((*(u8 *)D_00591C09) == 0xE) || (func_0023D820() == 1) || (func_008B4920() != 0)) {
                var_v0 = func_002371A0((s32) M2C_FIELD(arg0, u16 *, 0x208));
                goto block_28;
            }
            if (func_008B4920() != 0) {
                var_v0 = 0xDD;
                if ((func_002371A0((s32) M2C_FIELD(arg0, u16 *, 0x208)) & 0xFFFF) == 0xDD) {
block_28:
                    sp40 = (u16) var_v0;
                }
            }
            var_a2 = &sp40;
        }
    } else {
        var_a2 = M2C_FIELD(arg0, s32 *, 0x68) + (temp_a0 * 0x19A);
    }
    temp_a1 = arg2 & 0xFF;
    switch (temp_a1) {                              /* switch 2; irregular */
    case 13:                                        /* switch 2 */
        return 0;
    case 12:                                        /* switch 2 */
        var_a2_2 = var_a2 + 0xA3;
        var_a1_2 = arg0 + 0xA81;
        var_a0_2 = 0x29;
        do {
            var_a0_2 -= 1;
            temp_v0 = M2C_FIELD(var_a2_2, s8 *, 1);
            M2C_FIELD(var_a1_2, s8 *, 0) = (s8) M2C_FIELD(var_a2_2, s8 *, 0);
            var_a2_2 += 2;
            M2C_FIELD(var_a1_2, s8 *, 1) = temp_v0;
            var_a1_2 += 2;
        } while (var_a0_2 > 0);
block_75:
        return 1;
    case 11:                                        /* switch 2 */
        var_a2_3 = var_a2 + 0xA3;
        var_a1_3 = arg0 + 0xA2F;
        var_a0_3 = 0x29;
        do {
            var_a0_3 -= 1;
            temp_v0_2 = M2C_FIELD(var_a2_3, s8 *, 1);
            M2C_FIELD(var_a1_3, s8 *, 0) = (s8) M2C_FIELD(var_a2_3, s8 *, 0);
            var_a2_3 += 2;
            M2C_FIELD(var_a1_3, s8 *, 1) = temp_v0_2;
            var_a1_3 += 2;
        } while (var_a0_3 > 0);
        goto block_75;
    case 10:                                        /* switch 2 */
        var_s0 = &sp40;
block_51:
        var_v1_2 = 0xCD;
        var_a0_4 = var_s0;
        do {
            var_v1_2 -= 1;
            *var_a0_4 = (u16) (s16) *var_a2;
            var_a2 += 2;
            var_a0_4 += 2;
        } while (var_v1_2 > 0);
        if (temp_a1 != 0xA) {
            if (func_008B9450((s32) M2C_FIELD(arg0, u8 *, 0)) != 0) {
                M2C_FIELD(var_s0, s8 *, 0x99) = 2;
                M2C_FIELD(var_s0, u8 *, 0x9A) = 4U;
                M2C_FIELD(var_s0, s8 *, 0x9B) = 1;
                M2C_FIELD(var_s0, s8 *, 0x9C) = 1;
            }
        } else {
            if (func_008B4920() != 0) {
                M2C_FIELD(var_s0, s8 *, 0x9B) = 0;
                M2C_FIELD(var_s0, s8 *, 0x9C) = 0;
            }
            if (func_008BF0E0() == 0) {
                var_s2 = 0;
            } else {
                var_s2 = 2;
            }
            if ((func_008BC3B0() != 0) && (M2C_FIELD(arg0, u8 *, 0) != 0)) {
                if (M2C_FIELD(var_s0, u8 *, 0x9A) == 0) {
                    M2C_FIELD(var_s0, u8 *, 0x9A) = 2U;
                }
                var_s2 = 0;
            }
            func_008BFA70(arg0 + 0x208, &sp40, var_s2, 0);
            if ((func_008BC3B0() != 0) && (M2C_FIELD(arg0, u8 *, 0) == 0)) {
                temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x3220);
                if (temp_v0_3 != 0) {
                    func_008BEAA0(arg0 + 0x208, temp_v0_3 + 0x208);
                    func_008B3400(arg0);
                }
            }
            if (M2C_FIELD(arg0, s32 *, 0x3220) != 0) {
                func_008B3FD0(arg0);
            }
        }
        goto block_75;
    default:                                        /* switch 2 */
        var_s0 = M2C_FIELD(arg0, s32 *, 0x68) + (temp_a1 * 0x19A);
        goto block_51;
    }
}
