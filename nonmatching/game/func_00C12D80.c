/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
extern char D_00CBFAA0[];

s32 func_00C12D80(s32 arg0) {
    s32 temp_s0;
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730(((void *)D_00CBFAA0) + 0x4E20, var_s0, 0x6400);
        temp_s0 = var_s0 + 0x6400;
        func_001C4730(((void *)D_00CBFAA0) + 0xB224, temp_s0, 0x80);
        var_s0 = temp_s0 + 0x80;
    }
    return var_s0;
}
