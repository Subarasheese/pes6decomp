/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00A9C660(void *);
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B33F0(void *, void *);                  /* extern */
s32 func_00AFBA70(u8);                              /* extern */
extern char Pes6MatchPlayers[];

s32 func_00AD9C60(void *arg0) {
    s32 var_s2;
    u16 temp_s1;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x4C);
    if ((temp_v1 != 2) && (temp_v1 != 1)) {
        return 0;
    }
    if ((func_00AFBA70(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 0xFF) {
        var_s2 = 1;
    } else {
        var_s2 = (s32) (func_00AFBA70(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
    }
    temp_s1 = func_00A9C660(arg0);
    if ((func_009B30B0(temp_s1, func_009B33F0(arg0, ((void *)Pes6MatchPlayers) + (var_s2 * 0x240))) & 0xFFFF) >= 0x18) {
        M2C_FIELD(arg0, u8 *, 0x4C) = 0U;
        return 1;
    }
    return 0;
}
