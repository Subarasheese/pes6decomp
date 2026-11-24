/* compiler: mwcc-3.0.1b151 */
#include "types.h"
#include "pes6/match_setup_callbacks.h"
void func_002562B0(s32 index) {
    MatchCallbacks *table = D_0058CDA0;
    if (index < 20 && table->ordinary[index])
        table->ordinary[index]();
}
