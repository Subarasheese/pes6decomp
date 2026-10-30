/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00835700();                                /* extern */
extern char D_008AB4D0[];

s32 func_00832DD0(void) {
    s32 temp_v0;

    temp_v0 = func_00835700();
    if (temp_v0 != 0) {
        if ((*(s32 *)D_008AB4D0) != 0) {
            return (u32) ((*(s32 *)D_008AB4D0) - temp_v0) < 0x12DU;
        }
        goto block_4;
    }
block_4:
    return 0;
}
