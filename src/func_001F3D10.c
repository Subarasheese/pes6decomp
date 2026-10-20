/* compiler: mwcc-3.0.1b210 */
#include "types.h"
s32 func_001F3D10(s32 arg0, u8 arg1) {
    s32 v0;
    if (arg0 != 0) {
        *(u8 *)(arg0 + 2) = arg1;
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}
