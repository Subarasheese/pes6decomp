/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_003FB790[];
s32 func_00103E38(s32 arg0, void *arg1);
s32 func_001329A0(s32 arg0, s32 arg1) {
    return func_00103E38(arg0, D_003FB790 + (arg1 << 4) + 0x4F0);
}
