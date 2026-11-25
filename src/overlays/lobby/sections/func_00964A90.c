/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern s32 func_0083F720(s32 slot);
s32 func_00964A90(s32 slot) {
    s8 side = (s8)func_0083F720(slot);
    if (side == 0)
        return 0;
    return side == 1 ? 1 : 2;
}
