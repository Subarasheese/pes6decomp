/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B85B0();                            /* extern */
M2C_UNK func_009B8660(M2C_UNK);                     /* extern */
M2C_UNK func_009B86B0(M2C_UNK);                     /* extern */
extern char D_00A7DC18[];

s32 func_009B9930(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((*(s32 *)D_00A7DC18) != 4) {
        if ((u32) ((*(s32 *)D_00A7DC18) - 6) >= 3U) {
            var_s0 = 7;
        } else {
            goto block_4;
        }
    } else {
block_4:
        func_009B86B0(1);
        func_009B8660(1);
        func_009B85B0();
        (*(s32 *)D_00A7DC18) = 5;
    }
    return var_s0;
}
