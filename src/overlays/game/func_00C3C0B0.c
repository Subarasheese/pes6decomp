/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u16 D_00CCB970[];

s32 func_00C3C0B0(s32 arg0) {
    return ((u32)(0) < (D_00CCB970[0] & ((1 << arg0) & 0xFFFF)));
}
