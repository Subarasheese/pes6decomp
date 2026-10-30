/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_001A36E8();                                /* extern */
s32 func_001A37E8();                                /* extern */
extern char D_01204F00[];

s32 func_001A3CC0(s32 arg0) {
    s32 var_v0;

    var_v0 = 0xFFFF0000;
    if (func_001A36E8() >= 0) {
        if (func_001A37E8() != 0) {
            return 0xFFFEFFFC;
        }
        *(s32 *)0x01204D00 = arg0;
        if (func_0019EE30(((void *)D_01204F00), 8, 0, 0x01204D00, 4, 0x01204D00, 4, 0, 0) >= 0) {
            return *(s32 *)0x01204D00;
        }
        var_v0 = 0xFFFEFFFF;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
