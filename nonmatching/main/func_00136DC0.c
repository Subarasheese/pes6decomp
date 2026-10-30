/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK FlushCache(M2C_UNK);                     /* extern */
s32 func_0010AD30(s32, s32, s32);                   /* extern */
s32 func_00114FE0(s32, s32, M2C_UNK, s32 *);        /* extern */

s32 func_00136DC0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp4C;
    s32 temp_v0;
    s32 var_v0;

    if (arg1 & 0x3F) {
        return -1;
    }
    FlushCache(0);
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        temp_v0 = func_00114FE0(arg2 >> 0xB, arg1, 1, &sp4C) << 0xB;
        if (sp4C != 0) {
            var_v0 = -1;
            goto block_5;
        }
        return temp_v0;
    }
    var_v0 = func_0010AD30(M2C_FIELD(arg0, s32 *, 0x30), arg1, arg2);
block_5:
    return var_v0;
}
