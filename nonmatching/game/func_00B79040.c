/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00182B30(int);
extern void func_0017E120(int);
extern void func_00207360(int);
M2C_UNK func_00B27010();                            /* extern */
extern char Pes6MatchPlayers[];

void func_00B79040(s32 arg0) {
    M2C_UNK *var_s1;
    s32 var_s0;

    func_00B27010();
    func_0017E120(arg0);
    if (arg0 == 1) {
        var_s0 = 0;
        var_s1 = ((void *)Pes6MatchPlayers);
        do {
            func_00207360(M2C_FIELD(var_s1, s32 *, 4));
            var_s0 += 1;
            var_s1 += 0x240;
        } while (var_s0 < 0x17);
    }
    if (arg0 != 0) {
        func_00182B30(1);
    } else {
        func_00182B30(0);
    }
}
