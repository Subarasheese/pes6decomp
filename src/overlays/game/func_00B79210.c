/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 ready;
    u8 pad01[0x347];
} PlayerConditionColumn;
extern PlayerConditionColumn D_00592A78[][32];
extern u8 D_005927BA[], D_005927BB[], D_005927C8[], D_005927B8[];
extern void func_00B257D0(s32 value), func_00B258D0(s32 selection);
extern s32 func_00277220(Pes6SquadExtraState *, s32);
static inline u8 conditionReady(void) { return D_00592A78[D_005927BA[0]][D_005927BB[0]].ready; }
void func_00B79210(void) {
    func_00B257D0(0);
    if (D_005927B8[0]) {
        if (func_00277220(&Pes6MatchSquads[D_005927BA[0]].setupPlayers[D_005927BB[0]].extra, 1) ==
                2 ||
            conditionReady()) {
            if (conditionReady())
                func_00B258D0(1);
            else
                func_00B258D0(2);
            D_005927C8[0] = 0;
            D_005927B8[0] = 0;
        }
    }
}
