/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B8470(s32);
extern char D_00A7DB28[];

s32 func_0099D030(s64 arg0) {
    s64 temp_v1;

    temp_v1 = (s64) (arg0 << 0x38) >> 0x38;
    if (temp_v1 != (*(s8 *)D_00A7DB28)) {
        if (temp_v1 != 1) {
            func_001B8470(0);
        } else {
            func_001B8470(1);
        }
        (*(s8 *)D_00A7DB28) = (s8) arg0;
        return 1;
    }
    return 1;
}
