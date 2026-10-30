/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void **func_00B2A420(u8);                           /* extern */
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_00591E57[];
extern char D_00591F24[];
extern char D_005922EA[];

s32 func_00BF6800(void) {
    if (((*(s32 *)D_00591E14) == ((u8) (*(u8 *)D_00591BE4) >> 1)) && ((s32) (*(u16 *)D_005922EA) <= 0)) {
        if ((*(u8 *)D_00591F24) != 6) {
            goto block_3;
        }
        if (M2C_FIELD(M2C_FIELD(*func_00B2A420((*(u8 *)D_00591E57)), void **, 4), u16 *, 0x30) == 0x4A3) {
            return 1;
        }
block_3:
        return 0;
    }
    return 0;
}
