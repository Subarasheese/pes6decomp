/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00D12B50(u8 *obj, u8 value) {
    if (obj == NULL) {
        return 0;
    }
    obj[0xDB4] = value;
    return 1;
}
