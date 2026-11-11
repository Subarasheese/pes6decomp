/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Team_ResolveSpecialId(s32);
s32 func_00BC45E0(s32 arg0) {
    return (u32) ((Pes6Team_ResolveSpecialId(arg0) & 0xFFFF) - 0xB8) < 2U;
}
