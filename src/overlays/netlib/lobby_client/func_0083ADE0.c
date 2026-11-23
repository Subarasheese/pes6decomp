/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_match_counters.h"

extern u8 D_008AAFD0[], D_008AAF58[];
extern s8 D_008AA100[];
extern s32 func_008765B0(void *, s8);
s32 func_0083ADE0(s32 channel, s8 side, u16 index) {
    LobbyChannel *connection = func_00D0BAF0();
    func_0082B4C0(channel);
    if (netlib_controls_counters() == 1) {
        if (side == 1) {
            if (index < 40) {
                D_008AAFD0[index] += 1;
            }
            return 4;
        }
    } else if (side == 0) {
        if (index < 40) {
            D_008AAFD0[index] += 1;
        }
        return 4;
    }
    if (!connection)
        return 2;
    if (channel < 0 || channel >= 9)
        return 2;
    if (func_00862110(connection, channel) == 1) {
        s32 sent;
        if (D_008AA100[0] != 4)
            sent = func_008765B0(&connection[channel], (s8)index);
        else
            sent = func_008765B0(&connection[channel], -1);
        if (!sent) {
            if (D_008AA100[0] != 4 && index < 40) {
                D_008AAF58[index] += 1;
            }
            return netlib_channel_result(channel, 4);
        } else {
            if (D_008AA100[0] != 4 && index < 40) {
                D_008AAF58[index] += 1;
            }
            return netlib_channel_result(channel, 2);
        }
    } else {
        return netlib_channel_result(channel, 2);
    }
}
