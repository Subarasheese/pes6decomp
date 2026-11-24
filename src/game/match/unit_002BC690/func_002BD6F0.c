/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stat_report.h"
extern void *func_001C48E8(void *, s32, u32);
void func_002BD6F0(MatchPlayerReport *out, u8 player) {
    s32 period, start, end;
    u8 side = ((u8)player >> 5) & 1, slot = (u8)player & 31;
    s16 *value;
    out->total = 0;
    for (period = 0, value = out->byPeriod; period < 4; ++period, ++value) {
        start = (u8)func_00C18DA0((u8)period);
        end = (u8)func_00C18DA0((u8)((u8)period + 1));
        *value = func_002C2100(start, end, player, 0);
        out->total += *value;
    }
    out->eventCounts[0] = func_002C2100(0, 255, player, 1);
    out->eventCounts[1] = func_002C2100(0, 255, player, 18);
    out->eventCounts[2] = func_002C2100(0, 255, player, 4);
    out->eventCounts[3] = func_002C2100(0, 255, player, 12);
    out->eventCounts[4] = func_002C2100(0, 255, player, 10);
    out->eventCounts[5] = func_002C2100(0, 255, player, 14);
    out->cards[0] = func_002C2100(0, 255, player, 16);
    out->cards[1] = func_002C2100(0, 255, player, 17);
    out->value20 = func_00C12150(side, slot);
    out->playerRating = (f32)func_00C222B0(side, slot);
}
