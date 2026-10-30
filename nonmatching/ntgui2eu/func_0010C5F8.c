/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010C998(s16, s16, s16, s16, u16, M2C_UNK *); /* extern */
extern char D_011B5CA8[];

void func_0010C5F8(u64 arg0) {
    s16 temp_s0;
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_s3;
    void *temp_v0;

    temp_s3 = (arg0 >> 0x30) & 0xFFFF;
    temp_s2 = (arg0 >> 0x20) & 0xFFFF & 0xFFFF;
    temp_s1 = (arg0 >> 0x10) & 0xFFFF & 0xFFFF;
    temp_s0 = arg0 & 0xFFFF & 0xFFFF;
    if ((M2C_FIELD(((void *)D_011B5CA8), u16 *, 0x34) != temp_s3) || (M2C_FIELD(((void *)D_011B5CA8), u16 *, 0x36) != temp_s2) || (M2C_FIELD(((void *)D_011B5CA8), u16 *, 0x38) != temp_s1) || (M2C_FIELD(((void *)D_011B5CA8), u16 *, 0x3A) != temp_s0)) {
        func_0010C998(temp_s3, temp_s2, temp_s1, temp_s0, M2C_FIELD(((void *)D_011B5CA8), u16 *, 0x34), ((void *)D_011B5CA8));
        temp_v0 = ((void *)D_011B5CA8) + 0x5CA8;
        M2C_FIELD(temp_v0, s16 *, 0x34) = temp_s3;
        M2C_FIELD(temp_v0, s16 *, 0x36) = temp_s2;
        M2C_FIELD(temp_v0, s16 *, 0x38) = temp_s1;
        M2C_FIELD(temp_v0, s16 *, 0x3A) = temp_s0;
    }
}
