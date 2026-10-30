/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_00271E40();                            /* extern */
M2C_UNK func_009B6810();                            /* extern */
M2C_UNK func_00C74990();                            /* extern */
extern char D_00591BCE[];
extern char D_00591DB5[];
extern char D_00591DD5[];

s32 func_008F6140(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((*(u8 *)D_00591DD5) == 0) {
        func_00271E40();
        func_009B6810();
        if ((*(s8 *)D_00591DB5) == 0) {
            func_00204D90();
            if ((*(u8 *)D_00591BCE) == 1) {
                func_00204D90();
            }
        }
        func_00C74990();
    } else {
        var_s0 = 1;
        (*(u8 *)D_00591DD5) = 0;
    }
    return var_s0;
}
