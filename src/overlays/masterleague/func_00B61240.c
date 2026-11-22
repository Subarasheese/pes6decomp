/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00B61240(s32 arg0) {
    if (((arg0 & 0xFF) < 4)) {
        return ((arg0 & 0xFF) << 4);
    } else {
        if (((arg0 & 0xFF) < 5)) {
            return 0x40;
        } else {
            return 0x48;
        }
    }
}
