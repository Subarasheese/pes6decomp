/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099F900(M2C_UNK);                     /* extern */
M2C_UNK func_009BEA30(s32, s32);                    /* extern */
extern char D_00A7DB70[];
extern char D_00A7DB78[];

s32 func_0099F850(void) {
    if ((*(s32 *)D_00A7DB78) == 0) {
        return 1;
    }
    switch ((*(s32 *)D_00A7DB70)) {                           /* irregular */
    case 11:
    case 12:
        break;
    default:
        if ((u32) ((*(s32 *)D_00A7DB70) - 8) < 2U) {
        case 5:
            func_009BEA30((*(s32 *)D_00A7DB78), (*(s32 *)D_00A7DB70));
        } else {
            (*(s32 *)D_00A7DB70) = 0xB;
        }
        break;
    }
    func_0099F900(0);
    return 0;
}
