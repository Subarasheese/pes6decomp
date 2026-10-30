/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021FBC0(u16);
M2C_UNK func_002C9E90(M2C_UNK *, s32);              /* extern */
s32 func_0095AD10();                                /* extern */
extern char D_00A77DC0[];

M2C_UNK *func_0095ADC0(u16 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFFFF;
    if ((temp_v1 >= 0xFE) && (temp_v1 < 0x10E)) {
        var_v0 = func_0095AD10();
    } else {
        var_v0 = func_0021FBC0(arg0);
    }
    if (var_v0 == 0) {
        return NULL;
    }
    func_002C9E90(((void *)D_00A77DC0), var_v0 + 0x8A);
    return ((void *)D_00A77DC0);
}
