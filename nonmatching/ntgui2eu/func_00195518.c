/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00195408(s32, s32, s32);
extern char D_011FD510[];

s32 func_00195518(s32 arg0, s32 arg1) {
    if (M2C_FIELD((((void *)D_011FD510) + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) == 0) {
        return 0;
    }
    return func_00195408(arg0, arg1, 0xFFF);
}
