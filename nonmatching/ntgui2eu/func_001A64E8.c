/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A5950(void);
M2C_UNK func_001A5BA8(s32);                         /* extern */
M2C_UNK func_001A5FE8(s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern char D_012073C0[];
extern M2C_UNK func_001A6358;

s32 func_001A64E8(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_v1;
    s32 temp_v0;

    if (arg1 == 0) {
        return 0x80000016;
    }
    temp_s0 = M2C_FIELD(((void *)D_012073C0), M2C_UNK **, 0);
    if (temp_s0 != NULL) {
        M2C_FIELD(((void *)D_012073C0), M2C_UNK **, 0) = (M2C_UNK *) M2C_FIELD(temp_s0, M2C_UNK **, 0);
    }
    if (temp_s0 == NULL) {
        return 0x80008005;
    }
    temp_v0 = func_001A5950();
    if (temp_v0 >= 0) {
        M2C_FIELD(temp_s0, s32 *, 8) = arg1;
        M2C_FIELD(temp_s0, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_s0, s32 *, 4) = temp_v0;
        func_001A5FE8(temp_v0, arg0, &func_001A6358, temp_s0);
        func_001A5BA8(temp_v0);
        return ((s32) temp_s0 * 0x10) | (temp_v0 & 0xFE) | 1;
    }
    temp_v1 = M2C_FIELD(((void *)D_012073C0), M2C_UNK **, 0x73C0);
    M2C_FIELD(((void *)D_012073C0), M2C_UNK **, 0x73C0) = temp_s0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    return temp_v0;
}
