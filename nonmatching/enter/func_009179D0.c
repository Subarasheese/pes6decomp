/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AFD20(void);
extern void func_00207360(int);
extern void func_0027A770(void);
extern char Pes6MatchPlayers[];

void func_009179D0(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)Pes6MatchPlayers);
    do {
        func_00207360(M2C_FIELD(var_s0, s32 *, 4));
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
    func_001AFD20();
    func_0027A770();
}
