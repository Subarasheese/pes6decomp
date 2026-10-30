/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
s32 func_001A59C0();                                /* extern */
M2C_UNK func_001A5C58(s32);                         /* extern */
M2C_UNK func_001A60E0(s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern char D_012073C0[];
extern M2C_UNK func_001A6358;

s32 func_001A63B8(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_v0_2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    if (arg1 == 0) {
        return 0x80000016;
    }
    temp_s0 = M2C_FIELD(((void *)D_012073C0), M2C_UNK **, 0);
    temp_s3 = func_001A4728();
    if (temp_s0 != NULL) {
        M2C_FIELD(((void *)D_012073C0), M2C_UNK **, 0) = (M2C_UNK *) M2C_FIELD(temp_s0, M2C_UNK **, 0);
    }
    if (temp_s0 == NULL) {
        if (temp_s3 != 0) {
            func_001A4778();
        }
        return 0x80008005;
    }
    temp_v0 = func_001A59C0();
    if (temp_v0 >= 0) {
        M2C_FIELD(temp_s0, s32 *, 8) = arg1;
        M2C_FIELD(temp_s0, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_s0, s32 *, 4) = temp_v0;
        func_001A60E0(temp_v0, arg0, &func_001A6358, temp_s0);
        func_001A5C58(temp_v0);
        var_v0_2 = (s32) temp_s0 * 0x10;
        if (temp_s3 != 0) {
            func_001A4778();
            var_v0_2 = (s32) temp_s0 * 0x10;
        }
        var_v0 = var_v0_2 | (temp_v0 & 0xFE) | 1;
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_v0_2 = M2C_FIELD(((void *)D_012073C0), M2C_UNK **, 0x73C0);
    M2C_FIELD(((void *)D_012073C0), M2C_UNK **, 0x73C0) = temp_s0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0) = temp_v0_2;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    var_v0 = temp_v0;
    if (temp_s3 != 0) {
        func_001A4778();
        return temp_v0;
    }
    return var_v0;
}
