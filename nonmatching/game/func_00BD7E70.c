/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
f32 func_001CD9E0(f32);                             /* extern */
M2C_UNK func_002075B0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_009B3070(u16, M2C_UNK);                    /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s16 func_009B3480(void *, f32, f32);                /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B35E10(void *, s32 *, s32 *);        /* extern */
s32 func_00BA8740(u8);                              /* extern */
s32 func_00BA8B40(void *, u8);                      /* extern */
M2C_UNK func_00BBA080(void *);                      /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
s32 func_00BC2B50(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_00BD74E0(void *);                          /* extern */
M2C_UNK func_00BD8510(void *, s32 *, s32 *);        /* extern */
s32 func_00BD93C0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00592370[];
extern char D_00CBCAD1[];

void func_00BD7E70(void *arg0) {
    f32 var_f12;
    s16 var_v1_2;
    s32 *temp_s0_2;
    s32 *temp_s1;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_v1;
    void **temp_s0;
    void **var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_2;

    temp_s0 = func_00B2A420(func_00BF6270());
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = 0;
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x10) != 0) && (func_00BD74E0(arg0) != 0)) {
        func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x4A1, 0, 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x69;
        return;
    }
    if (func_00BD93C0(arg0) == 0) {
        var_v0 = func_00BBB8C0(3);
        switch (var_v0) {                           /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_v0 = M2C_FIELD(arg0, s32 *, 4);
            var_v1 = 0x17;
            break;
        case 0:                                     /* switch 2 */
            var_v1 = 0x11;
            break;
        default:                                    /* switch 2 */
        case 2:                                     /* switch 2 */
            var_v0 = M2C_FIELD(arg0, s32 *, 4);
            var_v1 = 9;
            break;
        }
    } else {
        var_v0 = func_00BBB8C0(2);
        var_v1 = 1;
        switch (var_v0) {                           /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            break;
        default:                                    /* switch 1 */
        case 1:                                     /* switch 1 */
            var_v0 = M2C_FIELD(arg0, s32 *, 4);
            var_v1 = 0x21;
            break;
        }
    }
    M2C_FIELD(var_v0, s8 *, 0x4C) = var_v1;
    if (func_00BC2B50(*temp_s0, 1, 0) == 0) {
        if (func_00BC2B50(*temp_s0, 1, 1) != 0) {
            goto block_23;
        }
        goto block_32;
    }
block_23:
    if ((M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 9) && ((*(u8 *)D_00CBCAD1) != 0x15) && (func_00BA8740(0x39U) < 3)) {
        if ((func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), 0x4000) & 0xFFFF) < 0x4000) {
            var_v1_2 = 0xC000;
        } else {
            var_v1_2 = 0x4000;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = var_v1_2;
        M2C_FIELD(M2C_FIELD(arg0, s32 *, 4), u8 *, 0x4C) = 0x39U;
        func_00BBA080(arg0);
        return;
    }
block_32:
    if (func_00BA8740(M2C_FIELD(M2C_FIELD(arg0, s32 *, 4), u8 *, 0x4C)) == 0) {
        if (func_00BA8B40(arg0, M2C_FIELD(M2C_FIELD(arg0, s32 *, 4), u8 *, 0x4C)) != 0) {
            temp_v0 = M2C_FIELD(arg0, void **, 0);
            temp_s0_2 = temp_v0 + 0x70;
            temp_s1 = temp_v0 + 0x6C;
            func_00B2A420(func_00BF6270());
            if ((*(u8 *)D_00592370) == 0) {
                func_00B35E10(arg0, temp_s1, temp_s0_2);
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x10) != 0) {
                    func_00BD8510(arg0, temp_s1, temp_s0_2);
                }
                var_s1 = func_00B2A420(1U);
                var_s0 = 0;
loop_54:
                if ((arg0 != var_s1) && (temp_v0_2 = M2C_FIELD(arg0, void **, 0), ((func_009B33A0(*var_s1, (s32) M2C_FIELD(temp_v0_2, f32 *, 0x6C), (s32) M2C_FIELD(temp_v0_2, f32 *, 0x70)) < 0x24001U) != 0))) {
                    var_v0_2 = 0;
                } else {
                    var_s0 += 1;
                    var_s1 += 8;
                    if (var_s0 >= 0x16) {
                        var_v0_2 = 1;
                    } else {
                        goto loop_54;
                    }
                }
                if (var_v0_2 == 0) {
                    temp_a0 = M2C_FIELD(arg0, void **, 0);
                    temp_v0_3 = (func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70)) & 0xFFFF) + 0x4000;
                    temp_s0_3 = temp_v0_3 & 0xFFFF;
                    if ((temp_v0_3 < 0) && (temp_s0_3 != 0)) {

                    }
                    temp_v1 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_v1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x6C) + (f32) func_00BBB990(temp_s0_3 & 0xFFFF, 0x500));
                    temp_v0_4 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_v0_4, f32 *, 0x70) = (f32) (M2C_FIELD(temp_v0_4, f32 *, 0x70) + (f32) func_00BBB9C0(temp_s0_3 & 0xFFFF, 0x500));
                }
            } else {
                *temp_s1 = 0;
                *temp_s0_2 = 0x46086400;
            }
            temp_a0_2 = M2C_FIELD(arg0, void **, 0);
            temp_v0_5 = func_009B33A0(temp_a0_2, (s32) M2C_FIELD(temp_a0_2, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0_2, f32 *, 0x70));
            if (temp_v0_5 < 0) {
                var_f12 = 2.0f * (f32) (((u32) temp_v0_5 >> 1) | (temp_v0_5 & 1));
            } else {
                var_f12 = (f32) temp_v0_5;
            }
            if ((s32) func_001CD9E0(var_f12) < 0x200) {
                temp_s0_4 = func_00BBB8C0(0x10000) & 0xFFFF;
                temp_v1_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v1_2, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_v1_2, f32 *, 0x6C) + (f32) func_00BBB990(temp_s0_4, 0x500));
                temp_v0_6 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v0_6, f32 *, 0x70) = (f32) (M2C_FIELD(temp_v0_6, f32 *, 0x70) + (f32) func_00BBB9C0(temp_s0_4, 0x500));
                temp_v0_7 = M2C_FIELD(arg0, void **, 0);
                func_00BD8510(arg0, temp_v0_7 + 0x6C, temp_v0_7 + 0x70);
            }
            temp_a0_3 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B3480(temp_a0_3, M2C_FIELD(temp_a0_3, f32 *, 0x6C), M2C_FIELD(temp_a0_3, f32 *, 0x70));
            func_00BBA080(arg0);
            return;
        }
        goto block_35;
    }
block_35:
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x3C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x67;
}
