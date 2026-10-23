/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0020A9F0(s32, s32);
extern char D_005379F0[];
extern char D_005379F4[];

void func_0020A5D0(void) {
    if (((*(s32 *)D_005379F0) != 0) && ((*(s32 *)D_005379F4) != 0) && ((*(s32 *)D_005379F0) & 1) && ((*(s32 *)D_005379F4) & 1)) {
        func_0020A9F0((*(s32 *)D_005379F4), (*(s32 *)D_005379F0));
    }
}
