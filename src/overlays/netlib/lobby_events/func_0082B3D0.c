/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00862410(s32);
extern char D_008A4398[];
extern char D_008A43B0[];
extern char D_008AB4AC[];
extern char D_008AB4B0[];
extern char D_008AB4B4[];
extern char D_008AB4B8[];
extern char D_008AB4BC[];
extern char D_008AB4C4[];

s32 func_0082B3D0(u32 arg0) {
    if ((*(s8 *)D_008A43B0) == 1) {
        (*(s8 *)D_008A43B0) = 0;
        if ((*(s32 *)D_008A4398) != 0) {
            func_00862410((*(s32 *)D_008A4398));
        }
    }
    switch (arg0) {
    case 1:
        (*(s32 *)D_008AB4AC) = 0;
        return 1;
    case 2:
        (*(s32 *)D_008AB4B0) = 0;
        return 1;
    case 3:
        (*(s32 *)D_008AB4B4) = 0;
        return 1;
    case 4:
        (*(s32 *)D_008AB4B8) = 0;
        return 1;
    case 5:
        (*(s32 *)D_008AB4BC) = 0;
        return 1;
    case 6:
        (*(s32 *)D_008AB4BC) = 0;
        return 1;
    case 8:
        (*(s32 *)D_008AB4C4) = 0;
        return 1;
    default:
        return 1;
    }
}
