/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0090A8A0(s32);
extern char D_0092F0F0[];

s32 func_0090B230(s32 arg0) {
    if (func_0090A8A0(arg0) != 0) {
        return 1;
    } else {
        if (!((*(s32 *)D_0092F0F0) & (1 << (arg0 & 0xFF)))) {
            return 0;
        }
        return 2;
    }
}
