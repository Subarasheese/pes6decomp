/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_001059F8(u32, s32, s32, s32);

s32 func_00106098(void) {
    s32 value1;
    value1 = func_001059F8(0x2200001B, 0, 0, 0);
    if (value1 == 0) {
        return value1;
    } else {
        func_001059F8(0x2200001C, 0, 0, 0);
        return 1;
    }
}
