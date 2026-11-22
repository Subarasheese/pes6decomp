/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008B1469[];

s32 func_008028A0(s32 arg0, s32 arg1) {
    *(((char *)D_008B1469) + (arg0 & 0xFF)) = (s8) arg1;
    return arg1;
}
