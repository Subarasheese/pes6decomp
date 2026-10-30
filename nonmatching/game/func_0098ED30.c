/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0098EC40(M2C_UNK);                       /* extern */
extern char Pes6MatchPlayers[];

u8 func_0098ED30(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    void *var_v0;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 == 0xFF) {
        var_v0 = func_0098EC40(1);
    } else {
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = temp_v1 % 23;
        }
        var_v0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    }
    return M2C_FIELD(var_v0, u8 *, 0x20D);
}
