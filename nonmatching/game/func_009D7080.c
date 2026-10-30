/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00A9DFF0(void *, s32);
M2C_UNK func_00930240(void *, u16, void *);         /* extern */
M2C_UNK func_00A00960(void *, u16);                 /* extern */

void func_009D7080(void *arg0) {
    f32 temp_f1;
    s32 temp_a1_10;
    s32 temp_a1_11;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_a1_9;
    s32 var_v1;
    u16 temp_a1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a1;
    void *temp_a2;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_a2 = M2C_FIELD(temp_a1, void **, 4);
    temp_f1 = M2C_FIELD(temp_a1, f32 *, 0x38);
    if (!(temp_f1 <= (f32) (M2C_FIELD(temp_a2, u16 *, 8) * 2))) {
        temp_a1_2 = M2C_FIELD(temp_a1, u16 *, 0x30);
        switch (temp_a1_2) {                        /* irregular */
        case 0x26F:
        case 0x26E:
            if (!(temp_f1 < (f32) (M2C_FIELD(temp_a2, u8 *, 2) * 2))) {
                temp_a1_3 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_3 * 0x5E) / 100) + ((u32) (temp_a1_3 * 0x5E) >> 0x1F);
            } else {
                temp_a1_4 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_4 * 0x63) / 100) + ((u32) (temp_a1_4 * 0x63) >> 0x1F);
            }
block_33:
            M2C_FIELD(arg0, s32 *, 0x1C) = var_v1;
            break;
        case 0x272:
            if (!(temp_f1 < (f32) (M2C_FIELD(temp_a2, u8 *, 2) * 2))) {
                temp_a1_5 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_5 * 0x5E) / 100) + ((u32) (temp_a1_5 * 0x5E) >> 0x1F);
            } else {
                temp_a1_6 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_6 * 0x63) / 100) + ((u32) (temp_a1_6 * 0x63) >> 0x1F);
            }
            goto block_33;
        case 0x26A:
        case 0x26B:
            func_00930240(arg0, temp_a1_2, temp_a2);
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            if (M2C_FIELD(temp_a0, f32 *, 0x38) == (f32) (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2)) {
                temp_a1_7 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_7 * 0x5F) / 100) + ((u32) (temp_a1_7 * 0x5F) >> 0x1F);
                goto block_33;
            }
            break;
        case 0x3CF:
        case 0x3CB:
        case 0x3C9:
            M2C_FIELD(arg0, u16 *, 0x38) = func_00A9DFF0(arg0, 0x2D);
            M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) - ((M2C_FIELD(arg0, u16 *, 0x38) * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
            temp_a0_2 = M2C_FIELD(arg0, void **, 4);
            if (!(M2C_FIELD(temp_a0_2, f32 *, 0x38) < (f32) (M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 2) * 2))) {
                temp_a1_8 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_8 * 0x5C) / 100) + ((u32) (temp_a1_8 * 0x5C) >> 0x1F);
                goto block_33;
            }
            break;
        case 0x3C3:
        case 0x3C5:
            M2C_FIELD(arg0, u16 *, 0x38) = func_00A9DFF0(arg0, 0x2D);
            M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) - ((M2C_FIELD(arg0, u16 *, 0x38) * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
            temp_a0_3 = M2C_FIELD(arg0, void **, 4);
            if (!(M2C_FIELD(temp_a0_3, f32 *, 0x38) < (f32) (M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 4), u8 *, 2) * 2))) {
                temp_a1_9 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_9 * 0x5A) / 100) + ((u32) (temp_a1_9 * 0x5A) >> 0x1F);
                goto block_33;
            }
            break;
        case 0x3DD:
        case 0x3DF:
        case 0x3E3:
        case 0x3DA:
        case 0x3D8:
            M2C_FIELD(arg0, u16 *, 0x38) = func_00A9DFF0(arg0, 0x1B);
            M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) - ((M2C_FIELD(arg0, u16 *, 0x38) * ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
            temp_a0_4 = M2C_FIELD(arg0, void **, 4);
            if (!(M2C_FIELD(temp_a0_4, f32 *, 0x38) < (f32) (M2C_FIELD(M2C_FIELD(temp_a0_4, void **, 4), u8 *, 2) * 2))) {
                temp_a1_10 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_10 * 0x5F) / 100) + ((u32) (temp_a1_10 * 0x5F) >> 0x1F);
                goto block_33;
            }
            break;
        default:
            M2C_FIELD(arg0, u16 *, 0x38) = func_00A9DFF0(arg0, 0x2D);
            func_00A00960(arg0, M2C_FIELD(arg0, u16 *, 0x38));
            temp_a0_5 = M2C_FIELD(arg0, void **, 4);
            if (!(M2C_FIELD(temp_a0_5, f32 *, 0x38) < (f32) (M2C_FIELD(M2C_FIELD(temp_a0_5, void **, 4), u8 *, 2) * 2))) {
                temp_a1_11 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_v1 = ((temp_a1_11 * 0x5C) / 100) + ((u32) (temp_a1_11 * 0x5C) >> 0x1F);
                goto block_33;
            }
            break;
        }
        temp_a0_6 = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(temp_a0_6, f32 *, 0x38) <= (f32) (M2C_FIELD(M2C_FIELD(temp_a0_6, void **, 4), u8 *, 2) * 2)) {
            M2C_FIELD(arg0, f32 *, 0xE4) = (f32) (M2C_FIELD(arg0, f32 *, 0xE4) - M2C_FIELD(arg0, f32 *, 0xF4));
            if ((M2C_FIELD(arg0, f32 *, 0xF4) * M2C_FIELD(arg0, f32 *, 0xE4)) < 0.0f) {
                M2C_FIELD(arg0, f32 *, 0xE4) = 0.0f;
            }
        }
    } else {
        func_00A00960((void *) M2C_FIELD(arg0, u16 *, 0x38), (u16) temp_a2);
    }
}
