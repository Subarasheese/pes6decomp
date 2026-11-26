/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern s32 D_008A59B0[];
s32 func_0082C8E0(s32 event, s32 value) {
    if (event < 0 || event >= 187)
        return 0;
    D_008A59B0[event] = value;
    return 1;
}
