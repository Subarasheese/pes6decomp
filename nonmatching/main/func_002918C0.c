/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];

void func_002918C0(s32 arg0) {
    if (((void *)D_005A2330) != NULL) {
        if (arg0 >= 4) {
            return;
        }
        M2C_FIELD(((void *)D_005A2330), u8 *, 1) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 1) & 0x3F);
        M2C_FIELD(((void *)D_005A2330), u8 *, 1) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 1) | ((arg0 << 6) & 0xFF));
    }
}
