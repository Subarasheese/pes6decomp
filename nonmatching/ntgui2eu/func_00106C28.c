/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011B1A40[];

void func_00106C28(s32 arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(((void *)D_011B1A40), s32 *, 4) == 0) {
        M2C_FIELD(((void *)D_011B1A40), s32 *, 0x10) = arg2;
        M2C_FIELD(((void *)D_011B1A40), s32 *, 0) = arg0;
        M2C_FIELD(((void *)D_011B1A40), s32 *, 0x14) = arg1;
        M2C_FIELD(((void *)D_011B1A40), s32 *, 4) = 1;
    }
}
