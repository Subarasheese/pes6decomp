/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00C9A3A0[];
extern char D_00C9A3A2[];

s32 func_0099D400(s32 arg0) {
    return *(((u8 *)D_00C9A3A0) + arg0) != *(((u8 *)D_00C9A3A2) + arg0);
}
