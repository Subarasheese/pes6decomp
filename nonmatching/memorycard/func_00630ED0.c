/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00623430();                                /* extern */
M2C_UNK func_00655370(s32);                         /* extern */
M2C_UNK func_006553A0(M2C_UNK);                     /* extern */
s32 func_00655660();                                /* extern */
M2C_UNK func_006556F0();                            /* extern */
M2C_UNK func_00655760();                            /* extern */
M2C_UNK func_006557C0();                            /* extern */
M2C_UNK func_006557D0();                            /* extern */
M2C_UNK func_00655A90(s32);                         /* extern */
M2C_UNK func_00655D20(s32, s32);                    /* extern */
M2C_UNK func_00655E80(s32, M2C_UNK);                /* extern */
extern char D_00659FC0[];
extern char D_00659FC4[];
extern char D_0065A020[];

void func_00630ED0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_s3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 var_s1;
    s32 var_s4;
    s32 var_s4_2;

    temp_s0 = func_00623430();
    if (arg2 == 0) {
        func_006553A0(0);
        func_006557D0();
        func_006556F0();
    } else {
        func_006557D0();
        func_00655E80((*(s32 *)D_0065A020), 0);
        var_s4 = 0;
        var_s3 = ((void *)D_00659FC0);
        do {
            func_00655D20(M2C_FIELD(var_s3, s32 *, 8), var_s4);
            var_s4 += 1;
            var_s3 += 4;
        } while (var_s4 < 9);
        func_00655A90(8);
        temp_s3 = temp_s0 & 2;
        if ((temp_s3 == 0) || (arg1 == 1)) {
            var_s4_2 = 5;
            do {
                func_00655A90(var_s4_2);
                var_s4_2 += 1;
            } while (var_s4_2 < 8);
            if (temp_s3 == 0) {
                func_00655D20((*(s32 *)D_00659FC4), 4);
            }
        }
        temp_s0_2 = temp_s0 & 1;
        if ((temp_s0_2 == 0) || (arg1 == 1)) {
            var_s1 = 1;
            do {
                func_00655A90(var_s1);
                var_s1 += 1;
            } while (var_s1 < 4);
            if (temp_s0_2 == 0) {
                func_00655D20((*(s32 *)D_00659FC0), 0);
            }
        }
        func_00655370(arg0 & 0xFF);
        func_006553A0(1);
        func_00655760();
        if (func_00655660() == 1) {
            func_006557C0();
        }
    }
    func_00655660();
}
