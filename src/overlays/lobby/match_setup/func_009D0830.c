/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "pes6/lobby_match_setup_page.h"
extern void func_002DF8E0(void *, s32), func_009CE890(void);
s32 func_009D0830(void) {
    if (!D_00A7DDF8)
        return 0;
    func_002DF8E0(D_00A7DDF8->selectionControl, 0);
    D_00A7DDF8->selection = 0xff;
    func_009CE890();
    return 1;
}
