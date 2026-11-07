/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_003389F0(void *obj, s32 index, s32 value) {
    if (obj == NULL) {
        return 0;
    }
    ((s32 *)((u8 *)obj + 0x2C))[index] = value;
    return 1;
}
