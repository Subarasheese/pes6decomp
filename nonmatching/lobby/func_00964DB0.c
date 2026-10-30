/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00950AA0(s32, s32);                        /* extern */
s32 func_00950D30(s32);                             /* extern */
s32 func_009523D0(s32);                             /* extern */
s64 func_00952870(s32);                             /* extern */
extern s32 D_003EAC90;

s64 func_00964DB0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00950AA0(func_00950D30(D_003EAC90), arg0);
    if (temp_v0 != 0) {
        return (s64) (func_00952870(func_009523D0(temp_v0) & 0xFFFF) << 0x30) >> 0x30;
    }
    return 0;
}
