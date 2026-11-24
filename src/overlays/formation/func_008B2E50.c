/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern s32 func_008B9450(u8), func_008BC3B0(void);
extern void func_008EB3B0(void *, s32, u8), func_008EAFC0(void *, u8, const s32 *),
    func_008EB310(void *, s32), func_008EB2D0(void *, u8), func_008EB290(void *, u8);
void func_008B2E50(FormationMenuTeam *side, const FormationTactics *s) {
    s32 levelA;
    s32 levelB;
    u8 flagC, flagD;
    const FormationLayout *current;
    s32 choices[4];
    current = &s->plan.layouts[s->selectedLayout];
    if (func_008B9450(side->side)) {
        flagC = 1;
        levelA = 2;
        levelB = 4;
        flagD = 1;
    } else {
        levelA = side->options.tactics.plan.levelB;
        levelB = side->options.tactics.plan.levelA;
        flagC = s->plan.flagC;
        flagD = s->plan.flagD;
    }
    if (func_008BC3B0()) {
        flagC = 0;
        flagD = 0;
    }
    func_008EB3B0(side->list, 0, current->setting4D);
    func_008EB3B0(side->list, 1, current->setting4F);
    choices[0] = s->plan.choices[0];
    choices[1] = s->plan.choices[1];
    choices[2] = s->plan.choices[2];
    choices[3] = s->plan.choices[3];
    func_008EAFC0(side->list, (u8)levelA, choices);
    func_008EB310(side->list, levelB);
    func_008EB2D0(side->list, flagC);
    func_008EB290(side->list, flagD);
}
