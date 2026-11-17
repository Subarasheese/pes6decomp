/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00997EB0(void *);
extern char Pes6MatchPlayers[];
extern u8 D_00591E4F[];
extern u8 D_00591E50[];

s32 func_00A09230(u8 *arg0) {
    s32 idx;
    s32 var_a0;
    u8 a;
    u8 b;

    idx = arg0[0x13] * 2;
    a = D_00591E4F[idx];
    if (arg0[0] == a) {
        return 1;
    }
    if (arg0[0] == D_00591E50[idx]) {
        return 1;
    }
    if (a == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = a % 23;
    }
    if (func_00997EB0(Pes6MatchPlayers + var_a0 * 0x240) == 0) {
        return 0;
    }
    b = D_00591E50[arg0[0x13] * 2];
    if (b == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = b % 23;
    }
    if (func_00997EB0(Pes6MatchPlayers + var_a0 * 0x240) != 0) {
        return 1;
    }
    return 0;
}
