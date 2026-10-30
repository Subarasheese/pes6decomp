/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019C640(s32, s32);                        /* extern */
s32 func_0019C888(s32);                             /* extern */
extern char D_005CAB48[];

s32 func_0019B6E8(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) (arg0 - 1) < 2U) {
        if ((*(s32 *)D_005CAB48) == 0) {
            if (func_0019C888(arg1) != 0) {
                (*(s32 *)D_005CAB48) = 1;
                goto block_4;
            }
            goto block_5;
        }
block_4:
        return func_0019C640(arg1, arg2);
    }
block_5:
    return -1;
}
