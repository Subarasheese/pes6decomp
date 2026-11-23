/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_channel_status.h"

s32 func_0082B4C0(s32 channel) {
    s32 status = func_0082B290(channel);
    if (status == -150)
        return 1;
    if (D_008A4398[0] == 0)
        return 1;
    if (D_008A43B0[0] == 1)
        return 1;
    switch (status) {
    case -73:
        return 1;
    case -62:
        return 1;
    default:
        return func_00862110(D_008A4398[0], channel) == 0;
    }
}
