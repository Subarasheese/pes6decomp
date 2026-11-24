/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_00CBCDE1[];
s32 func_00345490(s32 *kindOut) {
    s32 kind;
    switch (D_00CBCDE1[0]) {
    case 0:
    case 1:
        kind = 1;
        break;
    case 2:
        kind = 2;
        break;
    case 3:
        kind = 3;
        break;
    case 4:
        kind = 4;
        break;
    default:
        return 0;
    }
    *kindOut = kind;
    return 1;
}
