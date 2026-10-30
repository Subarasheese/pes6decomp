/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00911780(M2C_UNK *);                   /* extern */
extern char Pes6MatchPlayers[];

void func_009176A0(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)Pes6MatchPlayers);
    do {
        func_00911780(var_s0);
        var_s1 = (var_s1 + 1) & 0xFF;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
}
