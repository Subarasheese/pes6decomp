/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00121430(s8 *, M2C_UNK *);             /* extern */
s32 func_001C80F0(s8 *);                            /* extern */
M2C_UNK func_001DF820(s32, s8 *);                   /* extern */
f32 func_001E4920(M2C_UNK, s8 *);                   /* extern */
s32 func_001E4CC0(M2C_UNK, s8 *, s32 *);            /* extern */
s32 func_001F8760(s8 *);                            /* extern */
M2C_UNK func_00D16370(s32, s32);                    /* extern */
M2C_UNK func_00D1BE80(s8 *, s8 *, s32);             /* extern */
extern s32 D_003EB360;
extern char D_00D20008[];
extern char D_00D200F8[];
extern char D_00D20610[];
extern char D_00D395A4[];
extern char D_00D395C8[];
extern char D_00D395D8[];
extern char D_00D39640[];
extern char D_00D39AA4[];
extern char D_00D39AAC[];

void func_00D1AFC0(void) {
    s8 sp70;
    s32 sp878;
    s32 sp87C;
    f32 temp_f0;
    f32 temp_f0_3;
    s32 temp_f0_2;
    s32 temp_f0_4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 var_a1;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    s8 *var_s0;
    s8 *var_s0_5;
    s8 *var_s2;
    s8 *var_s2_2;
    s8 *var_s3;
    s8 temp_v0;

    func_00D16370((*(s32 *)D_00D39AA4), (*(s32 *)D_00D39AAC));
    if (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3E) >> 0x3F) != 0) {
        var_s0 = ((void *)D_00D39640);
        temp_s1 = D_003EB360;
        if (((void *)D_00D39640) == NULL) {
            var_s0 = ((void *)D_00D20008);
        }
        if (func_001C80F0(var_s0) == 0) {
            var_s0 = ((void *)D_00D20008);
        }
        func_001DF820(temp_s1, var_s0);
        return;
    }
    var_s3 = ((void *)D_00D39640);
    var_a1 = 0;
    if ((*(s32 *)D_00D395D8) < 0) {
        var_s3 = ((void *)D_00D20610);
    } else {
loop_12:
        temp_v0 = *var_s3;
        if (temp_v0 != 0) {
            if (((((s64) ((s64) temp_v0 << 0x38) >> 0x38) & 0xC0) != 0x80) && (var_a1 += 1, (((*(s32 *)D_00D395D8) < var_a1) != 0))) {

            } else {
                var_s3 += 1;
                goto loop_12;
            }
        }
    }
    if (!(((s32) (*(s32 *)D_00D39AAC) >> 7) & 1)) {
        var_s4 = 0;
loop_23:
        sp87C = 0;
        var_s1 = var_s4;
        var_s2 = var_s3;
        var_s0_2 = 0;
loop_25:
        if (var_s1 > 0) {
            temp_s5 = func_001E4CC0(0x17, var_s2, &sp87C) & 0xFF;
            temp_f0 = func_001E4920(0x17, var_s2);
            var_s2 = &var_s2[temp_s5];
            var_s1 -= 1;
            temp_f0_2 = (s32) ((f32) sp87C + temp_f0);
            sp87C = temp_f0_2;
            var_s0_2 += temp_f0_2;
            goto loop_25;
        }
        if ((f32) var_s0_2 < (*(f32 *)D_00D395C8)) {
            var_s4 += 1;
            if (var_s4 < func_001F8760(var_s3)) {
                goto loop_23;
            }
        }
        sp878 = 0;
        var_s1_2 = var_s4;
        var_s2_2 = var_s3;
        var_s0_3 = 0;
loop_33:
        if (var_s1_2 > 0) {
            temp_s5_2 = func_001E4CC0(0x17, var_s2_2, &sp878) & 0xFF;
            temp_f0_3 = func_001E4920(0x17, var_s2_2);
            var_s2_2 = &var_s2_2[temp_s5_2];
            var_s1_2 -= 1;
            temp_f0_4 = (s32) ((f32) sp878 + temp_f0_3);
            sp878 = temp_f0_4;
            var_s0_3 += temp_f0_4;
            goto loop_33;
        }
        if (!((f32) var_s0_3 <= (*(f32 *)D_00D395C8))) {
            var_s4 -= 1;
        }
        func_00D1BE80(&sp70, var_s3, var_s4);
    } else {
        sp70 = 0;
        var_s0_4 = 0;
loop_20:
        if (var_s0_4 < func_001F8760(var_s3)) {
            func_00121430(&sp70, ((void *)D_00D200F8));
            var_s0_4 += 1;
            goto loop_20;
        }
    }
    temp_s1_2 = D_003EB360;
    var_s0_5 = &sp70;
    if (var_s0_5 == NULL) {
        var_s0_5 = ((void *)D_00D20008);
    }
    if (func_001C80F0(var_s0_5) == 0) {
        var_s0_5 = ((void *)D_00D20008);
    }
    func_001DF820(temp_s1_2, var_s0_5);
}
