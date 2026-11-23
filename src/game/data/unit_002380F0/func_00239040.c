/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/cup_round_order.h"

void func_00239040(u8 teams, u8 format, u8 flags) {
    u8 round;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    round = newCupRound(teams, format, flags, 0, 1);
    func_002398C0(round);
    startCupRound(round);
    func_002396B0(round);
}
