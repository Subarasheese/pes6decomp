/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00B611F0(s32 arg0) {
    if (((arg0 & 0xFF) < 4)) {
        return 0x10;
    } else {
        if (((arg0 & 0xFF) < 5)) {
            return 8;
        } else {
            return 4;
        }
    }
}
