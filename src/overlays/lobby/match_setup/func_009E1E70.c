/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 func_001D7A20(s32, s32, s32);
extern s32 *D_00A7DEF8;
s32 func_009E1E70(s32 index) {
    if (D_00A7DEF8 == 0) {
        return 0;
    }
    return func_001D7A20(*D_00A7DEF8, index, 4);
}
