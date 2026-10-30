/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB7F0(s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_00BA87B0(void *, s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009B33A0(void *, s32, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0097A6D0(void *, u16);                 /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */

void func_00B6EB10(void *arg0) {
    s16 temp_a0_4;
    s16 var_a0;
    s16 var_a0_2;
    s32 temp_s1_2;
    s32 temp_s1_4;
    s32 temp_s1_5;
    u16 temp_s1_3;
    u64 temp_s1;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    if (func_00BA87B0(arg0, 2) != 0) {
        temp_a1 = M2C_FIELD(arg0, void **, 0);
        if ((M2C_FIELD(temp_a1, s32 *, 0x94) & 2) && !(M2C_FIELD(temp_a1, f32 *, 0xE8) <= 4608.0f) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) != 2) && ((func_009B3070((s32) M2C_FIELD(temp_a1, u16 *, 0x26), (s32) M2C_FIELD(temp_a1, u16 *, 0x2C)) & 0xFFFF) < 0x1001) && (func_00BBB8C0(0x64) < 6)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 2U;
            temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
            switch (temp_a0) {                      /* switch 1; irregular */
            case 2:                                 /* switch 1 */
            case 1:                                 /* switch 1 */
                var_a0 = 9;
block_13:
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
                break;
            case 3:                                 /* switch 1 */
            case 0:                                 /* switch 1 */
                var_a0 = 0xB;
                goto block_13;
            }
            return;
        }
    }
    if (func_00BA87B0(arg0, 1) != 0) {
        temp_a1_2 = M2C_FIELD(arg0, void **, 0);
        if ((M2C_FIELD(temp_a1_2, s32 *, 0x94) & 2) && !(M2C_FIELD(temp_a1_2, f32 *, 0xE8) <= 4608.0f) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) != 1) && ((func_009B3070((s32) M2C_FIELD(temp_a1_2, u16 *, 0x26), (s32) M2C_FIELD(temp_a1_2, u16 *, 0x2C)) & 0xFFFF) < 0x1001) && (func_00BBB8C0(0x64) < 6)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 1U;
            temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
            switch (temp_a0_2) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
            case 1:                                 /* switch 2 */
                var_a0_2 = 9;
block_28:
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0_2;
                break;
            case 3:                                 /* switch 2 */
            case 0:                                 /* switch 2 */
                var_a0_2 = 0xB;
                goto block_28;
            }
            return;
        }
    }
    temp_a0_3 = M2C_FIELD(arg0, void **, 0);
    temp_a1_3 = M2C_FIELD(arg0, void **, 0);
    temp_s1 = (u64) (func_009B33A0(temp_a0_3, (s32) M2C_FIELD(temp_a0_3, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0_3, f32 *, 0x70)) << 0x20) >> 0x20;
    if (M2C_FIELD(temp_a1_3, s32 *, 0x98) == 0) {
        if (temp_s1 >= 0x10001U) {
            temp_a0_4 = M2C_FIELD(temp_a1_3, s16 *, 0x14);
            switch (temp_a0_4) {                    /* switch 3; irregular */
            case 1:                                 /* switch 3 */
                if (M2C_FIELD(temp_a1_3, f32 *, 0xE8) <= -1920.0f) {
block_35:
                    if (M2C_FIELD(temp_a1_3, u8 *, 0x10) == 0) {
                        return;
                    }
                    goto block_39;
                }
                break;
            case -1:                                /* switch 3 */
                if ((M2C_FIELD(temp_a1_3, f32 *, 0xE8) <= 384.0f) && (M2C_FIELD(temp_a1_3, u8 *, 0x10) != 0)) {
                    goto block_39;
                }
                if ((temp_a0_4 == 1) && (M2C_FIELD(temp_a1_3, f32 *, 0xE8) <= -1920.0f)) {
                    goto block_35;
                }
                break;
            }
        } else {
block_39:
            temp_s1_2 = func_009B3480(M2C_FIELD(arg0, void **, 0), -13465.0f, 0.0f) & 0xFFFF;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = (u16) (temp_s1_2 + func_00BBB7F0(0x1000));
            temp_a0_5 = M2C_FIELD(arg0, void **, 0);
            temp_s1_3 = M2C_FIELD(M2C_FIELD(temp_a0_5, void **, 4), u16 *, 0x30);
            M2C_FIELD(temp_a0_5, s32 *, 0x1C) = 0x670;
            func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x38C, 0);
            temp_a0_6 = M2C_FIELD(arg0, void **, 0);
            func_0097A6D0(temp_a0_6, M2C_FIELD(temp_a0_6, u16 *, 0x2C));
            temp_a0_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            if (M2C_FIELD(temp_a0_7, u16 *, 0x30) != temp_s1_3) {
                func_00207390(temp_a0_7, 8);
            }
            goto block_47;
        }
    } else {
        if (((func_009B3070((s32) M2C_FIELD(temp_a1_3, u16 *, 0x26), (s32) M2C_FIELD(temp_a1_3, u16 *, 0x2C)) & 0xFFFF) >= 0x4000) && (temp_s1 < 0x10001U)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = 0x670;
            temp_s1_4 = func_009B3480(M2C_FIELD(arg0, void **, 0), -13465.0f, 0.0f) & 0xFFFF;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = (u16) (temp_s1_4 + func_00BBB7F0(0x1000));
            func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x38C, 0);
            temp_a0_8 = M2C_FIELD(arg0, void **, 0);
            func_0097A6D0(temp_a0_8, M2C_FIELD(temp_a0_8, u16 *, 0x2C));
            goto block_47;
        }
        if (temp_s1 < 0x1001U) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = 0x670;
            temp_s1_5 = func_009B3480(M2C_FIELD(arg0, void **, 0), -13465.0f, 0.0f) & 0xFFFF;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = (u16) (temp_s1_5 + func_00BBB7F0(0x1000));
            func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x38C, 0);
            temp_a0_9 = M2C_FIELD(arg0, void **, 0);
            func_0097A6D0(temp_a0_9, M2C_FIELD(temp_a0_9, u16 *, 0x2C));
block_47:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 8;
        }
    }
}
