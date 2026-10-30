/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B00970(void *, s32);
extern s32 func_00207D10(void *);
extern s32 func_00BBB7F0(s32);
extern void func_002096E0(void *, s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_00A1FE80(s32, s32);
extern void func_00207BE0(void *);
extern s32 func_009B3220(s32, s32, s32);
extern s32 func_00A13E50(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00930240(void *);                      /* extern */
M2C_UNK func_00AFB7C0(void *, s32, s32);            /* extern */
extern f32 *D_003E74CC;

s32 func_0097C490(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s1;
    u16 temp_s0_2;
    u16 temp_v1;
    u16 var_v0;
    void *temp_a0;

    if (M2C_FIELD(arg0, u8 *, 0x16) == 7) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0x90);
    } else {
        var_s1 = 0x680;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_s0 = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF;
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x117:
        func_002096E0(M2C_FIELD(arg0, void **, 4), func_00BBB7F0(0xA));
        func_00207BE0(M2C_FIELD(arg0, void **, 4));
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) arg1;
        if ((temp_s0 & 0xFFFF) >= 0x51) {
            func_00B00970(arg0, (s32) (1024.0f * *D_003E74CC));
            if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            }
        } else {
            M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x400);
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x400);
            func_00930240(arg0);
            M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        }
block_69:
    default:
        return 0;
    case 0xB7:
        M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0((s32) M2C_FIELD(arg0, u16 *, 0x36), (s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x38));
        M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x2000);
        func_00AFB7C0(arg0, func_00A1FE80(func_00A13E50(var_s1, 0x7CC), 0x800), M2C_FIELD(arg0, u8 *, 0x5C) + 0x20);
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            func_00209A00(M2C_FIELD(arg0, void **, 4), 0x391, 0x12);
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(arg0, u16 *, 0x34) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        }
        return 1;
    case 0xBC:
        if (M2C_FIELD(temp_a0, f32 *, 0x38) < 20.0f) {
            temp_s0_2 = M2C_FIELD(arg0, u16 *, 0x38);
            if ((s32) temp_s0_2 >= (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x36)) & 0xFFFF)) {
                var_v0 = M2C_FIELD(arg0, u16 *, 0x36);
            } else {
                var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + ((temp_s0_2 * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF);
            }
            M2C_FIELD(arg0, u16 *, 0x26) = var_v0;
        }
        func_00930240(arg0);
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            func_00209A00(M2C_FIELD(arg0, void **, 4), 0x391, 0);
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        }
        return 1;
    case 0x11F:
    case 0x126:
        func_00207BE0(temp_a0);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) arg1;
        if ((temp_s0 & 0xFFFF) < 0x51) {
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(((arg1 & 0xFFFF) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE)) & 0xFFFF, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x400);
            if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x400) {
                if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) >= 0x41) {
                    func_00B00970(arg0, (s32) (1024.0f * *D_003E74CC));
                } else {
                    M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x400);
                    goto block_42;
                }
            } else {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
block_42:
                func_00930240(arg0);
            }
        } else {
            func_00B00970(arg0, (s32) (1024.0f * *D_003E74CC));
            if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            }
        }
        goto block_69;
    case 0x119:
        func_00207BE0(temp_a0);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) arg1;
        if ((temp_s0 & 0xFFFF) < 0x51) {
            M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(((arg1 & 0xFFFF) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE)) & 0xFFFF, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x400);
            func_00930240(arg0);
        } else {
            func_00B00970(arg0, (s32) (1024.0f * *D_003E74CC));
            if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            }
        }
        goto block_69;
    case 0x11B:
    case 0x122:
        func_00207BE0(temp_a0);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) arg1;
        if ((temp_s0 & 0xFFFF) < 0x51) {
            if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x400) {
                M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x800);
            } else {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            }
            M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(((arg1 & 0xFFFF) + 0x7FFF + 1) & 0xFFFF, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x800);
            func_00930240(arg0);
        } else {
            func_00B00970(arg0, (s32) (1024.0f * *D_003E74CC));
            if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            }
        }
        goto block_69;
    case 0x115:
        func_00207BE0(temp_a0);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) arg1;
        if ((temp_s0 & 0xFFFF) >= 0x51) {
            func_00B00970(arg0, (s32) (1024.0f * *D_003E74CC));
            if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            }
        } else {
            M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x400);
            M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(((arg1 & 0xFFFF) + 0x7FFF + 1) & 0xFFFF, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x400);
            func_00930240(arg0);
        }
        goto block_69;
    case 0x11D:
    case 0x124:
        func_00207BE0(temp_a0);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) arg1;
        if ((temp_s0 & 0xFFFF) < 0x51) {
            if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x400) {
                M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x800);
            } else {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            }
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x800);
            M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
            func_00930240(arg0);
        } else {
            func_00B00970(arg0, (s32) (1024.0f * *D_003E74CC));
            if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) {
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) arg1;
            }
        }
        goto block_69;
    case 0x391:
        if (func_00207D10(temp_a0) != 0) {
            func_00207BE0(M2C_FIELD(arg0, void **, 4));
        }
        if (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) >= 0x40) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x801)) {
            M2C_FIELD(arg0, s16 *, 0x18) = 0xA;
            return 1;
        }
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) arg1;
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x481) {
            M2C_FIELD(arg0, u16 *, 0x28) = func_009B3220((s32) M2C_FIELD(arg0, u16 *, 0x34), (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x200);
            M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220((M2C_FIELD(arg0, u16 *, 0x28) + 0x7FFF + 1) & 0xFFFF, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x200);
        }
        func_00930240(arg0);
        goto block_69;
    case 0x393:
        func_00207BE0(temp_a0);
        func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) arg1;
        M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x100);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x800;
        func_00930240(arg0);
        goto block_69;
    }
}
