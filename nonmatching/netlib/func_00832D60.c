/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00835700();                                /* extern */
extern char D_008AB4D0[];
extern char D_008AB4D4[];

s32 func_00832D60(void) {
    u32 temp_v0;

    temp_v0 = func_00835700();
    if (temp_v0 != 0) {
        if ((*(u32 *)D_008AB4D0) != 0) {
            if ((u32) (*(u32 *)D_008AB4D0) < temp_v0) {
                return 0;
            }
            if ((*(s8 *)D_008AB4D4) != 1) {
                return (u32) ((*(u32 *)D_008AB4D0) - temp_v0) < 0x12DU;
            }
            return 0;
        }
        goto block_4;
    }
block_4:
    return 0;
}
