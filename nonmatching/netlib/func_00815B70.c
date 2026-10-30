/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern char D_008A35F0[];

s32 func_00815B70(s32 arg0) {
    if (func_0082C2A0() == 0) {
        return 1;
    }
    if (((void *)D_008A35F0) == NULL) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 4) {
        if ((*(s32 *)D_008A35F0) == 1) {
            M2C_FIELD((arg0 + ((void *)D_008A35F0)), s8 *, 0x418) = 1;
            return 1;
        }
        return 0;
    }
    return 0;
}
