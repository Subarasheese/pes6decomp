/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request.h"

u8 *func_00948C00(void) {
    u8 *state = (u8 *)func_0082C2A0();
    if (!state) {
        state = 0;
        return state;
    }
    state = (u8 *)(state + 0x11560);
    return state;
}
