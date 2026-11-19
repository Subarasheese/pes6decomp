/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u32 D_01201898[];
u32 func_0019E018(u32 arg0, u32 arg1) {
    u32 old = D_01201898[3];
    D_01201898[4] = arg1;
    D_01201898[3] = arg0;
    return old;
}
