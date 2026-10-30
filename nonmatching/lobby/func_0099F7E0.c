/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BD6E0(s32);                         /* extern */
M2C_UNK func_009BD980(s32, M2C_UNK);                /* extern */
extern char D_00A7DB70[];
extern char D_00A7DB78[];

s32 func_0099F7E0(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((*(s32 *)D_00A7DB70) != 4) {
        if ((*(s32 *)D_00A7DB70) != 0xA) {
            var_s0 = 6;
        } else {
            goto block_4;
        }
    } else {
block_4:
        func_009BD6E0((*(s32 *)D_00A7DB78));
        func_009BD980((*(s32 *)D_00A7DB78), 1);
        (*(s32 *)D_00A7DB70) = 5;
    }
    return var_s0;
}
