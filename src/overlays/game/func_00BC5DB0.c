/* compiler: mwcc-3.0.1b151 */

#include "pes6/highlight_requests.h"

extern s32 Pes6MatchClock_Remaining[];
extern s32 func_00BC9890(void);
extern s32 func_00BC98E0(void);

static inline s32 atLeast(s32 value, s32 minimum) { return minimum <= value; }
void func_00BC5DB0(HighlightRequest *request, s32 state) {
    s32 slot = -1;
    s32 least = func_00BC9890();
    s32 event = 10;
    switch (state) {
    case 5:
        event = 6;
        break;
    case 6:
        event = 9;
        break;
    }
    if (event != 10 &&
        (func_00BC98E0() || D_00CBD3B7[least].value || !(0 < D_00CBD3BA[least].value)))
        slot = func_00BC71E0(D_003E758C, request->actor, 255, HIGHLIGHT_SAVED_PRIORITY, event, 0);
    if (atLeast(slot, 0)) {
        request->field04 = 0;
        request->slot = slot;
        request->serial = Pes6MatchClock_Remaining[0];
        request->keep = 0;
    } else
        request->state = 0;
}
