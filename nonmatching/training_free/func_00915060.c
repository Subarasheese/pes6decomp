/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_009B3480(M2C_UNK *, M2C_UNK *, s32, f32, f32); /* extern */
extern void *Pes6Ball_Current;
extern char D_0058E7F0[];
extern char Pes6MatchSquads[];

void func_00915060(void) {
    M2C_UNK *var_s0;
    s16 temp_v0;
    s32 var_s1;
    u8 temp_a2;

    var_s1 = 0;
    var_s0 = ((void *)D_0058E7F0);
    do {
        temp_a2 = M2C_FIELD(var_s0, u8 *, 0x12);
        if (M2C_FIELD(((M2C_FIELD(var_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900))), u8 *, 0xF8) == 0) {
            M2C_FIELD(var_s0, s32 *, 0xB0) = 0;
            temp_v0 = func_009B3480(var_s0, ((void *)Pes6MatchSquads), temp_a2 * 0x69, M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
            M2C_FIELD(var_s0, s16 *, 0x28) = temp_v0;
            M2C_FIELD(var_s0, s16 *, 0x26) = temp_v0;
        }
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
}
