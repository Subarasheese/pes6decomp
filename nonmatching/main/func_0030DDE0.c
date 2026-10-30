/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C17E10(u8, u8);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CB3300[];

s32 func_0030DDE0(s16 *arg0, s32 arg1) {
    s16 var_v0;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a0;
    u8 temp_s1;
    void *temp_v0;

    temp_v1 = arg1 & 0xFF;
    if (temp_v1 != 0xFF) {
        var_a0 = temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_v0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    temp_s1 = M2C_FIELD(temp_v0, u8 *, 0x12);
    temp_a2 = func_00C17E10(temp_s1, M2C_FIELD(temp_v0, u8 *, 0x11)) & 0xFF;
    var_v0 = 0xFF;
    if (temp_a2 != 0xFF) {
        var_v0 = M2C_FIELD(((temp_a2 * 0x28) + (((temp_s1 & 0xFF) * 0x2F4) + (*(s32 *)D_00CB3300))), s16 *, 0x30);
    }
    *arg0 = var_v0;
    return 1;
}
