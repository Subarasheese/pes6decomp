/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];

void func_00849070(void *arg0) {
    M2C_UNK *var_a2;
    s32 var_a3;
    void *temp_v1;
    void *var_a1;

    var_a3 = 0;
    var_a2 = ((void *)Pes6MatchPlayers);
    var_a1 = arg0;
    do {
        var_a3 += 7;
        M2C_FIELD(var_a2, f32 *, 0xE8) = (f32) M2C_FIELD(var_a1, f32 *, 4);
        M2C_FIELD(var_a2, f32 *, 0xE0) = (f32) M2C_FIELD(var_a1, f32 *, 0);
        M2C_FIELD(var_a2, f32 *, 0x328) = (f32) M2C_FIELD(var_a1, f32 *, 0xC);
        M2C_FIELD(var_a2, f32 *, 0x320) = (f32) M2C_FIELD(var_a1, f32 *, 8);
        M2C_FIELD(var_a2, f32 *, 0x568) = (f32) M2C_FIELD(var_a1, f32 *, 0x14);
        M2C_FIELD(var_a2, f32 *, 0x560) = (f32) M2C_FIELD(var_a1, f32 *, 0x10);
        M2C_FIELD(var_a2, f32 *, 0x7A8) = (f32) M2C_FIELD(var_a1, f32 *, 0x1C);
        M2C_FIELD(var_a2, f32 *, 0x7A0) = (f32) M2C_FIELD(var_a1, f32 *, 0x18);
        M2C_FIELD(var_a2, f32 *, 0x9E8) = (f32) M2C_FIELD(var_a1, f32 *, 0x24);
        M2C_FIELD(var_a2, f32 *, 0x9E0) = (f32) M2C_FIELD(var_a1, f32 *, 0x20);
        M2C_FIELD(var_a2, f32 *, 0xC28) = (f32) M2C_FIELD(var_a1, f32 *, 0x2C);
        M2C_FIELD(var_a2, f32 *, 0xC20) = (f32) M2C_FIELD(var_a1, f32 *, 0x28);
        M2C_FIELD(var_a2, f32 *, 0xE68) = (f32) M2C_FIELD(var_a1, f32 *, 0x34);
        M2C_FIELD(var_a2, f32 *, 0xE60) = (f32) M2C_FIELD(var_a1, f32 *, 0x30);
        var_a1 += 0x38;
        var_a2 += 0xFC0;
    } while (var_a3 < 0x10);
    temp_v1 = (var_a3 * 8) + arg0;
    M2C_FIELD(var_a2, f32 *, 0xE8) = (f32) M2C_FIELD(temp_v1, f32 *, 4);
    M2C_FIELD(var_a2, f32 *, 0xE0) = (f32) M2C_FIELD(temp_v1, f32 *, 0);
    M2C_FIELD(var_a2, f32 *, 0x328) = (f32) M2C_FIELD(temp_v1, f32 *, 0xC);
    M2C_FIELD(var_a2, f32 *, 0x320) = (f32) M2C_FIELD(temp_v1, f32 *, 8);
}
