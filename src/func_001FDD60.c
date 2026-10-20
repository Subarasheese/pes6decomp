/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s8 D_003E9994;
extern s8 D_003E9998;
extern s8 D_003E99B8;
extern char D_00592743[];

s32 func_001FDD60(s8 arg0) {
    if (((*(u8 *)D_00592743) != 6) && ((*(u8 *)D_00592743) != 7)) {
        return 0;
    }
    D_003E9998 = arg0;
    D_003E99B8 = 0;
    D_003E9994 = 0;
    return 0;
}
