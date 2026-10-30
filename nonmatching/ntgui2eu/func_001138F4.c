/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_001B016C(s32, s32);                        /* extern */
extern char D_005F8648[];
extern char D_005F8700[];

s32 func_001138F4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s1;
    u32 var_s2;
    u8 temp_a2;
    void *temp_a0;

    temp_s3 = M2C_FIELD(arg0, u8 *, 0x52) & 0x7F;
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x54A, ((void *)D_005F8700));
    }
    var_s2 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x68) != 0) {
        var_s1 = 0;
loop_4:
        temp_v0 = func_001B016C(arg1, var_s1 + (temp_s3 * 0x30) + M2C_FIELD(arg0, s32 *, 0x78) + 8);
        if (temp_v0 != 0) {
            goto block_11;
        }
        temp_a0 = var_s1 + M2C_FIELD(arg0, s32 *, 0x78);
        temp_a2 = M2C_FIELD(temp_a0, u8 *, 0x18C);
        if (temp_a2 & 0x34) {
block_11:
            var_s2 += 1;
            var_s1 += 0x198;
            if (var_s2 >= M2C_FIELD(arg0, u32 *, 0x68)) {
                goto block_12;
            }
            goto loop_4;
        }
        M2C_FIELD(temp_a0, u8 *, 0x18C) = (u8) ((arg2 & 0xFF) | temp_a2);
        return temp_v0;
    }
block_12:
    return 1;
}
