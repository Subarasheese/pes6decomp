/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3480(void *, f32, f32);
extern s32 func_00207D10(void *);
extern s32 func_00207D80(void *, s32);
extern s32 func_009B3070(s32, s32);
extern void * func_00B2A420(u32);
extern s32 func_009B3220(s32, s32, s32);
extern s32 func_009B33A0(void *, s32, s32);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
M2C_UNK func_0027A600(void *, M2C_UNK);             /* extern */
s32 func_00A0C770(void *, M2C_UNK);                 /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
M2C_UNK func_00B35120(void **);                     /* extern */
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BD3BE0(void **, M2C_UNK, void *);    /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00C32E60(void **);                     /* extern */
M2C_UNK func_00C33750(void **);                     /* extern */
M2C_UNK func_00C339D0(void **);                     /* extern */
M2C_UNK func_00C33B40(void **);                     /* extern */
M2C_UNK func_00C33E20(void **);                     /* extern */
M2C_UNK func_00C342C0(void **);                     /* extern */
M2C_UNK func_00C34650(void **);                     /* extern */
M2C_UNK func_00C34C90(void **);                     /* extern */
M2C_UNK func_00C37A50(void **);                     /* extern */
M2C_UNK func_00C37AF0(void **);                     /* extern */
M2C_UNK func_00C37C40(void **);                     /* extern */
M2C_UNK func_00C37F30(void **);                     /* extern */
M2C_UNK func_00C37FF0(void **);                     /* extern */
M2C_UNK func_00C380E0(void **);                     /* extern */
M2C_UNK func_00C38200(void **);                     /* extern */
M2C_UNK func_00C391E0(void **);                     /* extern */

