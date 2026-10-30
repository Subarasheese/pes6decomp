/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011B5CA8[];

void func_0010C5D8(s32 arg0, s32 arg1) {
    M2C_FIELD(((void *)D_011B5CA8), s32 *, 0x84) = (s32) (arg1 * 0x10);
    M2C_FIELD(((void *)D_011B5CA8), s32 *, 0x80) = (s32) (arg0 * 0x10);
}
