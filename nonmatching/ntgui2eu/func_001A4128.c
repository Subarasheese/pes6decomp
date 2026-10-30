/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_001A36E8();                                /* extern */
s32 func_001A37E8();                                /* extern */
M2C_UNK func_001B08E8(M2C_UNK, s32, M2C_UNK);       /* extern */
extern char D_01204F00[];

s32 func_001A4128(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0xFFFF0000;
    if (func_001A36E8() >= 0) {
        if (func_001A37E8() == 0) {
            func_001B08E8(0x01204D08, arg0, 0xFC);
            M2C_FIELD((void *)0x01204D00, s8 *, 0x103) = 0;
            func_001B08E8(0x01204E04, arg1, 0xFC);
            M2C_FIELD((void *)0x01204D00, s8 *, 0x1FF) = 0;
            if (func_0019EE30(((void *)D_01204F00), arg3, 0, 0x01204D00, 0x200, 0x01204D00, 0x10, 0, 0) >= 0) {
                temp_v0 = M2C_FIELD((void *)0x01204D08, s32 *, -8);
                if (temp_v0 != 0) {
                    M2C_FIELD(arg2, s32 *, 0) = temp_v0;
                    var_v0 = 0;
                    M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD((void *)0x01204D00, s32 *, 4);
                    /* Duplicate return node #14. Try simplifying control flow for better match */
                    return var_v0;
                }
                return 0xFFFEFFFD;
            }
            return 0xFFFEFFFF;
        }
        return 0xFFFEFFFC;
    }
    return var_v0;
}
