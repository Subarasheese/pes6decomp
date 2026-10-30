/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
M2C_UNK func_009BFD40(s32 *);                       /* extern */
s32 func_009C00B0(s32 *);                           /* extern */
extern s32 *D_00A7DD40;

s32 func_009BFC80(void) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    if (D_00A7DD40 == NULL) {
        return 4;
    }
    temp_v1 = *D_00A7DD40;
    var_s0 = 2;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_s1 = func_009C00B0(D_00A7DD40);
        break;
    case 3:
        if (D_00A7DD40 == NULL) {
            var_s1 = 2;
        } else {
            if (func_0081EC20(0x1000) != 0) {
                func_0026E840(0x84008401);
                var_s0 = 3;
            }
            var_s1 = var_s0;
        }
        break;
    case 2:
        func_009BFD40(D_00A7DD40);
        break;
    }
    return var_s1;
}
