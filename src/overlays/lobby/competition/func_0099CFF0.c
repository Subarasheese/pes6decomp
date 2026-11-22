/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002F4D80(s32, s32);

extern char D_00A7DB20[];

s32 func_0099CFF0(s32 arg0) {
    func_002F4D80((*(s32 *)D_00A7DB20), arg0 & 0xFF);
    return 1;
}
