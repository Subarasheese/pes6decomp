/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00121430(s32, M2C_UNK *);              /* extern */
s32 func_001C80F0(M2C_UNK *);                       /* extern */
M2C_UNK func_001DF4F0(s32, M2C_UNK);                /* extern */
s32 func_001DFA30(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_001F8660(s32, s32);                    /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
s32 func_0096DB90(s32);                             /* extern */
extern char D_009C03D8[];
extern char D_009C03F0[];
extern char D_009C0430[];

s32 func_009732F0(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_s4;

    if (arg1 == 0) {
        return 0;
    }
    temp_s3 = arg1 & 1;
    var_s4 = 0;
    if (temp_s3 != 0) {
        var_s4 = func_001C80F0(((void *)D_009C03D8)) + 1;
    }
    temp_s2 = arg1 & 2;
    if (temp_s2 != 0) {
        var_s4 += func_001C80F0(((void *)D_009C03F0)) + 1;
    }
    temp_s1 = arg1 & 4;
    if (temp_s1 != 0) {
        var_s4 += func_001C80F0(((void *)D_009C0430)) + 1;
    }
    if (var_s4 != 0) {
        temp_s5 = func_0096DB90(var_s4);
        temp_s4 = func_0096DB90(var_s4 * 3);
        if (temp_s3 != 0) {
            func_00121430(temp_s5, ((void *)D_009C03D8));
        }
        if (temp_s2 != 0) {
            func_00121430(temp_s5, ((void *)D_009C03F0));
        }
        if (temp_s1 != 0) {
            func_00121430(temp_s5, ((void *)D_009C0430));
        }
        func_001F8660(temp_s5, temp_s4);
        temp_v0 = func_001DFA30(arg0, 0, temp_s4);
        func_001DF4F0(temp_v0, 0);
        func_0096DA00(temp_s5);
        func_0096DA00(temp_s4);
        return temp_v0;
    }
    return 0;
}
