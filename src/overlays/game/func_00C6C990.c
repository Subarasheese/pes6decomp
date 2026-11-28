/* compiler: mwcc-3.0.1b210 */
#include "pes6/game_event_callback.h"

extern void func_002D33D0(s32, s32);
extern void func_00182AE0(s32);

void func_00C6C990(void) {
    func_002D33D0(1, 0x14D);
    D_00CCBB40[0].state = 0;
    D_00CCBB40[0].active = 0;
    D_00CCBB40[0].update = 0;
    func_00182AE0(1);
}
