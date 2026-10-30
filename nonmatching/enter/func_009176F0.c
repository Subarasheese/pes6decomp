/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209830(void *);                      /* extern */
s32 func_00299FE0(s32);                             /* extern */
M2C_UNK func_0090F940(s32);                         /* extern */
M2C_UNK func_00910100(M2C_UNK *);                   /* extern */
extern char Pes6MatchPlayers[];
extern char D_0092F0D0[];

void func_009176F0(void) {
    M2C_UNK *var_s1;
    s32 var_s0;
    s32 var_s0_2;
    void *temp_a0;

    var_s1 = ((void *)Pes6MatchPlayers);
    var_s0 = 0;
    do {
        temp_a0 = M2C_FIELD(var_s1, void **, 4);
        if ((M2C_FIELD(temp_a0, u8 *, 0x2C) != 0) || ((*(s32 *)D_0092F0D0) & 0x10)) {
            func_00209830(temp_a0);
            if (M2C_FIELD(var_s1, s32 *, 0x94) == 0) {
                func_00910100(var_s1);
            }
        }
        var_s0 = (var_s0 + 1) & 0xFF;
        var_s1 += 0x240;
    } while (var_s0 < 0x17);
    if ((*(s32 *)D_0092F0D0) & 0x80) {
        var_s0_2 = 0;
        do {
            func_0090F940(func_00299FE0(var_s0_2 & 0xFF));
            var_s0_2 = (var_s0_2 + 1) & 0xFF;
        } while (var_s0_2 < 3);
    }
}
