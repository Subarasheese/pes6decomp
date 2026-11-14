/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CCAE40[];

u8 func_00C17E10(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 < 2) {
        temp_v1 = arg1 & 0xFF;
        if (temp_v1 < 0x20) {
            return *(u8 *)(((u8 *)D_00CCAE40) + (temp_v0 << 5) + temp_v1);
        }
    }
    return 0xFFU;
}
