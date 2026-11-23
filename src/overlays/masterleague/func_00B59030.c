/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 func_00B56910(s32);
extern s32 func_00B569A0(void);
s32 func_00B59030(s32 selection) {
    if ((((s8)(func_00B569A0() & 0xFF)) == 0) && (((s8)(func_00B56910(selection) & 0xFF)) == 1)) {
        return 1;
    }
    return 0;
}
