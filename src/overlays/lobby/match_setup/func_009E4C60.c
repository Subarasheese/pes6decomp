/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_match_controls.h"
extern void func_001D7F10(void *), func_002E4570(void *), func_002DF960(void *),
    func_0099C7C0(void *);
s32 func_009E4C60(void) {
    if (!D_00A7DF08[0])
        return 0;
    func_001D7F10(D_00A7DF08[0]->widgets[0]);
    func_001D7F10(D_00A7DF08[0]->widgets[1]);
    func_001D7F10(D_00A7DF08[0]->widgets[2]);
    func_001D7F10(D_00A7DF08[0]->controls[0]);
    func_001D7F10(D_00A7DF08[0]->controls[1]);
    func_002E4570(D_00A7DF08[0]->background);
    func_002DF960(D_00A7DF08[0]->cursor);
    func_0099C7C0(D_00A7DF08[0]);
    D_00A7DF08[0] = 0;
    return 1;
}
