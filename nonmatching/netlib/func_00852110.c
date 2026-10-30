/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591DB7[];
extern char Pes6MatchSquads[];

s32 func_00852110(void *arg0) {
    M2C_UNK *var_a2;
    s32 var_a3;
    void *temp_v0;
    void *var_a0;

    var_a0 = arg0;
    if ((*(u8 *)D_00591DB7) == 0) {
        var_a3 = 0;
        var_a2 = ((void *)Pes6MatchSquads);
        do {
            var_a3 += 8;
            temp_v0 = var_a2 + 0x10000;
            M2C_FIELD(var_a2, s32 *, 0xD8) = (s32) M2C_FIELD(var_a0, s32 *, 4);
            M2C_FIELD(var_a2, s32 *, 0x69D8) = (s32) M2C_FIELD(var_a0, s32 *, 0x84);
            M2C_FIELD(var_a2, s32 *, 0x420) = (s32) M2C_FIELD(var_a0, s32 *, 8);
            M2C_FIELD(var_a2, s32 *, 0x6D20) = (s32) M2C_FIELD(var_a0, s32 *, 0x88);
            M2C_FIELD(var_a2, s32 *, 0x768) = (s32) M2C_FIELD(var_a0, s32 *, 0xC);
            M2C_FIELD(var_a2, s32 *, 0x7068) = (s32) M2C_FIELD(var_a0, s32 *, 0x8C);
            M2C_FIELD(var_a2, s32 *, 0xAB0) = (s32) M2C_FIELD(var_a0, s32 *, 0x10);
            M2C_FIELD(var_a2, s32 *, 0x73B0) = (s32) M2C_FIELD(var_a0, s32 *, 0x90);
            M2C_FIELD(var_a2, s32 *, 0xDF8) = (s32) M2C_FIELD(var_a0, s32 *, 0x14);
            M2C_FIELD(var_a2, s32 *, 0x76F8) = (s32) M2C_FIELD(var_a0, s32 *, 0x94);
            M2C_FIELD(var_a2, s32 *, 0x1140) = (s32) M2C_FIELD(var_a0, s32 *, 0x18);
            M2C_FIELD(var_a2, s32 *, 0x7A40) = (s32) M2C_FIELD(var_a0, s32 *, 0x98);
            M2C_FIELD(var_a2, s32 *, 0x1488) = (s32) M2C_FIELD(var_a0, s32 *, 0x1C);
            M2C_FIELD(var_a2, s32 *, 0x7D88) = (s32) M2C_FIELD(var_a0, s32 *, 0x9C);
            M2C_FIELD(var_a2, s32 *, 0x17D0) = (s32) M2C_FIELD(var_a0, s32 *, 0x20);
            var_a2 += 0x1A40;
            M2C_FIELD(temp_v0, s32 *, -0x7F30) = (s32) M2C_FIELD(var_a0, s32 *, 0xA0);
            var_a0 += 0x20;
        } while (var_a3 < 0x20);
    }
    return 0;
}
