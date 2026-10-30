/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];

void func_001149E8(void *arg0) {
    s32 var_a0;
    u32 var_a1;
    void *temp_v0;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x7F5, ((void *)D_005F8700));
    }
    var_a1 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x68) != 0) {
        var_a0 = 0;
        do {
            var_a1 += 1;
            temp_v0 = var_a0 + M2C_FIELD(arg0, s32 *, 0x78);
            M2C_FIELD(temp_v0, u8 *, 0x18C) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x18C) & 0xFD);
            var_a0 += 0x198;
        } while (var_a1 < (u32) M2C_FIELD(arg0, u32 *, 0x68));
    }
}
