/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];

void func_00114940(void *arg0) {
    s32 temp_s1;
    s32 var_a1;
    u32 var_a2;
    u8 temp_v0;
    void *temp_a0;

    temp_s1 = M2C_FIELD(arg0, u8 *, 0x52) & 0x7F;
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x7DA, ((void *)D_005F8700));
    }
    var_a2 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x68) != 0) {
        var_a1 = 0;
        do {
            temp_a0 = var_a1 + M2C_FIELD(arg0, s32 *, 0x78);
            var_a1 += 0x198;
            if (M2C_FIELD((temp_a0 + (temp_s1 * 0x30)), u16 *, 4) == 0) {
                temp_v0 = M2C_FIELD(temp_a0, u8 *, 0x18C);
                if (!(temp_v0 & 0x10)) {
                    M2C_FIELD(temp_a0, u8 *, 0x18C) = (u8) (temp_v0 & 0xFB);
                }
            }
            var_a2 += 1;
        } while (var_a2 < (u32) M2C_FIELD(arg0, u32 *, 0x68));
    }
}
