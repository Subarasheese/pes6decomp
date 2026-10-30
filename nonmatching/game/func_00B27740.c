/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00292F00(u8);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591C09[];

s32 func_00B27740(void *arg0) {
    s32 var_a0;
    s32 var_s1;
    void *var_s0;

    if ((*(u8 *)D_00591C09) == 5) {
        if (M2C_FIELD(arg0, u8 *, 0x13) != 0) {
            var_a0 = 0xC;
        } else {
            var_a0 = 1;
        }
        var_s1 = 0;
        var_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        do {
            if ((M2C_FIELD(M2C_FIELD(var_s0, void **, 4), u8 *, 0x2C) != 0) && (M2C_FIELD(var_s0, u8 *, 0x16) != 0xFF)) {
                func_00292F00(M2C_FIELD(var_s0, u8 *, 0x10));
            }
            var_s1 += 1;
            var_s0 += 0x240;
        } while (var_s1 < 0xB);
    }
    return 1;
}
