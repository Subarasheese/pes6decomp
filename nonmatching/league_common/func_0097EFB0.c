/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];

s32 func_0097EFB0(s32 arg0, s32 arg1) {
    s32 temp_v1;

    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 14:
        temp_v1 = arg0 & 0xFF;
        if ((temp_v1 != 6) && (temp_v1 != 4) && (temp_v1 != 3)) {
            return 0;
        }
block_14:
        return ((s32) (arg1 & 0xFF) % 10) & 0xFF;
    case 1:
        if ((arg0 & 0xFF) != 2) {
            return 0;
        }
        goto block_14;
    default:
        return 0;
    }
}
