/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A6E20(s8 *);                        /* extern */
M2C_UNK func_001A92C0(s8 *, u8 *, u64, u8 *, s16, u64, u64, void *); /* extern */
extern char Pes6MatchSquads[];

void func_0093FB30(s32 arg0, u8 arg1, u8 arg2) {
    s8 sp10;
    s32 sp1C;
    s8 sp41;
    s8 sp43;
    s16 sp44;
    s16 sp50;
    s8 sp54;
    s8 sp55;
    u8 sp56;
    u8 sp57;
    s8 sp58;
    s8 sp59;
    s8 sp205;
    u8 sp241;
    u8 sp242;
    s16 temp_a4;
    s32 var_v0;
    s8 *var_v1;
    u64 temp_a2;
    u64 temp_a5;
    u64 temp_a6;
    u8 var_v0_2;
    void *temp_a7;

    var_v0 = 0x220;
    var_v1 = &sp10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp242 = arg1;
    sp241 = arg2;
    sp1C = arg0;
    temp_a7 = (sp241 * 0x348) + (((void *)Pes6MatchSquads) + (sp242 * 0x6900));
    sp43 = M2C_FIELD(temp_a7, u8 *, 0x2A) & 3;
    sp54 = M2C_FIELD(temp_a7, u8 *, 0x38) & 0x1F;
    sp50 = (s16) ((u64) ((s64) M2C_FIELD(temp_a7, u16 *, 0x28) << 0x30) >> 0x35);
    temp_a6 = (u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x23) << 0x38) >> 0x3F;
    temp_a5 = (u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x1C) << 0x38) >> 0x3E;
    sp55 = (s8) ((u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x37) << 0x38) >> 0x3B);
    temp_a4 = M2C_FIELD(temp_a7, u16 *, 0x20) & 0x7FF;
    sp58 = M2C_FIELD(temp_a7, u8 *, 0x3C) & 0x1F;
    sp57 = (u8) ((u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x3B) << 0x3B) >> 0x3D);
    temp_a2 = (u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x3D) << 0x3A) >> 0x3D;
    sp205 = (s8) temp_a6;
    sp41 = (s8) temp_a5;
    sp44 = temp_a4;
    sp56 = (u8) temp_a2;
    sp59 = (s8) ((u64) ((s64) M2C_FIELD(temp_a7, u8 *, 0x3E) << 0x39) >> 0x3D);
    if ((s32) sp57 < 5) {
        var_v0_2 = sp56 * 2;
    } else {
        var_v0_2 = (sp56 * 2) + 1;
    }
    sp56 = var_v0_2;
    func_001A92C0(&sp10, &sp57, temp_a2, &sp56, temp_a4, temp_a5, temp_a6, temp_a7);
    func_001A6E20(&sp10);
}
