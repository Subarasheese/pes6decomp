/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00339470(u8 **out, u8 *obj, s32 row, s32 col) {
    if (row == 0xFF) {
        *out = NULL;
        return 0;
    }
    *out = obj + row * 16 + col * 8 + 0x40;
    return 1;
}
