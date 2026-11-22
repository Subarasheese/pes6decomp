/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008AB4AC[];
extern char D_008AB4B0[];
extern char D_008AB4B4[];
extern char D_008AB4B8[];
extern char D_008AB4BC[];
extern char D_008AB4C0[];
extern char D_008AB4C4[];

s32 func_0082B290(s32 arg0) {
    switch (arg0) {
    case 1:
        return (*(s32 *)D_008AB4AC);
    case 2:
        return (*(s32 *)D_008AB4B0);
    case 3:
        return (*(s32 *)D_008AB4B4);
    case 4:
        return (*(s32 *)D_008AB4B8);
    case 5:
        return (*(s32 *)D_008AB4C0);
    case 6:
        return (*(s32 *)D_008AB4BC);
    case 8:
        return (*(s32 *)D_008AB4C4);
    default:
        return -0x96;
    }
}
