/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00231240(void);
u8 *func_00232510(s32, s32, s32);

u8 func_00236870(s32 a, s32 b, s32 c) {
    if (func_00231240() == 1) {
        return 0;
    }
    return *func_00232510(a, b, c);
}
