/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];

s32 func_00113770(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 var_a1;
    u32 temp_a3;
    u32 var_a2;
    void *temp_a0;

    temp_s1 = M2C_FIELD(arg0, u8 *, 0x52) & 0x7F;
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x50F, ((void *)D_005F8700));
    }
    temp_a3 = M2C_FIELD(arg0, u32 *, 0x68);
    var_a2 = 0;
    if (temp_a3 != 0) {
        var_a1 = 0;
loop_4:
        temp_a0 = var_a1 + M2C_FIELD(arg0, s32 *, 0x78);
        var_a1 += 0x198;
        if (arg1 == M2C_FIELD((temp_a0 + (temp_s1 * 0x30)), u16 *, 4)) {
            M2C_FIELD(temp_a0, u8 *, 0x18C) = (u8) ((arg2 & 0xFF) | M2C_FIELD(temp_a0, u8 *, 0x18C));
            return 0;
        }
        var_a2 += 1;
        if (var_a2 >= temp_a3) {
            goto block_7;
        }
        goto loop_4;
    }
block_7:
    return 1;
}
