/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D15E00();                            /* extern */
extern char D_00D39AC0[];
extern char D_00D39AC4[];
extern char D_00D39AC8[];
extern char D_00D39ACC[];

s32 func_00D15D80(s32 arg0, s32 arg1) {
    switch (arg0) {                                 /* irregular */
    case 0:
        (*(s32 *)D_00D39AC4) = arg1;
        break;
    case 1:
        (*(s32 *)D_00D39AC8) = arg1;
        break;
    case 2:
        (*(s32 *)D_00D39ACC) = arg1;
        break;
    case 4:
        (*(s32 *)D_00D39AC0) = arg1;
        break;
    default:
        func_00D15E00();
        break;
    }
    return 0;
}
