/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001D4ED0(u8 *arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return *(s32 *)*(u32 *)(*(u8 **)(arg0 + 0xC) + 8);
}
