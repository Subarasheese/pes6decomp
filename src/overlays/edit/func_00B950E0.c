/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00153FD0(s32, s32, s32);
extern char D_00CE35B0[];

s32 func_00B950E0(void) {
    if ((*(s32 *)D_00CE35B0) == 0) {
        (*(s32 *)D_00CE35B0) = func_00153FD0(0xA, 1, 0x11C840);
    }
    return (*(s32 *)D_00CE35B0);
}
