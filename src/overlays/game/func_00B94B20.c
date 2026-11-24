/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 eligible;
    u8 reserved01[0x347];
} EligibilityColumn;
extern EligibilityColumn D_00592A54[][32];
typedef struct {
    u8 player;
    u8 reserved[7];
} LineupChange;
typedef struct {
    u8 reserved00[0x53];
    LineupChange changes[7];
} MatchLineup;
typedef struct {
    u8 starter;
    u8 reserved[0x8a];
} StartingColumn;
typedef struct {
    u8 reserved00[0xf8], first[2];
} LineupStatus;
extern MatchLineup D_00591A90[];
extern StartingColumn D_00591A97[];
extern LineupStatus D_00591E00;
extern u8 D_00591EF6[];
extern s32 func_002781A0(u8 side);
extern void func_009832E0(u8 side), func_0028C320(s32 team);
void func_00B94B20(s32 team, s32 slot, s32 check) {
    s32 i;
    s32 count;
    D_00592A54[(u8)team][(u8)slot].eligible = 0;
    if (!func_002781A0((u8)team) && check) {
        count = D_00591EF6[(u8)team];
        for (i = 0; i < count; ++i)
            if ((u8)slot == D_00591A90[(u8)team].changes[D_00591E00.first[(u8)team] + i].player)
                break;
        if ((u8)slot != D_00591A97[(u8)team].starter)
            i = count + 1;
        if (i == count)
            func_009832E0((u8)team);
    }
    func_0028C320(team);
}
