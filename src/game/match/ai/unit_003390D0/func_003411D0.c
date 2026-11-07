/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_003411D0(u8 *obj) {
    if (obj == NULL) {
        return 0;
    }
    if (obj[6] & 1) {
        return 0;
    }
    if (*(s32 *)obj != 1) {
        return 0;
    }
    return obj[0x21] == 4;
}
