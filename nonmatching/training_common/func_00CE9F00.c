/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EB2D0;
extern s32 D_003EB2D4;
extern s32 D_003EB2D8;

s32 func_00CE9F00(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 >= 0x10) {
        return 0;
    }
    switch (arg0) {                                 /* irregular */
    case 0:
        M2C_FIELD((D_003EB2D8 + (arg1 * 0xC)), s32 *, 8) = arg2;
block_19:
        return 1;
    case 2:
        M2C_FIELD((D_003EB2D0 + (arg1 * 0xC)), s32 *, 8) = arg2;
        goto block_19;
    case 1:
        M2C_FIELD((D_003EB2D4 + (arg1 * 0xC)), s32 *, 8) = arg2;
        goto block_19;
    default:
        return 0;
    }
}
