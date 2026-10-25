/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00333710(void *obj, s32 index) {
    if (index == 0xFF) {
        return 13;
    }
    return ((s32 *)((u8 *)obj + 0x10))[index];
}
