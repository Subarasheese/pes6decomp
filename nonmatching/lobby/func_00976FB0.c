/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */
M2C_UNK func_00976E50(s32);                         /* extern */
M2C_UNK func_009B1A60(M2C_UNK);                     /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009B7510();                            /* extern */
M2C_UNK func_009E84C0(s32);                         /* extern */
M2C_UNK func_009E84E0(s32);                         /* extern */
s32 func_009E8540(s32);                             /* extern */
extern char D_00A68D40[];

s32 func_00976FB0(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_00976E50(arg0);
        break;
    case 0:
        func_009B7510();
        func_009B40A0(0);
        func_009B1A60(0);
        func_009717C0(1);
        break;
    case 1:
        if (func_0017F900() != 0) {
            func_009717C0(2);
        }
        break;
    case 3:
        temp_s1 = (*(s32 *)D_00A68D40);
        if (func_00969B90() != 0) {
            func_009E84C0(temp_s1);
        }
        if (func_009E8540(temp_s1) != 0) {
            func_009717C0(4);
        }
        break;
    case 4:
        if ((*(s32 *)D_00A68D40) == 0) {
            var_s0 = 1;
        } else {
            func_009E84E0((*(s32 *)D_00A68D40));
            var_s0 = 1;
            (*(s32 *)D_00A68D40) = 0;
        }
        break;
    }
    func_00971770();
    return var_s0;
}
