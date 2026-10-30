/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char Pes6MatchSquads[];

s32 func_00327820(s32 arg0, s32 arg1) {
    s32 var_s3;
    u16 temp_v0;
    void *temp_s0;
    void *var_s1;
    void *var_s2;

    if (arg1 >= 2) {
        return 0;
    }
    var_s3 = 0;
    var_s2 = arg0 + (arg1 << 0xA);
    var_s1 = ((void *)Pes6MatchSquads) + (arg1 * 0x6900);
    do {
        temp_s0 = var_s2 + 0xC8;
        func_001C48E8(temp_s0, 0, 0x20);
        temp_v0 = M2C_FIELD(var_s1, u16 *, 0x46);
        if (temp_v0 != 0) {
            M2C_FIELD(var_s2, u16 *, 0xC8) = temp_v0;
            M2C_FIELD(temp_s0, s16 *, 4) = 0;
            M2C_FIELD(temp_s0, s16 *, 2) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x10) = 0xFF;
            M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
            M2C_FIELD(temp_s0, s8 *, 0x11) = 0xEE;
            M2C_FIELD(temp_s0, s16 *, 8) = 0xFF;
            M2C_FIELD(temp_s0, s16 *, 0xE) = 0xFF;
            M2C_FIELD(temp_s0, s16 *, 0xA) = 0xFF;
            M2C_FIELD(temp_s0, s16 *, 0xC) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x1C) & 0xFFFE00);
        }
        var_s3 += 1;
        var_s2 += 0x20;
        var_s1 += 0x348;
    } while (var_s3 < 0x20);
    return 1;
}
