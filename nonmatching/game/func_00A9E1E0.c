/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0090B2D0(void *, u8 *);                /* extern */
s32 func_00AFBA70(u8);                              /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];

void func_00A9E1E0(u8 *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    s32 var_a1;
    s32 var_s1;
    void *var_s0;

    temp_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    temp_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
    if (((func_00AFBA70(*arg0) & 0xFF) + 1) == 0xFF) {
        var_a1 = 1;
    } else {
        var_a1 = (func_00AFBA70(*arg0) & 0xFF) + 1;
    }
    var_s1 = 0;
    var_s0 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
    do {
        if (M2C_FIELD(M2C_FIELD(var_s0, void **, 4), u8 *, 0x2C) != 0) {
            func_0090B2D0(var_s0, arg0);
        }
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0xA);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = temp_f21;
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = temp_f20;
}
