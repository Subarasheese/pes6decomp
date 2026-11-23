/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1, b6 : 1, b7 : 1;
} PlayerFlags;
extern u8 D_00591C09[];
extern PlayerFlags Pes6MatchSettings_RandomFlags, D_003E9A7D;
void func_0023DF20(s32 index, s32 value) {
    if (D_00591C09[0] == 0 || D_00591C09[0] == 7 || D_00591C09[0] == 5) {
        switch (index) {
        case 0:
            Pes6MatchSettings_RandomFlags.b0 = value;
            break;
        case 1:
            Pes6MatchSettings_RandomFlags.b1 = value;
            break;
        case 2:
            Pes6MatchSettings_RandomFlags.b2 = value;
            break;
        case 3:
            Pes6MatchSettings_RandomFlags.b3 = value;
            break;
        case 4:
            Pes6MatchSettings_RandomFlags.b4 = value;
            break;
        case 5:
            Pes6MatchSettings_RandomFlags.b5 = value;
            break;
        case 6:
            Pes6MatchSettings_RandomFlags.b6 = value;
            break;
        case 7:
            Pes6MatchSettings_RandomFlags.b7 = value;
            break;
        case 8:
            D_003E9A7D.b0 = value;
            break;
        }
    }
}
