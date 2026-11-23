/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 func_001D7A20(s32, s32, s32);
extern s32 *D_00A7DED0;
s32 func_009DE770(s32 index) {
    if (D_00A7DED0 == 0) {
        return 0;
    }
    return func_001D7A20(*D_00A7DED0, index, 2);
}
