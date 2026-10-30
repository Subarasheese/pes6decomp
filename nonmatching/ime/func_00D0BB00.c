/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_008357B0();                                /* extern */
s64 func_00842870();                                /* extern */
M2C_UNK func_00D11600(s32, M2C_UNK);                /* extern */
extern char D_00D376E8[];
extern char D_00D376F0[];
extern char D_00D37720[];

s32 func_00D0BB00(s64 arg0) {
    s32 var_v1;
    s64 temp_v1;

    if ((*(s32 *)D_00D376F0) == 0) {
        return 0;
    }
    if (func_008357B0() == 1) {
        if ((*(s32 *)D_00D376E8) == 0) {
            var_v1 = 0;
        } else {
            var_v1 = (*(s32 *)D_00D37720);
        }
        if (var_v1 == 0x12) {
            if (((s64) (arg0 << 0x38) >> 0x38) == 1) {
                func_00D11600((*(s32 *)D_00D376F0), 1);
            } else {
                temp_v1 = (s64) (func_00842870() << 0x38) >> 0x38;
                switch (temp_v1) {                  /* irregular */
                case 0:
                    func_00D11600((*(s32 *)D_00D376F0), 0);
                    break;
                case 1:
                    func_00D11600((*(s32 *)D_00D376F0), 0);
                    break;
                case 2:
                    func_00D11600((*(s32 *)D_00D376F0), 1);
                    break;
                default:
                case 4:
                case 3:
                    func_00D11600((*(s32 *)D_00D376F0), 0);
                    break;
                }
            }
        } else {
            func_00D11600(*(s32 *)0xD376F0, 1);
        }
    } else {
        func_00D11600((*(s32 *)D_00D376F0), 0);
    }
    return 1;
}
