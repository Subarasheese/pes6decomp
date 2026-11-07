/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


s32 func_0016CF20(s32);                             /* extern */

s32 func_0016DFA0(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= M2C_FIELD(arg0, s32 *, 0x914))) {
        return 0;
    }
    return func_0016CF20(*(s32 *)((u8 *)arg0 + (arg1 << 2) + 0x99C));
}
