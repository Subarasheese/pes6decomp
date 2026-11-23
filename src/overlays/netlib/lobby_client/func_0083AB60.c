/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_match_counters.h"

extern u8 D_008AAFF8[], D_008AAF80[];
extern s32 func_008764C0(void *, s8);
s32 func_0083AB60(s32 channel, s8 side, u16 index) {
    LobbyChannel *connection = func_00D0BAF0();
    func_0082B4C0(channel);
    if (netlib_controls_counters() == 1) {
        if (side == 1) {
            if (index < 40) {
                D_008AAFF8[index] += 1;
            }
            return 4;
        }
    } else if (side == 0) {
        if (index < 40) {
            D_008AAFF8[index] += 1;
        }
        return 4;
    }
    if (!connection)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    if (func_00862110(connection, channel) == 1) {
        if (func_008764C0(&connection[channel], (s8)index) == 0) {
            if (index < 40) {
                D_008AAF80[index] += 1;
            }
            if (func_00827450(channel) == 1)
                return 3;
            return 4;
        } else {
            if (index < 40) {
                D_008AAF80[index] += 1;
            }
            if (func_00827450(channel) == 1)
                return 3;
            return 2;
        }
    } else {
        if (func_00827450(channel) == 1)
            return 3;
        return 2;
    }
}
