/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_009B0FD0(void);
extern s32 func_0095ED20(void);
s32 func_009B0B60(s32);

s32 func_009B0B10(void) {
    if (func_009B0FD0() == 0) {
        return 0;
    }
    if (func_0095ED20() == 0) {
        return 0;
    }
    func_009B0B60(-1);
    return 0;
}
