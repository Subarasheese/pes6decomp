/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D0C270(u8, s32);                     /* extern */
extern char D_00D376E8[];
extern char D_00D3776C[];
extern char D_00D3776D[];
extern char D_00D37772[];
extern char D_00D37773[];

void func_00D0C4A0(s32 arg0) {
    s8 var_v0;
    s8 var_v0_2;

    if ((*(s8 *)D_00D37772) != 0) {
        if ((*(s32 *)D_00D376E8) == 1) {
            if ((*(s32 *)D_00D376E8) == 0) {
                var_v0 = 0;
            } else {
                var_v0 = (*(s8 *)D_00D3776C);
            }
            if (((s64) ((s64) var_v0 << 0x38) >> 0x38) == 1) {
                if ((*(s32 *)D_00D376E8) == 0) {
                    var_v0_2 = 0;
                } else {
                    var_v0_2 = (*(s8 *)D_00D3776D);
                }
                if (var_v0_2 == 0) {
                    func_00D0C270(1U, arg0);
                    return;
                }
                goto block_11;
            }
            goto block_11;
        }
block_11:
        func_00D0C270((*(u8 *)D_00D37773), arg0);
    }
}
