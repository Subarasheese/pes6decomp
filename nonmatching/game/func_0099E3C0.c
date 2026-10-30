/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0059274A[];

s32 func_0099E3C0(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v0_2;

    temp_a0 = arg0 & 0xF0 & 0xFF;
    switch ((*(u16 *)D_0059274A)) {                           /* irregular */
    case 0x8000:
        temp_v0 = temp_a0 & 0xFF;
        var_v0_2 = ((s32) (temp_v0 & 0xE0) >> 1) | ((temp_v0 & 0x10) * 8);
block_7:
        var_v0 = var_v0_2 & 0xFF;
        break;
    default:
        var_v0 = temp_a0 & 0xFF;
        break;
    case 0x0:
        temp_v0_2 = temp_a0 & 0xFF;
        var_v0_2 = ((temp_v0_2 & 0x70) * 2) | ((s32) (temp_v0_2 & 0x80) >> 3);
        goto block_7;
    }
    return var_v0 & 0xFF;
}
