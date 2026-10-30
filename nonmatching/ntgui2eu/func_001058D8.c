/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A3220(s32);
extern char D_011B18F0[];

void func_001058D8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001A3220(arg0);
    M2C_FIELD(((void *)D_011B18F0), s32 *, 0xC4) = (s32) ((temp_v0 == 0) ? 0 : arg0);
    M2C_FIELD(((void *)D_011B18F0), s32 *, 0xBC) = temp_v0;
}
