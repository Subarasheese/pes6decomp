/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u32 D_00CBCB10[];
void func_00B36400(u32 slot, s32 enabled) {
    u32 mask = 1u << slot;
    if (enabled)
        D_00CBCB10[0] |= mask;
    else
        D_00CBCB10[0] &= ~mask;
}
