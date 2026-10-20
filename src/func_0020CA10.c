/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0020C4B0(s32, s32);                        /* extern */
extern char D_00537AE0[];
extern char D_00537AE4[];

s32 func_0020CA10(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        return func_0020C4B0((*(s32 *)D_00537AE0), arg0);
    case 1:
        return func_0020C4B0((*(s32 *)D_00537AE4), arg0);
    default:
        return 0;
    }
}
