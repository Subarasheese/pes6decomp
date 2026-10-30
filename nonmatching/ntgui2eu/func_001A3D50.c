/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_001A36E8();                                /* extern */
s32 func_001A37E8();                                /* extern */
M2C_UNK func_001B08E8(M2C_UNK, s32, M2C_UNK);       /* extern */
extern char D_01204F00[];

s32 func_001A3D50(s32 arg0) {
    s32 var_v0;

    var_v0 = 0xFFFF0000;
    if (func_001A36E8() >= 0) {
        if (func_001A37E8() == 0) {
            func_001B08E8(0x01204D08, arg0, 0xFC);
            M2C_FIELD((void *)0x01204D00, s8 *, 0x103) = 0;
            if (func_0019EE30(((void *)D_01204F00), 9, 0, 0x01204D00, 0x200, 0x01204D00, 4, 0, 0) >= 0) {
                return M2C_FIELD((void *)0x01204D08, s32 *, -8);
            }
            var_v0 = 0xFFFEFFFF;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_v0;
        }
        return 0xFFFEFFFC;
    }
    return var_v0;
}
