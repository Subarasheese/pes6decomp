/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stat_report.h"
extern void *func_001C48E8(void *, s32, u32);
static inline s32 periodCount(u8 period, u8 side) {
    s32 start = (u8)func_00C18DA0((u8)period);
    s32 end = (u8)func_00C18DA0((u8)(period + 1));
    return func_002C1D20(start, end, side, 0);
}
void func_002BD4C0(MatchTeamReport *out, u8 side) {
    s32 period;
    func_001C48E8(out, 0, sizeof(*out));
    for (period = 0; period < 32; ++period) {
        const s32 index = (u8)func_00C17E10(side, period);
        if (index != 255) {
            func_002BD6F0(&out->players[index], ((u8)side << 5) | ((u8)period & 31));
        }
    }
    for (period = 0; period < 4; ++period) {
        out->byPeriod[period] = periodCount(period, side);
        out->total += out->byPeriod[period];
    }
    out->eventCounts[0] = func_002C1D20(0, 255, side, 2);
    out->eventCounts[1] = func_002C1D20(0, 255, side, 5);
    out->eventCounts[2] = func_002C1D20(0, 255, side, 6);
    out->eventCounts[3] = func_002C1D20(0, 255, side, 12);
    out->eventCounts[4] = func_002C1D20(0, 255, side, 10);
    out->eventCounts[5] = func_002C1D20(0, 255, side, 14);
    out->eventCounts[6] = func_002C1D20(0, 255, side, 15);
    out->eventCounts[7] = func_002C1D20(0, 255, side, 21);
    out->eventCounts[8] = func_002C1D20(0, 255, side, 22);
    out->cards[0] = func_002C1D20(0, 255, side, 16);
    out->cards[1] = func_002C1D20(0, 255, side, 17);
    out->total20 = func_00C121C0(side);
}
