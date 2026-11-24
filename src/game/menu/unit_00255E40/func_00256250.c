/* compiler: mwcc-3.0.1b151 */
#include "types.h"
#include "pes6/match_setup_callbacks.h"
void func_00256250(s32 side, s32 group) {
    MatchCallbacks *table = D_0058CDA0;
    if (D_0058CDF0[group][side])
        table->bySide[group][side]();
}
