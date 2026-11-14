/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

s32 func_00145440();                                /* extern */
s32 func_00145490(s32);                             /* extern */
extern char D_00376A50[];

s32 func_00151440(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = func_00145440();
    temp_v0 = func_00145490(arg0);
    switch (temp_v0) {                              /* irregular */
    case 20:
        var_v0 = arg1 * 4;
block_6:
        return temp_s0 + var_v0;
    case 19:
        var_v0 = ((arg1 & ~0x1F) | *(((u8 *)D_00376A50) + (arg1 & 0x1F))) * 4;
        goto block_6;
    default:
        return 0;
    }
}
