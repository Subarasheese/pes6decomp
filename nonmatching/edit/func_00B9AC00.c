/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B9FBB0();                                /* extern */
M2C_UNK func_00B9FBC0(s32);                         /* extern */
M2C_UNK func_00BC65E0(M2C_UNK);                     /* extern */
extern s32 D_003EAF58;
extern char D_00CB5A50[];
extern char D_00CB5A54[];

s32 func_00B9AC00(void) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;

    var_s0 = 0;
    switch (D_003EAF58) {                           /* irregular */
    case 0:
        var_s1 = (*(s32 *)D_00CB5A50);
        temp_s2 = (*(s32 *)D_00CB5A54);
        func_00BC65E0(0xB);
        var_s3 = 0;
        if (temp_s2 > 0) {
            do {
                func_00B9FBC0(var_s1);
                var_s3 += 1;
                var_s1 += 0xC;
            } while (var_s3 < temp_s2);
        }
        D_003EAF58 += 1;
        /* fallthrough */
    case 1:
        if (func_00B9FBB0() != 0) {
            D_003EAF58 = 0;
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
