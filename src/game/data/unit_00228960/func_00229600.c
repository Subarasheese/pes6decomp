/* compiler: mwcc-3.0.1b210 */
#include "pes6/club_roster.h"
extern u8 *func_0022F190(void);
extern s32 Pes6SaveData_IsUnavailable(void);
extern u16 func_00225720(void);
typedef struct {
    u32 callName;
    u8 params[72];
    u16 name[16];
    char shirtName[16];
    u16 reserved7C, playerId;
} CareerPlayer;
static inline CareerPlayer *careerPlayerAt(u8 slot) {
    u8 *base = func_0022F190();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!base)
        return 0;
    if (slot >= 37)
        return 0;
    return (CareerPlayer *)(base + slot * sizeof(CareerPlayer) + 0x8a310);
}
u8 func_00229600(s32 id) {
    s32 slot;
    Pes6MatchTeamData *team;
    CareerPlayer *src;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if ((u16)id >= 0x7060 && (u16)id < 0x70a0) {
        team = func_00237530(func_00225720());
        if (!team)
            return 0xff;
        for (slot = 0; slot < CLUB_SLOTS; slot++) {
            if ((u16)id == team->playerIds[slot]) {
                id = team->originalPlayerIds[slot];
                break;
            }
        }
    }
    for (slot = 0; slot < CLUB_SLOTS; slot++) {
        src = careerPlayerAt(slot);
        if (src && (u16)id == src->playerId)
            return (u8)slot;
    }
    return 0xff;
}
