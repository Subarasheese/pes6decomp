/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stat_report.h"
#include "pes6/match_lineup_statistics.h"
void func_002BCD70(s32 mode, const StatPeriod *context) {
    s32 team, slot;
    u8 period;
    if (context && mode == 2) {
        if (mode != 3 && context->period > 0) {
            period = context->period - 1;
            for (team = 0; team < 2; ++team) {
                for (slot = 0; slot < 32; ++slot) {
                    if ((u8)func_00C17DC0(team, slot) != 255 &&
                        (u8)func_00C17E10(team, slot) != 255)
                        func_00C122B0(period, team, slot);
                }
            }
        }
    }
}
