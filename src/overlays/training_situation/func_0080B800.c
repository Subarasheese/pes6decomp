/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char Pes6MatchState_Current[];
extern char D_00591E4C[];
extern char D_00592810[];

s32 func_0080B800(void *arg0) {
    int value;
    float value2;
    s32 value3;
    void *entry;
    value2 = 0.0f;
    value3 = 0;
    entry = arg0;
    if (((*((f32 *)(((s8 *)arg0) - -0x48))) != value2) ||
        ((*((f32 *)(((s8 *)entry) + 0x4C))) != value2)) {
        value3 = 1;
    }
    if (((*((u8 *)Pes6MatchState_Current)) == (*((u8 *)D_00592810))) ||
        ((*((u8 *)D_00591E4C)) == (*((u8 *)D_00592810)))) {
        value = 1;
        value3 = value;
    }
    return value3;
}
