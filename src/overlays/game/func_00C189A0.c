/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_lineup_statistics.h"
typedef struct {
    u32 ticks;
    u8 minute, reserved05[15];
    StatListeners listeners;
} MatchClockSample;
extern MatchClockSample D_00CCAF50;
extern s32 Pes6MatchClock_Remaining[];
extern u8 D_00591F13[];
extern s32 func_00C18EE0(void);
extern u8 func_009A0270(void);
extern void func_00C18760(u8);
void func_00C189A0(void) {
    MatchClockSample *state = &D_00CCAF50;
    s32 stoppage;
    u8 stamp;
    if (func_00C18EE0()) {
        ++state->ticks;
        stoppage = Pes6MatchClock_Remaining[0] == 0 || D_00591F13[0] != 0;
        stamp = (stoppage << 7) | (func_009A0270() & 0x7f);
        if (stamp != state->minute)
            func_00C18760((u8)stamp);
    }
}
