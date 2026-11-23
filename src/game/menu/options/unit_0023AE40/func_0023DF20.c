/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_random_settings.h"

extern u8 D_00591C09[];

void func_0023DF20(s32 index, s32 value) {
    if (D_00591C09[0] == 0 || D_00591C09[0] == 7 || D_00591C09[0] == 5) {
        switch (index) {
        case 0:
            Pes6MatchSettings_RandomFlags.stadium = value;
            break;
        case 1:
            Pes6MatchSettings_RandomFlags.time = value;
            break;
        case 2:
            Pes6MatchSettings_RandomFlags.season = value;
            break;
        case 3:
            Pes6MatchSettings_RandomFlags.weather = value;
            break;
        case 4:
            Pes6MatchSettings_RandomFlags.kits = value;
            break;
        case 5:
            Pes6MatchSettings_RandomFlags.stadiumOptionC4 = value;
            break;
        case 6:
            Pes6MatchSettings_RandomFlags.stadiumOptionC5 = value;
            break;
        case 7:
            Pes6MatchSettings_RandomFlags.ball = value;
            break;
        case 8:
            D_003E9A7D.optionD1 = value;
            break;
        }
    }
}
