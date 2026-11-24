/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern void func_008EB4F0(void *, s32, FormationWindowLayout *, u8), func_008C9CB0(void *, s32);
void func_008B2F80(FormationMenuTeam *side, s32 mode, s32 kind) {
    FormationWindowLayout layout;
    s32 playerSide = side->side;
    func_008C5230(&layout, kind, playerSide);
    func_008EB4F0(side->list, mode, &layout, side->side);
    func_008B2E50(side, &side->options.tactics);
    func_008C9CB0(side->panel, 0);
}
