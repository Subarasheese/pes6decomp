/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00114590(void *, s32);                 /* extern */
M2C_UNK func_00114940(void *);                      /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];

void func_00114A98(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_s1;
    s32 var_a3;
    u16 temp_v0;
    u32 var_a4;
    u8 temp_v1;
    void *temp_a2;

    temp_s1 = M2C_FIELD(arg0, u8 *, 0x52) & 0x7F;
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x818, ((void *)D_005F8700));
    }
    var_a4 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x68) != 0) {
        var_a3 = 0;
        do {
            temp_a2 = var_a3 + M2C_FIELD(arg0, s32 *, 0x78);
            var_a3 += 0x198;
            temp_v0 = M2C_FIELD((temp_a2 + (temp_s1 * 0x30)), u16 *, 4);
            temp_a1 = temp_v0 & 0xFFFF;
            if (temp_a1 != 0xFFFF) {
                if ((u32) ((temp_v0 + 0xFFFE) & 0xFFFF) < 2U) {
                    temp_v1 = M2C_FIELD(arg0, u8 *, 0x52);
                    if (arg1 & 0xFF) {
                        if (!(temp_v1 & 0x80)) {
                            M2C_FIELD(arg0, u8 *, 0x52) = (u8) (temp_v1 & 0xFE);
                            goto block_12;
                        }
                    } else {
                        M2C_FIELD(arg0, u8 *, 0x52) = (u8) (temp_v1 & 0x7E);
                        goto block_12;
                    }
                } else if ((temp_a1 != 1) && (temp_a1 != 0xB)) {
block_12:
                    M2C_FIELD(temp_a2, u8 *, 0x18C) = (u8) (M2C_FIELD(temp_a2, u8 *, 0x18C) & 0xFD);
                }
            }
            var_a4 += 1;
        } while (var_a4 < (u32) M2C_FIELD(arg0, u32 *, 0x68));
    }
    func_00114940(arg0);
    func_00114590(arg0, M2C_FIELD(arg0, s32 *, 0x54));
}
