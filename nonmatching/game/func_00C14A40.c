/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CCAD60[];

void func_00C14A40(void *arg0, void *arg1) {
    s32 var_a0;
    s8 var_s3;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s2;

    var_s3 = 0;
    temp_s2 = arg0 + 0x20;
    temp_v1 = M2C_FIELD(arg0, u8 *, 4);
    if (temp_v1 != 0xFF) {
        var_a0 = (s32) temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    func_001C48E8(arg1, 0, 0x20);
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg1, s8 *, 0x1B) = (s8) ((M2C_FIELD(temp_s0, u8 *, 0x12) << 5) | (M2C_FIELD(temp_s0, u8 *, 0x11) & 0x1F));
    M2C_FIELD(arg1, s8 *, 0x1C) = 0xFF;
    M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 5);
    M2C_FIELD(arg1, s8 *, 0x1F) = 1;
    M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(temp_s2, u8 *, 9);
    if (((u64) ((s64) M2C_FIELD(temp_s2, u8 *, 8) << 0x3C) >> 0x3F) != 0) {
        var_s3 = 1 & 0xFF;
    }
    if (((u64) ((s64) M2C_FIELD(temp_s2, u8 *, 8) << 0x3B) >> 0x3F) != 0) {
        var_s3 = (var_s3 | 2) & 0xFF;
    }
    if (((u64) ((s64) M2C_FIELD(temp_s2, u8 *, 8) << 0x3A) >> 0x3F) != 0) {
        var_s3 = (var_s3 | 4) & 0xFF;
    }
    if (((u64) ((s64) M2C_FIELD(temp_s2, u8 *, 8) << 0x38) >> 0x3F) != 0) {
        var_s3 = (var_s3 | 8) & 0xFF;
    }
    if (M2C_FIELD(((void *)D_00CCAD60), u8 *, 3) != M2C_FIELD(arg0, s32 *, 0)) {
        var_s3 = (var_s3 | 0x10) & 0xFF;
    }
    M2C_FIELD(arg1, s8 *, 0x18) = var_s3;
}
