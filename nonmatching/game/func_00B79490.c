/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char D_0059237D[];

s32 func_00B79490(void) {
    M2C_UNK *var_s2;
    s32 var_s0;
    s32 var_s1;
    u16 temp_v1;
    void *temp_a0;

    if ((*(u8 *)D_0059237D) != 0) {
        var_s0 = 0x17;
        var_s2 = ((void *)Pes6MatchPlayers);
    } else {
        var_s0 = 0x16;
        var_s2 = ((void *)D_0058E7F0);
    }
    var_s1 = 0;
    if (var_s0 > 0) {
        do {
            temp_a0 = M2C_FIELD(var_s2, void **, 4);
            if (M2C_FIELD(temp_a0, u8 *, 0x2C) != 0) {
                temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
                if (((s32) temp_v1 >= 0x5CA) && ((s32) temp_v1 < 0x5E2)) {
                    func_00209A00(temp_a0, 0x1BF, 0);
                    M2C_FIELD(var_s2, s8 *, 0x16) = 0xFD;
                    M2C_FIELD(var_s2, s16 *, 0x18) = 0;
                }
            }
            var_s1 += 1;
            var_s2 += 0x240;
        } while (var_s1 < var_s0);
    }
    return 0;
}