void func_00C33120(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    u16 temp_a1;
    u16 temp_v0_5;
    u16 temp_v0_7;
    u16 temp_v1;
    u16 temp_v1_2;
    void **temp_s0;
    void **temp_v0_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_6;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x18);
    temp_s0 = func_00B2A420((u32) M2C_FIELD(arg0, u8 *, 0));
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x0:                                       /* switch 1 */
        func_00C34C90(temp_s0);
        return;
    case 0x1:                                       /* switch 1 */
        func_00C34650(temp_s0);
        break;
    case 0x2:                                       /* switch 1 */
        func_00C342C0(temp_s0);
        break;
    case 0x3:                                       /* switch 1 */
        func_00C32E60(temp_s0);
        temp_a0 = *temp_s0;
        temp_s1 = func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70)) & 0xFFFF;
        temp_v0 = func_009B3070((s32) M2C_FIELD(*temp_s0, u16 *, 0x26), temp_s1) & 0xFFFF;
        if ((temp_v0 >= 0x1001) && (temp_v0 < 0x6000)) {
            temp_s1_2 = *temp_s0;
            temp_s2 = func_009B3220(temp_s1, (s32) M2C_FIELD(*temp_s0, u16 *, 0x26), 0x100) & 0xFFFF;
            M2C_FIELD(temp_s1_2, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s1_2, f32 *, 0xE0) + (f32) func_00BBB990(temp_s2, 0x800));
            temp_s1_3 = *temp_s0;
            M2C_FIELD(temp_s1_3, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s1_3, f32 *, 0xE8) + (f32) func_00BBB9C0(temp_s2, 0x800));
        }
        temp_v0_2 = *temp_s0;
        func_00BD3CF0(temp_s0, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
        break;
    case 0x4:                                       /* switch 1 */
        func_00B2ACF0(temp_s0);
        if (func_00A0C770(*temp_s0, 0x100) != 0) {
            M2C_FIELD(*temp_s0, s32 *, 0x1C) = 0;
        }
        if (func_00207D10(M2C_FIELD(*temp_s0, void **, 4)) != 0) {
            func_00208610(M2C_FIELD(*temp_s0, void **, 4));
            M2C_FIELD(*temp_s0, s16 *, 0x18) = 0;
        } else {
            return;
        }
        break;
    case 0x10:                                      /* switch 1 */
        func_00C33E20(temp_s0);
        break;
    case 0x11:                                      /* switch 1 */
        func_00C33B40(temp_s0);
        break;
    case 0x12:                                      /* switch 1 */
        func_00C339D0(temp_s0);
        break;
    case 0x13:                                      /* switch 1 */
        temp_v0_3 = func_00B2A420(0U);
        temp_v0_4 = *temp_v0_3;
        if (func_009B33A0(*temp_s0, (s32) M2C_FIELD(temp_v0_4, f32 *, 0xE0), (s32) M2C_FIELD(temp_v0_4, f32 *, 0xE8)) >= 0x100001U) {
            M2C_FIELD(*temp_s0, f32 *, 0x6C) = (f32) M2C_FIELD(*temp_v0_3, f32 *, 0xE0);
            M2C_FIELD(*temp_s0, f32 *, 0x70) = (f32) M2C_FIELD(*temp_v0_3, f32 *, 0xE8);
        } else {
            func_00C32E60(temp_s0);
        }
        func_00B2A420(0U);
        func_00B2ACF0(temp_s0);
        func_00B35120(temp_s0);
        temp_a0_2 = *temp_s0;
        temp_a2 = M2C_FIELD(temp_a0_2, void **, 4);
        temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x30);
        switch (temp_a1) {                          /* switch 2; irregular */
        case 0x451:                                 /* switch 2 */
            temp_v0_5 = func_009B3220(func_009B3480(temp_a0_2, M2C_FIELD(temp_a0_2, f32 *, 0x6C), M2C_FIELD(temp_a0_2, f32 *, 0x70)) & 0xFFFF, (s32) M2C_FIELD(*temp_s0, u16 *, 0x26), 0xB0);
            M2C_FIELD(*temp_s0, u16 *, 0x2C) = temp_v0_5;
            M2C_FIELD(*temp_s0, u16 *, 0x28) = temp_v0_5;
            M2C_FIELD(*temp_s0, u16 *, 0x26) = temp_v0_5;
            temp_a0_3 = M2C_FIELD(*temp_s0, void **, 4);
            if (func_00207D80(temp_a0_3, M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 4), u8 *, 2) * 2) != 0) {
                temp_a0_4 = M2C_FIELD(*temp_s0, void **, 4);
                func_00209A00(temp_a0_4, M2C_FIELD(temp_a0_4, u16 *, 0x30), (M2C_FIELD(M2C_FIELD(temp_a0_4, void **, 4), u8 *, 1) * 2) & 0xFFFF);
            }
            break;
        case 0x44F:                                 /* switch 2 */
        case 0x481:                                 /* switch 2 */
            if (func_00207D10(temp_a2) != 0) {
                func_00208610(M2C_FIELD(*temp_s0, void **, 4));
            }
            break;
        }
        break;
    case 0x20:                                      /* switch 1 */
        func_00C38200(temp_s0);
        break;
    case 0x22:                                      /* switch 1 */
        func_00C37FF0(temp_s0);
        break;
    case 0x21:                                      /* switch 1 */
        func_00C380E0(temp_s0);
        break;
    case 0x23:                                      /* switch 1 */
        func_00C37F30(temp_s0);
        break;
    case 0x24:                                      /* switch 1 */
        func_00C37C40(temp_s0);
        break;
    case 0x25:                                      /* switch 1 */
        func_00C37AF0(temp_s0);
        break;
    case 0x26:                                      /* switch 1 */
        func_00C37A50(temp_s0);
        break;
    case 0xF0:                                      /* switch 1 */
        func_00C33750(temp_s0);
        break;
    case 0xF1:                                      /* switch 1 */
        temp_a2_2 = *temp_s0;
        M2C_FIELD(temp_a2_2, f32 *, 0x6C) = 0.0f;
        M2C_FIELD(*temp_s0, f32 *, 0x70) = 15712.199f;
        func_00BD3BE0(temp_s0, 1, temp_a2_2);
        temp_v0_6 = *temp_s0;
        func_00BD3CF0(temp_s0, M2C_FIELD(temp_v0_6, f32 *, 0x6C), M2C_FIELD(temp_v0_6, f32 *, 0x70));
        func_0027A600(*temp_s0, 0);
        break;
    case 0xF2:                                      /* switch 1 */
        M2C_FIELD(*temp_s0, f32 *, 0x6C) = 0.0f;
        M2C_FIELD(*temp_s0, f32 *, 0x70) = 15712.199f;
        func_00B2A420(0U);
        func_00B2ACF0(temp_s0);
        func_00B35120(temp_s0);
        temp_a0_5 = *temp_s0;
        temp_a1_2 = M2C_FIELD(temp_a0_5, void **, 4);
        temp_v1_2 = M2C_FIELD(temp_a1_2, u16 *, 0x30);
        switch (temp_v1_2) {                        /* switch 3; irregular */
        case 0x451:                                 /* switch 3 */
            temp_v0_7 = func_009B3220(func_009B3480(temp_a0_5, M2C_FIELD(temp_a0_5, f32 *, 0x6C), M2C_FIELD(temp_a0_5, f32 *, 0x70)) & 0xFFFF, (s32) M2C_FIELD(*temp_s0, u16 *, 0x26), 0xB0);
            M2C_FIELD(*temp_s0, u16 *, 0x2C) = temp_v0_7;
            M2C_FIELD(*temp_s0, u16 *, 0x28) = temp_v0_7;
            M2C_FIELD(*temp_s0, u16 *, 0x26) = temp_v0_7;
            temp_a0_6 = M2C_FIELD(*temp_s0, void **, 4);
            if (func_00207D80(temp_a0_6, M2C_FIELD(M2C_FIELD(temp_a0_6, void **, 4), u8 *, 2) * 2) != 0) {
                temp_a0_7 = M2C_FIELD(*temp_s0, void **, 4);
                func_00209A00(temp_a0_7, M2C_FIELD(temp_a0_7, u16 *, 0x30), (M2C_FIELD(M2C_FIELD(temp_a0_7, void **, 4), u8 *, 1) * 2) & 0xFFFF);
            }
            break;
        case 0x44F:                                 /* switch 3 */
        case 0x481:                                 /* switch 3 */
            if (func_00207D10(temp_a1_2) != 0) {
                func_00208610(M2C_FIELD(*temp_s0, void **, 4));
            }
            break;
        }
        func_0027A600(*temp_s0, 0);
        break;
    case 0x33:                                      /* switch 1 */
    case 0x32:                                      /* switch 1 */
    case 0x31:                                      /* switch 1 */
    case 0x30:                                      /* switch 1 */
        func_00C391E0(temp_s0);
        break;
    }
}
