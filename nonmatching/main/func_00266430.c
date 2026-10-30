/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_00266C70(u16, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00266ED0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_002673B0(M2C_UNK *);                   /* extern */
M2C_UNK func_002674F0(M2C_UNK *, s32, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00268280(u16, M2C_UNK *);              /* extern */
M2C_UNK func_002CB4D0(M2C_UNK);                     /* extern */
s32 func_002F81E0(s32, M2C_UNK);                    /* extern */
extern char D_003AB128[];
extern char D_003AB12A[];
extern u8 D_003E9E88;
extern u8 D_003E9E89;
extern char D_0058D460[];
extern char D_0058D630[];
extern char D_00591BB0[];
extern char D_00591BB2[];

s32 func_00266430(void) {
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_s0;
    u16 temp_s0_2;
    u16 temp_s0_3;
    u16 temp_s2_4;

    var_s0 = 0;
    if ((*(u16 *)D_00591BB0) != (*(u16 *)D_003AB128)) {
        var_v0 = 0;
    } else {
        var_s1 = 0;
loop_3:
        if (func_001454C0(var_s1 + 0x26D4) != 0) {
            var_s1 += 1;
            if (var_s1 >= 2) {
                var_v0 = 1;
            } else {
                goto loop_3;
            }
        } else {
            var_v0 = 0;
        }
    }
    if (var_v0 != 0) {
        if ((*(u16 *)D_00591BB2) == (*(u16 *)D_003AB12A)) {
            var_s1_2 = 0;
loop_14:
            if (func_001454C0(var_s1_2 + 0x26D6) != 0) {
                var_s1_2 += 1;
                if (var_s1_2 >= 2) {
                    var_v0_2 = 1;
                } else {
                    goto loop_14;
                }
            } else {
                var_v0_2 = 0;
            }
        } else {
            var_v0_2 = 0;
        }
        if (var_v0_2 == 0) {
            goto block_21;
        }
    } else {
block_21:
        temp_s0 = (*(u16 *)D_00591BB0);
        temp_s2 = (s32) (D_003E9E88 & 8) >> 3;
        func_002CB4D0(0x14);
        temp_s1 = func_002F81E0(temp_s2, 0);
        func_00268280(temp_s0, ((void *)D_0058D630));
        func_002674F0(((void *)D_0058D630), temp_s1, ((void *)D_0058D460), 0);
        func_00266ED0(temp_s2, 0, 0);
        func_00266C70(temp_s0, 0, 0);
        func_002673B0(((void *)D_0058D460));
        (*(u16 *)D_003AB128) = temp_s0;
        temp_s0_2 = (*(u16 *)D_00591BB2);
        temp_s2_2 = (s32) (D_003E9E89 & 8) >> 3;
        func_002CB4D0(0x14);
        temp_s1_2 = func_002F81E0(temp_s2_2, 0);
        func_00268280(temp_s0_2, ((void *)D_0058D630));
        func_002674F0(((void *)D_0058D630), temp_s1_2, ((void *)D_0058D460), 0);
        func_00266ED0(temp_s2_2, 0, 1);
        func_00266C70(temp_s0_2, 1, 0);
        func_002673B0(((void *)D_0058D460));
        (*(u16 *)D_003AB12A) = temp_s0_2;
        temp_s0_3 = (*(u16 *)D_00591BB0);
        temp_s2_3 = D_003E9E88 & 1;
        func_002CB4D0(0x14);
        temp_s1_3 = func_002F81E0(temp_s2_3, 1);
        func_00268280(temp_s0_3, ((void *)D_0058D630));
        func_002674F0(((void *)D_0058D630), temp_s1_3, ((void *)D_0058D460), 0);
        func_00266ED0(temp_s2_3, 1, 0);
        func_00266C70(temp_s0_3, 0, 1);
        func_002673B0(((void *)D_0058D460));
        (*(u16 *)D_003AB128) = temp_s0_3;
        temp_s2_4 = (*(u16 *)D_00591BB2);
        temp_s1_4 = D_003E9E89 & 1;
        func_002CB4D0(0x14);
        temp_s0_4 = func_002F81E0(temp_s1_4, 1);
        func_00268280(temp_s2_4, ((void *)D_0058D630));
        func_002674F0(((void *)D_0058D630), temp_s0_4, ((void *)D_0058D460), 0);
        func_00266ED0(temp_s1_4, 1, 1);
        func_00266C70(temp_s2_4, 1, 1);
        func_002673B0(((void *)D_0058D460));
        var_s0 = 1;
        (*(u16 *)D_003AB12A) = temp_s2_4;
    }
    return var_s0;
}
