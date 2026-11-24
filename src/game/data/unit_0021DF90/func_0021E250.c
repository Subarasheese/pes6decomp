/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/club_roster.h"

void func_0021E250(u16 team, u16 value) {
    if ((u32)((u16)team - SAVED_FIRST) < 2) {
        clubInfo(team)->teamId = value;
    }
}
