/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00338A20(void *obj, s32 value, s32 index) {
    if (obj == NULL) {
        return 0;
    }
    if (index >= 8) {
        return 0;
    }
    ((s32 *)((u8 *)obj + 0x3C))[index] = value;
    return 1;
}
