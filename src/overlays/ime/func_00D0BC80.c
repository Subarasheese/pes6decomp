/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00D114F0(s32, s32);
extern char D_00D376E8[];
extern char D_00D376F0[];
extern char D_00D37720[];

s32 func_00D0BC80(s32 arg0) {
    u32 var_v0;

    if ((*(s32 *)D_00D376E8) == 0) {
        var_v0 = 0;
    } else {
        var_v0 = (*(u32 *)D_00D37720);
    }
    switch (var_v0) {
    case 15:
        return 1;
    default:
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
        return func_00D114F0((*(s32 *)D_00D376F0), arg0);
    }
}
