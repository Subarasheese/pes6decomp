/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6Team_ResolveSpecialId(s32);
extern s32 func_002D7920(s32);

s32 func_00BC4590(s32 arg0) {
    if ((u32)((Pes6Team_ResolveSpecialId(arg0) & 0xFFFF) - 0xB8) < 2U) {
        return 1;
    }
    return func_002D7920(arg0) == 0;
}
