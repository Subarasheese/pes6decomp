/* compiler: mwcc-3.0.1b210 */
#include "types.h"
s32 func_002F9320(s32 arg0, s32 arg1) {
    if (arg0 == 0)
        return 0;
    return *(s32 *)((arg1 << 2) + arg0 + 0x4);
}
