/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BDC580(void);
extern u8 func_00BDC570(void);
s32 func_009B3070(u16, u16);                        /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
void **func_00B2A420(u8);                           /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
extern char D_00591BE4[];

void func_00BDD220(void *arg0) {
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;
    s32 temp_f1;
    s32 temp_f1_2;
    s32 temp_f1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_a1;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u8 temp_a0_3;
    u8 temp_a0_5;
    u8 temp_a0_7;
    void **temp_s0;
    void **temp_s1;
    void **temp_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a0_6;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;

    temp_s1 = func_00B2A420(func_00BDC580());
    temp_s0 = func_00B2A420(func_00BDC570());
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 0x30);
    temp_s2 = func_00B2A420(0U);
    switch (temp_a1) {                              /* switch 1; irregular */
    case 0x489:                                     /* switch 1 */
    case 0x1BF:                                     /* switch 1 */
        if (func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70)) < 0x40001U) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0xFF;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 6;
        } else {
            temp_a0_2 = M2C_FIELD(arg0, void **, 0);
            temp_a1_2 = *temp_s1;
            temp_f1 = (s32) (M2C_FIELD(temp_a0_2, f32 *, 0xE0) - M2C_FIELD(temp_a1_2, f32 *, 0xE0));
            temp_f0 = (s32) (M2C_FIELD(temp_a0_2, f32 *, 0xE8) - M2C_FIELD(temp_a1_2, f32 *, 0xE8));
            if (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) < 0x400001) {
                if ((func_009B3070(M2C_FIELD(temp_a0_2, u16 *, 0x26), M2C_FIELD(temp_a1_2, u16 *, 0x26)) & 0xFFFF) >= 0x4000) {
                    temp_v0 = M2C_FIELD(*temp_s1, u16 *, 0x26) + 0x3000;
                    temp_v1 = temp_v0 & 0xFFFF;
                    if ((temp_v0 < 0) && (temp_v1 != 0)) {

                    }
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = temp_v1;
                    temp_s0_2 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_s0_2, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s0_2, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s0_2, u16 *, 0x2C), 0x500));
                    temp_s0_3 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_s0_3, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s0_3, u16 *, 0x2C), 0x500));
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 3U;
                    temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
                    switch (temp_a0_3) {            /* switch 3; irregular */
                    case 3:                         /* switch 3 */
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 9;
                        break;
                    case 2:                         /* switch 3 */
                    case 1:                         /* switch 3 */
                    case 0:                         /* switch 3 */
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 7;
                        break;
                    }
                } else {
                    goto block_13;
                }
            } else {
block_13:
                temp_a0_4 = M2C_FIELD(arg0, void **, 0);
                temp_a1_3 = *temp_s0;
                temp_f1_2 = (s32) (M2C_FIELD(temp_a0_4, f32 *, 0xE0) - M2C_FIELD(temp_a1_3, f32 *, 0xE0));
                temp_f0_2 = (s32) (M2C_FIELD(temp_a0_4, f32 *, 0xE8) - M2C_FIELD(temp_a1_3, f32 *, 0xE8));
                if (((temp_f1_2 * temp_f1_2) + (temp_f0_2 * temp_f0_2)) < 0x400001) {
                    if ((func_009B3070(M2C_FIELD(temp_a0_4, u16 *, 0x26), M2C_FIELD(temp_a1_3, u16 *, 0x26)) & 0xFFFF) >= 0x4000) {
                        temp_v0_2 = M2C_FIELD(*temp_s0, u16 *, 0x26) + 0x3000;
                        temp_v1_2 = temp_v0_2 & 0xFFFF;
                        if ((temp_v0_2 < 0) && (temp_v1_2 != 0)) {

                        }
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = temp_v1_2;
                        temp_s0_4 = M2C_FIELD(arg0, void **, 0);
                        M2C_FIELD(temp_s0_4, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s0_4, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s0_4, u16 *, 0x2C), 0x500));
                        temp_s0_5 = M2C_FIELD(arg0, void **, 0);
                        M2C_FIELD(temp_s0_5, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0_5, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s0_5, u16 *, 0x2C), 0x500));
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 3U;
                        temp_a0_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
                        switch (temp_a0_5) {        /* switch 4; irregular */
                        case 3:                     /* switch 4 */
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 9;
                            break;
                        case 2:                     /* switch 4 */
                        case 1:                     /* switch 4 */
                        case 0:                     /* switch 4 */
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 7;
                            break;
                        }
                    } else {
                        goto block_16;
                    }
                } else {
block_16:
                    temp_a0_6 = M2C_FIELD(arg0, void **, 0);
                    temp_a1_4 = *temp_s2;
                    temp_f1_3 = (s32) (M2C_FIELD(temp_a0_6, f32 *, 0xE0) - M2C_FIELD(temp_a1_4, f32 *, 0xE0));
                    temp_f0_3 = (s32) (M2C_FIELD(temp_a0_6, f32 *, 0xE8) - M2C_FIELD(temp_a1_4, f32 *, 0xE8));
                    if ((((temp_f1_3 * temp_f1_3) + (temp_f0_3 * temp_f0_3)) < 0x400001) && ((func_009B3070(M2C_FIELD(temp_a0_6, u16 *, 0x26), M2C_FIELD(temp_a1_4, u16 *, 0x26)) & 0xFFFF) >= 0x4000)) {
                        temp_v0_3 = M2C_FIELD(*temp_s2, u16 *, 0x26) + 0x3000;
                        temp_v1_3 = temp_v0_3 & 0xFFFF;
                        if ((temp_v0_3 < 0) && (temp_v1_3 != 0)) {

                        }
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = temp_v1_3;
                        temp_s0_6 = M2C_FIELD(arg0, void **, 0);
                        M2C_FIELD(temp_s0_6, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s0_6, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s0_6, u16 *, 0x2C), 0x500));
                        temp_s0_7 = M2C_FIELD(arg0, void **, 0);
                        M2C_FIELD(temp_s0_7, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0_7, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s0_7, u16 *, 0x2C), 0x500));
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C) = 3U;
                        temp_a0_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
                        switch (temp_a0_7) {        /* switch 2; irregular */
                        case 3:                     /* switch 2 */
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 9;
                            break;
                        case 2:                     /* switch 2 */
                        case 1:                     /* switch 2 */
                        case 0:                     /* switch 2 */
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 7;
                            break;
                        }
                    } else {
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = (s8) ((*(u8 *)D_00591BE4) * (func_00BBB8C0(2) + 1));
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 6;
                    }
                }
            }
        }
        break;
    case 0x48E:                                     /* switch 1 */
    case 0x38C:                                     /* switch 1 */
        M2C_FIELD(temp_a0, s16 *, 0x18) = 5;
        func_00BD4040(arg0, 1);
        break;
    case 0x40A:                                     /* switch 1 */
    case 0x2BD:                                     /* switch 1 */
        M2C_FIELD(temp_a0, s16 *, 0x18) = 5;
        func_00BD4040(arg0, 3);
        break;
    }
}
