/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern u8 func_00BF6270(void);
extern s32 func_00207D10(void *);
M2C_UNK func_00207780(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
s32 func_009B3070(u16, s16);                        /* extern */
M2C_UNK func_009B33F0(void *, s32, void *);         /* extern */
s16 func_009B3480(void *, f32, f32);                /* extern */
s32 *func_00B2A420(u8);                             /* extern */
M2C_UNK func_00B2ACF0(void *);                      /* extern */
M2C_UNK func_00BBA080(void *);                      /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
M2C_UNK func_00BD8380(void *, void *, void *);      /* extern */
extern void *Pes6Ball_Current;

void func_00BBD9A0(void *arg0) {
    s16 temp_s0_2;
    s32 *temp_s2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v1;
    s8 var_v1_2;
    u16 temp_a0_3;
    u16 temp_s0;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a2;
    void *temp_s1_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_s2 = func_00B2A420(M2C_FIELD(((M2C_FIELD(temp_a0, u8 *, 0x13) * 0xB) + temp_a0), u8 *, 0x1B4));
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    temp_s1 = M2C_FIELD(temp_v0, s32 *, 0x1C);
    temp_s0 = M2C_FIELD(temp_v0, u16 *, 0x28);
    func_00B2ACF0(arg0);
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), f32 *, 0x38) < 16.0f) {
        M2C_FIELD(temp_v1, s32 *, 0x1C) = temp_s1;
        temp_v0_2 = M2C_FIELD(arg0, void **, 0);
        temp_v0_3 = M2C_FIELD(temp_v0_2, s32 *, 0x1C);
        var_v1 = temp_v0_3 >> 3;
        if (temp_v0_3 < 0) {
            var_v1 = (s32) (temp_v0_3 + 7) >> 3;
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x1C) - var_v1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x28) = temp_s0;
    }
    temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    switch (temp_v1_2) {                            /* switch 1; irregular */
    case 0x32:                                      /* switch 1 */
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x62) != 0) {
            temp_a0_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(temp_a0_2, 0.0f, M2C_FIELD(temp_a0_2, f32 *, 0xE8));
        }
    default:                                        /* switch 1 */
block_11:
        if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) == 0) {

        } else {
            func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
            temp_a2 = M2C_FIELD(arg0, void **, 0);
            temp_a0_3 = M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), u16 *, 0x30);
            switch (temp_a0_3) {                    /* switch 2; irregular */
            case 0x490:                             /* switch 2 */
            case 0x48F:                             /* switch 2 */
            case 0x48E:                             /* switch 2 */
            case 0x38C:                             /* switch 2 */
                func_00BD8380(arg0, temp_a2 + 0x6C, temp_a2 + 0x70);
                temp_a0_4 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(temp_a0_4, M2C_FIELD(temp_a0_4, f32 *, 0x6C), M2C_FIELD(temp_a0_4, f32 *, 0x70));
                func_00BD3BA0(arg0, 0, 1);
                func_00BD4040(arg0, 1);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x65;
                return;
            case 0x489:                             /* switch 2 */
            case 0x0:                               /* switch 2 */
            case 0x1BF:                             /* switch 2 */
                func_009B33F0(temp_a2, *temp_s2, temp_a2);
                temp_a0_5 = M2C_FIELD(arg0, void **, 0);
                temp_s0_2 = func_009B3480(temp_a0_5, 0.0f, M2C_FIELD(temp_a0_5, f32 *, 0xE8)) & 0xFFFF;
                temp_s1_2 = func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), temp_s0_2) & 0xFFFF;
                if ((temp_s1_2 < 0x4001) && (func_00BBB8C0(3) != 0)) {
                    temp_a0_6 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(temp_a0_6, 0.0f, M2C_FIELD(temp_a0_6, f32 *, 0xE8));
                    temp_v0_4 = func_00BBB8C0(3);
                    switch (temp_v0_4) {            /* switch 3; irregular */
                    case 0:                         /* switch 3 */
                        var_v1_2 = 0x26;
                        break;
                    case 1:                         /* switch 3 */
                        var_v1_2 = 0x27;
                        break;
                    default:                        /* switch 3 */
                    case 2:                         /* switch 3 */
                        var_v1_2 = 0xB;
                        break;
                    }
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1_2;
                    func_00BBA080(arg0);
                } else if ((func_00BBB8C0(3) == 0) && (temp_s1_2 < 0x2001) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 9) && (temp_s1_3 = M2C_FIELD(arg0, void **, 0), (((u32) M2C_FIELD(((func_00BF6270() * 4) + temp_s1_3), u32 *, 0x158) < 0x04000000U) != 0))) {
                    M2C_FIELD(temp_s1_3, s16 *, 0x2C) = temp_s0_2;
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 0x28U;
                    func_00BBA080(arg0);
                } else {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = 0;
                    func_00207780(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x489, 0, 6);
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x67;
                }
                break;
                return;
            }
        }
        break;
    case 0x35:                                      /* switch 1 */
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x2A) != 0) {
            temp_a0_7 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(temp_a0_7, 0.0f, M2C_FIELD(temp_a0_7, f32 *, 0xE8));
        }
        goto block_11;
    case 0x36:                                      /* switch 1 */
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x76) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = 0;
            func_00207780(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x489, 0, 6);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x67;
            return;
        }
        goto block_11;
    }
}
