/* compiler: mwcc-3.0.1b210 */
#include "pes6/game_event_callback.h"

void func_00C6C9D0(void) {
    GameEventCallback *event = D_00CCBB40;
    if (D_00CCBB40[0].update)
        event->update();
}
