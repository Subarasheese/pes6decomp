/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A14EC0(u8 *, void *);                    /* extern */
M2C_UNK func_00AABD50(u8 *);                        /* extern */
s32 func_00AFBA70(u8);                              /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];

u8 func_00AB4370(u8 *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    s32 var_a0;
    s32 var_v0;
    u8 temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (((s32) temp_a0 > 0) && ((s32) temp_a0 < 0x17)) {
        var_v0 = 1;
    }
    if (var_v0 != 0) {
        temp_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
        temp_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
        if ((func_00AFBA70(temp_a0) & 0xFF) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (func_00AFBA70(*arg0) & 0xFF) % 23;
        }
        if (func_00A14EC0(arg0, ((void *)Pes6MatchPlayers) + (var_a0 * 0x240)) == 0) {
            func_00AABD50(arg0);
        }
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = temp_f21;
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = temp_f20;
        return M2C_FIELD(Pes6Ball_Current, u8 *, 0x68);
    }
    return 0x7FFFFFFFU;
}
