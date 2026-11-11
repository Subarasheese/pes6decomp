/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

s32 func_001B29E0();                                /* extern */

s32 func_001B3AF0(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0xC) & 9) == 9) {
        return func_001B29E0();
    }
    return 0;
}
