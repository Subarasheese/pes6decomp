/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_records.h"

s32 func_0095D7E0(void) {
    u32 value;
    u8 *owner = func_00936B90();
    u8 *p = owner == 0 ? 0 : owner + 0x3f1a4;
    if (!p)
        p = 0;
    value = (p == 0) ? 0 : (u32)(*(s8 *)(p + 0x6e) == 0);
    return value;
}
