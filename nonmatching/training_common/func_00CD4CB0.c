/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
M2C_UNK func_001A5E00(M2C_UNK32);                   /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */
extern char D_00CF9610[];
extern char D_00CF9614[];
extern char D_00CF9618[];
extern char D_00CF961C[];

s32 func_00CD4CB0(s32 arg0, s32 arg1) {
    M2C_UNK32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    M2C_UNK32 *var_s0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        func_00264790(arg0, 0);
        /* fallthrough */
    case 0:
        var_s0 = &sp60;
        var_s1 = 0;
        sp60 = (*(M2C_UNK32 *)D_00CF9610);
        sp64 = (*(f32 *)D_00CF9614);
        sp68 = (*(f32 *)D_00CF9618);
        sp6C = (*(f32 *)D_00CF961C);
        do {
            if (arg1 & (1 << var_s1)) {
                func_001A5E00(*var_s0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 4);
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        if (func_0017F900() != 0) {
            func_002646E0(arg0);
        case 2:
            func_002646E0(arg0);
        case 3:
            var_s2 = 1;
        }
        break;
    }
    func_002648E0(arg0);
    return var_s2;
}
