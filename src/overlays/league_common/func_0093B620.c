/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
typedef struct {
    u32 first : 7, second : 7, third : 7, fourth : 7;
    u32 extra : 3;
    u32 : 1;
} RatingGroup;
typedef struct {
    u32 first : 7, second : 7, third : 7, fourth : 7;
    u32 digit : 4;
} DecimalGroup;
typedef struct {
    u32 first : 7, second : 7, marker : 8;
    u32 : 10;
} LastGroup;
typedef struct {
    RatingGroup physical, movement, passing, shooting;
    DecimalGroup setPiece, technique;
    LastGroup last;
} SavedRatings;
typedef struct {
    u8 reserved[0x11624];
    SavedRatings players[0x11f5];
} LeagueSave;
typedef struct {
    u8 header[0x34];
    Pes6EditPlayerParams params;
} LeaguePlayer;
extern LeaguePlayer D_009C9700[];
extern LeagueSave *func_00228A80(void);
extern void func_00937C00(u16 slot);
extern void func_00220240(LeaguePlayer *players, s32 group);
void func_0093B620(void) {
    u16 slot;
    LeagueSave *save;
    for (slot = 1; slot < 0x11f5; slot++) {
        save = func_00228A80();
        if (save) {
            func_00937C00(slot);
            D_009C9700[slot].params.attack = save->players[slot].physical.first;
            D_009C9700[slot].params.defence = save->players[slot].physical.second;
            D_009C9700[slot].params.balance = save->players[slot].physical.third;
            D_009C9700[slot].params.stamina = save->players[slot].physical.fourth;
            D_009C9700[slot].params.speed = save->players[slot].movement.first;
            D_009C9700[slot].params.accel = save->players[slot].movement.second;
            D_009C9700[slot].params.response = save->players[slot].movement.third;
            D_009C9700[slot].params.agility = save->players[slot].movement.fourth;
            D_009C9700[slot].params.condition = save->players[slot].movement.extra;
            D_009C9700[slot].params.dribAcc = save->players[slot].passing.first;
            D_009C9700[slot].params.dribSpe = save->players[slot].passing.second;
            D_009C9700[slot].params.sPassAcc = save->players[slot].passing.third;
            D_009C9700[slot].params.sPassSpe = save->players[slot].passing.fourth;
            D_009C9700[slot].params.wfa = save->players[slot].passing.extra;
            D_009C9700[slot].params.lPassAcc = save->players[slot].shooting.first;
            D_009C9700[slot].params.lPassSpe = save->players[slot].shooting.second;
            D_009C9700[slot].params.shotAcc = save->players[slot].shooting.third;
            D_009C9700[slot].params.shotPow = save->players[slot].shooting.fourth;
            D_009C9700[slot].params.wff = save->players[slot].shooting.extra;
            D_009C9700[slot].params.shotTec = save->players[slot].setPiece.first;
            D_009C9700[slot].params.fk = save->players[slot].setPiece.second;
            D_009C9700[slot].params.curling = save->players[slot].setPiece.third;
            D_009C9700[slot].params.heading = save->players[slot].setPiece.fourth;
            D_009C9700[slot].params.jump = save->players[slot].technique.first;
            D_009C9700[slot].params.tech = save->players[slot].technique.second;
            D_009C9700[slot].params.aggress = save->players[slot].technique.third;
            D_009C9700[slot].params.mental = save->players[slot].technique.fourth;
            D_009C9700[slot].params.gkAbil = save->players[slot].last.first;
            D_009C9700[slot].params.team = save->players[slot].last.second;
            D_009C9700[slot].params.field_22 = save->players[slot].last.marker;
            D_009C9700[slot].params.age =
                save->players[slot].technique.digit + save->players[slot].setPiece.digit * 10;
        }
    }
    func_00220240(D_009C9700, 2);
}
