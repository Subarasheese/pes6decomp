/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_presentation.h"
typedef struct {
    u8 pad00[0x24];
    s32 selected;
} PresentationChoice;
extern s32 Pes6MatchFlow_GetState(s32), func_00BF6280(void), func_00301A90(Presentation *);
extern void func_002D4BE0(s32);
extern s32 D_003B4F00[];
s32 func_00301A00(Presentation *state) {
    PresentationChoice *choice = state->work;
    if ((Pes6MatchFlow_GetState(1) & 255) == 12 && func_00BF6280() != 2) {
        func_002D4BE0(D_003B4F00[choice->selected]);
        func_00305E60(state, func_00301A90);
        return 1;
    }
    return 0;
}
