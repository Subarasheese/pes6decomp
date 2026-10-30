/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
M2C_UNK func_001A5E00(M2C_UNK32);                   /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
extern char D_003A85C0[];
extern char D_003A85C4[];
extern char D_003A85C8[];
extern char D_003A85CC[];

s32 func_001FB9A0(s32 arg0) {
    M2C_UNK32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    M2C_UNK32 *var_s0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    temp_v1 = func_009E1C90(2) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        func_009E1D30(2, 0);
        /* fallthrough */
    case 0:
        var_s0 = &sp50;
        var_s1 = 0;
        sp50 = (*(M2C_UNK32 *)D_003A85C0);
        sp54 = (*(f32 *)D_003A85C4);
        sp58 = (*(f32 *)D_003A85C8);
        sp5C = (*(f32 *)D_003A85CC);
        do {
            if (arg0 & (1 << var_s1)) {
                func_001A5E00(*var_s0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 4);
        func_009E1CB0(2);
        /* fallthrough */
    case 1:
        if (func_0017F900() != 0) {
            func_009E1CB0(2);
        case 2:
            var_s2 = 1;
        }
        break;
    }
    return var_s2;
}
