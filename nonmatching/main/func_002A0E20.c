/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00299FE0(s32);                           /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];

f32 func_002A0E20(s32 arg0) {
    s32 temp_a0;
    s32 var_f0;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 >= 0x17) {
        if (temp_a0 < 0x1B) {
            var_f0 = M2C_FIELD(func_00299FE0(temp_a0 - 0x17), s32 *, 8);
            goto block_14;
        }
        switch (temp_a0) {                          /* irregular */
        case 27:
            var_f0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
            goto block_14;
        case 28:
            return 0.0f;
        default:
            return 0.0f;
        }
    } else {
        var_f0 = M2C_FIELD((((void *)Pes6MatchPlayers) + (temp_a0 * 0x240)), s32 *, 0x1C);
block_14:
        return (f32) var_f0;
    }
}
