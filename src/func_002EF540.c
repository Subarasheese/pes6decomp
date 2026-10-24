/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002F07A0(u8 *, u8 *, u8 *, s32, s32, s32, s32, s32);

s32 func_002EF540(u8 *obj) {
    if (obj != NULL) {
        return func_002F07A0(obj, obj + 0x18, obj + 0x18, 0xFF, 0, 0x66, 0, 1);
    }
    return 1;
}
