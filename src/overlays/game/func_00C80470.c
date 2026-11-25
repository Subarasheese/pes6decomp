/* compiler: mwcc-3.0.1b210 */
#include "pes6/game_flags.h"
void func_00C80470(s32 setting) {
    if (!setting) {
        D_00CCC1C0[0].bit0 = setting;
        D_00CCC1C0[0].bit1 = 1;
    }
}
