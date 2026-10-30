/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

f32 func_001E4920(M2C_UNK, s8 *);                   /* extern */
s32 func_001E4CC0(M2C_UNK, s8 *, s32 *);            /* extern */
s32 func_001F8760(s8 *, s32);                       /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00D1AA70();                            /* extern */
s32 func_00D1BAC0(s8 *, s32, M2C_UNK, s32);         /* extern */
extern char D_00D20610[];
extern char D_00D395A4[];
extern char D_00D395C8[];
extern char D_00D395D0[];
extern char D_00D395D4[];
extern char D_00D395E6[];
extern char D_00D39640[];
extern char D_00D39AAC[];

s32 func_00D181E0(void) {
    s32 sp98;
    s32 sp9C;
    f32 temp_f0;
    f32 temp_f0_3;
    s32 temp_f0_2;
    s32 temp_f0_4;
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    s8 *var_s0_2;
    s8 *var_s2_2;
    s8 *var_s3;
    s8 temp_v1;
    s8 temp_v1_2;

    var_s0 = 0;
    if (((s32) (*(s32 *)D_00D39AAC) >> 3) & 3) {

    } else {
        if ((((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3E) >> 0x3F) != 0) && (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3C) >> 0x3F) == 0)) {
            if (((*(s32 *)D_00D395D0) != 0) && ((*(s32 *)D_00D395D4) != 0)) {
                temp_v0 = func_00D1BAC0(((void *)D_00D39640), (s32) (*(f32 *)D_00D395C8), 0, (*(s32 *)D_00D395D4));
                var_a1 = 0;
                var_s0_2 = ((void *)D_00D39640);
                if (temp_v0 < 0) {
                    var_s0_2 = ((void *)D_00D20610);
                } else {
loop_12:
                    temp_v1 = *var_s0_2;
                    if (temp_v1 != 0) {
                        if (((((s64) ((s64) temp_v1 << 0x38) >> 0x38) & 0xC0) != 0x80) && (var_a1 += 1, ((temp_v0 < var_a1) != 0))) {

                        } else {
                            var_s0_2 += 1;
                            goto loop_12;
                        }
                    }
                }
                sp9C = 0;
                var_s2 = (*(s32 *)D_00D395D0);
                var_s4 = 0;
loop_17:
                if (var_s2 > 0) {
                    temp_s1 = func_001E4CC0(0x17, var_s0_2, &sp9C) & 0xFF;
                    temp_f0 = func_001E4920(0x17, var_s0_2);
                    var_s0_2 = &var_s0_2[temp_s1];
                    var_s2 -= 1;
                    temp_f0_2 = (s32) ((f32) sp9C + temp_f0);
                    sp9C = temp_f0_2;
                    var_s4 += temp_f0_2;
                    goto loop_17;
                }
                temp_v0_2 = func_00D1BAC0(((void *)D_00D39640), (s32) (*(f32 *)D_00D395C8), 0, (*(s32 *)D_00D395D4) - 1);
                var_a1_2 = 0;
                var_s3 = ((void *)D_00D39640);
                if (temp_v0_2 < 0) {
                    var_s3 = ((void *)D_00D20610);
                } else {
loop_26:
                    temp_v1_2 = *var_s3;
                    if (temp_v1_2 != 0) {
                        if (((((s64) ((s64) temp_v1_2 << 0x38) >> 0x38) & 0xC0) != 0x80) && (var_a1_2 += 1, ((temp_v0_2 < var_a1_2) != 0))) {

                        } else {
                            var_s3 += 1;
                            goto loop_26;
                        }
                    }
                }
                temp_s6 = func_001F8760(var_s3, var_a1_2);
                var_s5 = 0;
loop_37:
                if (temp_s6 >= var_s5) {
                    sp98 = 0;
                    var_s1 = var_s5;
                    var_s2_2 = var_s3;
                    var_s0_3 = 0;
loop_32:
                    if (var_s1 > 0) {
                        temp_s7 = func_001E4CC0(0x17, var_s2_2, &sp98) & 0xFF;
                        temp_f0_3 = func_001E4920(0x17, var_s2_2);
                        var_s2_2 = &var_s2_2[temp_s7];
                        var_s1 -= 1;
                        temp_f0_4 = (s32) ((f32) sp98 + temp_f0_3);
                        sp98 = temp_f0_4;
                        var_s0_3 += temp_f0_4;
                        goto loop_32;
                    }
                    if (var_s0_3 < var_s4) {
                        var_s5 += 1;
                        goto loop_37;
                    }
                }
                (*(s32 *)D_00D395D0) = var_s5;
            }
            temp_v1_3 = (*(s32 *)D_00D395D4) - 1;
            (*(s32 *)D_00D395D4) = temp_v1_3;
            if (temp_v1_3 < 0) {
                (*(s32 *)D_00D395D4) = 0;
                if ((*(s8 *)D_00D395E6) == 0) {
                    func_0026E840(0x8C008005);
                    (*(s8 *)D_00D395E6) = 1;
                    var_s0 = -1;
                } else {
                    var_s0 = 0;
                }
            } else {
                func_0026E840(0x8C008006);
                var_s0 = -1;
            }
        }
        func_00D1AA70();
    }
    return var_s0;
}
