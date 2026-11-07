/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
s32 func_002F14C0(u8 *arg0, u8 arg1) {
    if (*(u8 *)arg0 != 0) {
        *(u8 *)(arg0 + 3) = arg1;
        return 1;
    }
    return 0;
}
