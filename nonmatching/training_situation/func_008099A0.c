/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, s32);                        /* extern */
s32 func_009B33F0(void *, void *);                  /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];

s32 func_008099A0(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    void *temp_s0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 8);
    var_v0 = 0;
    if ((*(u8 *)D_00591E4C) == temp_a1) {
        if (temp_a1 == 0xFF) {
            var_a1 = 1;
        } else {
            var_a1 = temp_a1 % 23;
        }
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
        temp_s0 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
        if (temp_v1 != 0xFF) {
            var_a0 = temp_v1 % 23;
        } else {
            var_a0 = 1;
        }
        if ((func_009B3070(M2C_FIELD(temp_s0, u16 *, 0x26), func_009B33F0(temp_s0, ((void *)Pes6MatchPlayers) + (var_a0 * 0x240)) & 0xFFFF) & 0xFFFF) >= 0x2000) {
            return 2;
        }
        var_v0 = 1;
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
