/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_009EE580(char *);
extern char Pes6MatchPlayers[];

void func_009EFC40(s32 arg0) {
    s32 var_a0;
    char *temp_s0;

    if (arg0 != 0xFF) {
        var_a0 = arg0 % 23;
    } else {
        var_a0 = 1;
    }
    temp_s0 = ((char *)Pes6MatchPlayers) + (var_a0 * 0x240);
    M2C_FIELD(temp_s0, s32 *, 0x90) = func_009EE580(temp_s0);
}
