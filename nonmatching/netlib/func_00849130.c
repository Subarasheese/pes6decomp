/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_008B1180[];

void func_00849130(void *arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a3;
    M2C_UNK *var_v1;
    f32 temp_f2;
    f32 temp_f3;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_a4;
    s16 temp_a5;
    s16 temp_a6;
    s16 temp_a7;
    s16 temp_t0;
    s16 temp_t1;
    s16 temp_t2;
    s16 temp_t3;
    s16 temp_t8;
    s16 temp_t9;
    s32 var_a4;
    s32 var_s0;
    void *temp_v1;
    void *var_a2;

    var_a3 = ((void *)Pes6MatchPlayers);
    var_a1 = ((void *)D_008B1180);
    if (arg0 != NULL) {
        var_a4 = 0;
        var_a2 = arg0;
        do {
            var_a4 += 7;
            M2C_FIELD(var_a2, f32 *, 4) = (f32) M2C_FIELD(var_a3, f32 *, 0xE8);
            M2C_FIELD(var_a2, f32 *, 0) = (f32) M2C_FIELD(var_a3, f32 *, 0xE0);
            M2C_FIELD(var_a2, f32 *, 0xC) = (f32) M2C_FIELD(var_a3, f32 *, 0x328);
            M2C_FIELD(var_a2, f32 *, 8) = (f32) M2C_FIELD(var_a3, f32 *, 0x320);
            M2C_FIELD(var_a2, f32 *, 0x14) = (f32) M2C_FIELD(var_a3, f32 *, 0x568);
            M2C_FIELD(var_a2, f32 *, 0x10) = (f32) M2C_FIELD(var_a3, f32 *, 0x560);
            M2C_FIELD(var_a2, f32 *, 0x1C) = (f32) M2C_FIELD(var_a3, f32 *, 0x7A8);
            M2C_FIELD(var_a2, f32 *, 0x18) = (f32) M2C_FIELD(var_a3, f32 *, 0x7A0);
            M2C_FIELD(var_a2, f32 *, 0x24) = (f32) M2C_FIELD(var_a3, f32 *, 0x9E8);
            M2C_FIELD(var_a2, f32 *, 0x20) = (f32) M2C_FIELD(var_a3, f32 *, 0x9E0);
            M2C_FIELD(var_a2, f32 *, 0x2C) = (f32) M2C_FIELD(var_a3, f32 *, 0xC28);
            M2C_FIELD(var_a2, f32 *, 0x28) = (f32) M2C_FIELD(var_a3, f32 *, 0xC20);
            M2C_FIELD(var_a2, f32 *, 0x34) = (f32) M2C_FIELD(var_a3, f32 *, 0xE68);
            M2C_FIELD(var_a2, f32 *, 0x30) = (f32) M2C_FIELD(var_a3, f32 *, 0xE60);
            var_a3 += 0xFC0;
            var_a2 += 0x38;
        } while (var_a4 < 0x10);
        temp_v1 = (var_a4 * 8) + arg0;
        M2C_FIELD(temp_v1, f32 *, 4) = (f32) M2C_FIELD(var_a3, f32 *, 0xE8);
        M2C_FIELD(temp_v1, f32 *, 0) = (f32) M2C_FIELD(var_a3, f32 *, 0xE0);
        M2C_FIELD(temp_v1, f32 *, 0xC) = (f32) M2C_FIELD(var_a3, f32 *, 0x328);
        M2C_FIELD(temp_v1, f32 *, 8) = (f32) M2C_FIELD(var_a3, f32 *, 0x320);
    }
    var_s0 = 0;
    var_v1 = ((void *)Pes6MatchPlayers);
    do {
        var_s0 += 7;
        temp_t9 = M2C_FIELD(var_a1, s16 *, 0x1A);
        temp_t8 = M2C_FIELD(var_a1, s16 *, 0x1C);
        temp_t3 = M2C_FIELD(var_a1, s16 *, 0x34);
        temp_t2 = M2C_FIELD(var_a1, s16 *, 0x36);
        temp_t1 = M2C_FIELD(var_a1, s16 *, 0x4E);
        temp_t0 = M2C_FIELD(var_a1, s16 *, 0x50);
        temp_f3 = (f32) M2C_FIELD(var_a1, s16 *, 0);
        temp_a7 = M2C_FIELD(var_a1, s16 *, 0x68);
        temp_a6 = M2C_FIELD(var_a1, s16 *, 0x6A);
        temp_a5 = M2C_FIELD(var_a1, s16 *, 0x82);
        temp_a4 = M2C_FIELD(var_a1, s16 *, 0x84);
        temp_a3 = M2C_FIELD(var_a1, s16 *, 0x9C);
        temp_a2 = M2C_FIELD(var_a1, s16 *, 0x9E);
        temp_f2 = (f32) M2C_FIELD(var_a1, s16 *, 2);
        var_a1 += 0xB6;
        M2C_FIELD(var_v1, f32 *, 0xE0) = (f32) ((256.0f * temp_f3) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0xE8) = (f32) ((256.0f * temp_f2) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0x320) = (f32) ((256.0f * (f32) temp_t9) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0x328) = (f32) ((256.0f * (f32) temp_t8) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0x560) = (f32) ((256.0f * (f32) temp_t3) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0x568) = (f32) ((256.0f * (f32) temp_t2) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0x7A0) = (f32) ((256.0f * (f32) temp_t1) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0x7A8) = (f32) ((256.0f * (f32) temp_t0) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0x9E0) = (f32) ((256.0f * (f32) temp_a7) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0x9E8) = (f32) ((256.0f * (f32) temp_a6) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0xC20) = (f32) ((256.0f * (f32) temp_a5) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0xC28) = (f32) ((256.0f * (f32) temp_a4) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0xE60) = (f32) ((256.0f * (f32) temp_a3) / 100.0f);
        M2C_FIELD(var_v1, f32 *, 0xE68) = (f32) ((256.0f * (f32) temp_a2) / 100.0f);
        var_v1 += 0xFC0;
    } while (var_s0 < 0x10);
    M2C_FIELD(var_v1, f32 *, 0xE0) = (f32) ((256.0f * (f32) M2C_FIELD(var_a1, s16 *, 0)) / 100.0f);
    M2C_FIELD(var_v1, f32 *, 0xE8) = (f32) ((256.0f * (f32) M2C_FIELD(var_a1, s16 *, 2)) / 100.0f);
    M2C_FIELD(var_v1, f32 *, 0x320) = (f32) ((256.0f * (f32) M2C_FIELD(var_a1, s16 *, 0x1A)) / 100.0f);
    M2C_FIELD(var_v1, f32 *, 0x328) = (f32) ((256.0f * (f32) M2C_FIELD(var_a1, s16 *, 0x1C)) / 100.0f);
}
