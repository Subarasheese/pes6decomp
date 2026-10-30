/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_001C48E8(u16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001C6158(u16 *, u16, M2C_UNK, M2C_UNK *); /* extern */
s32 func_0082C2A0();                                /* extern */
M2C_UNK func_00842A80(M2C_UNK);                     /* extern */
s32 func_00936B90();                                /* extern */
extern char D_008A5F70[];
extern M2C_UNK func_0094ED50;

s32 func_0094EDB0(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;
    s64 var_a0;
    u16 *var_s0;
    u16 var_s2;
    void *temp_v0_3;

    var_s2 = 0;
    temp_v0 = func_0082C2A0();
    if (temp_v0 == 0) {
        return 1;
    }
    if (((void *)D_008A5F70) != NULL) {
        temp_s1 = temp_v0 + 0x79A8;
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_s0 = temp_v0_2 + 0x4F0;
        } else {
            var_s0 = NULL;
        }
        if (temp_s1 == 0) {
            return 1;
        }
        if (var_s0 != NULL) {
            func_001C48E8(var_s0, 0, 0x3394);
            var_s3 = 0;
            do {
                temp_v0_3 = temp_s1 + ((var_s3 & 0xFFFF) * 0x84);
                var_a0 = 0;
                if (M2C_FIELD(temp_v0_3, s32 *, 0x38) == 0) {
                    var_a0 = 1;
                }
                if (M2C_FIELD(temp_v0_3, u8 *, 4) == 0) {
                    var_a0 = 1;
                }
                if (((s64) (var_a0 << 0x38) >> 0x38) != 1) {
                    func_001C4730(var_s0 + ((var_s2 & 0xFFFF) * 0x84) + 4, temp_v0_3 + 4, 0x84);
                    var_s2 = (var_s2 + 1) & 0xFFFF;
                }
                var_s3 = (var_s3 + 1) & 0xFFFF;
            } while (var_s3 < 0x64);
            *var_s0 = var_s2;
            func_001C6158(var_s0 + 4, *var_s0, 0x84, &func_0094ED50);
            func_00842A80(1);
            return 4;
        }
        return 1;
    }
    return 1;
}
