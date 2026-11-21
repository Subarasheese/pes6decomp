/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

u32 func_00914390(void *arg0, s32 arg1) {
    if (((0 <= arg1)) && ((4 > arg1))) {
        return (u32)(M2C_FIELD(arg0, s32 *, 0x208) & (1 << arg1)) >> arg1;
    }
    return 0U;
}
