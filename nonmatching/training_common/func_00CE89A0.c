/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern s32 D_003E7E28;
extern char D_00CFF8C0[];
extern char D_00CFF940[];

void func_00CE89A0(void) {
    M2C_UNK *var_a1;
    M2C_UNK *var_v1;
    s32 temp_a5;
    s32 var_a0;
    s32 var_a2;

    var_a2 = 0;
    var_a1 = ((void *)D_00CFF940);
    var_a0 = 0;
    var_v1 = ((void *)D_00CFF8C0);
    do {
        var_a2 += 8;
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0xE8) = (s32) M2C_FIELD(var_a1, s32 *, 0);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x68) = (s32) M2C_FIELD(var_v1, s32 *, 0);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0xEC) = (s32) M2C_FIELD(var_a1, s32 *, 4);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x6C) = (s32) M2C_FIELD(var_v1, s32 *, 4);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0xF0) = (s32) M2C_FIELD(var_a1, s32 *, 8);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x70) = (s32) M2C_FIELD(var_v1, s32 *, 8);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0xF4) = (s32) M2C_FIELD(var_a1, s32 *, 0xC);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x74) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0xF8) = (s32) M2C_FIELD(var_a1, s32 *, 0x10);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x78) = (s32) M2C_FIELD(var_v1, s32 *, 0x10);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0xFC) = (s32) M2C_FIELD(var_a1, s32 *, 0x14);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x7C) = (s32) M2C_FIELD(var_v1, s32 *, 0x14);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x100) = (s32) M2C_FIELD(var_a1, s32 *, 0x18);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x80) = (s32) M2C_FIELD(var_v1, s32 *, 0x18);
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x104) = (s32) M2C_FIELD(var_a1, s32 *, 0x1C);
        var_a1 += 0x20;
        temp_a5 = M2C_FIELD(var_v1, s32 *, 0x1C);
        var_v1 += 0x20;
        M2C_FIELD((D_003E7E28 + var_a0), s32 *, 0x84) = temp_a5;
        var_a0 += 0x20;
    } while (var_a2 < 0x20);
}
