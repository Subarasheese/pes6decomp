/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008B146B[];

s32 func_00802880(s32 arg0, s32 arg1) {
    *(((char *)D_008B146B) + (arg0 & 0xFF)) = (s8) arg1;
    return arg1;
}
