/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CB36C0[];

u8 func_00C18DC0(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    return *(u8 *)(((u8 *)D_00CB36C0) + (((((temp_v1 & 0x7F) / 15) + ((u32) (temp_v1 & 0x7F) >> 0x1F)) - ((temp_v1 >> 7) != 0)) & 0xFF));
}
