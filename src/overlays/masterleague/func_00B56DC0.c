/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_009612B0(s32);
s32 func_00B52C70(s32, s32);
extern u8 func_00B54300(void);

s32 func_00B56DC0(void) {
    if (func_00B52C70(func_00B54300() & 0xFF, 0) == 0) {
        return 0;
    } else {
        if ((func_009612B0(0) == 0) && (func_009612B0(2) == 0)) {
            return 0;
        }
        return 1;
    }
}
