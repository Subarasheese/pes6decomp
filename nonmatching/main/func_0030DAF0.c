/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00333600(int);
extern char D_005922E9[];
extern char D_00CB3300[];

s16 func_0030DAF0(s32 arg0) {
    if (func_00333600(0x16) != 0) {
        if ((*(u8 *)D_005922E9) != arg0) {
            return 3;
        }
        return 0;
    }
    return M2C_FIELD((((arg0 & 0xFF) * 0x2F4) + (*(s32 *)D_00CB3300)), s16 *, 8);
}
