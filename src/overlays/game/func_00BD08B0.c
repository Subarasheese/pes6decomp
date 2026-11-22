/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 func_009B4070(void);
M2C_UNK func_00B26170(u8);
M2C_UNK func_00B261E0(M2C_UNK);
extern char Pes6MatchPlayers[];

void func_00BD08B0(void) {
    s32 var_a0;

    if (!(func_009B4070() & 0xFF)) {
        func_00B261E0(0);
    } else {
        if ((func_009B4070() & 0xFF) != 0xFF) {
            var_a0 = (s32)(func_009B4070() & 0xFF) % 23;
        } else {
            var_a0 = 1;
        }
        func_00B26170(*(((char *)Pes6MatchPlayers) + (var_a0 * 0x240)));
        func_00B261E0(1);
    }
}
