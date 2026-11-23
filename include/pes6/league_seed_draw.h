#ifndef PES6_LEAGUE_SEED_DRAW_H
#define PES6_LEAGUE_SEED_DRAW_H

#include "types.h"
typedef struct {
    u8 reserved00[0x124];
    u8 active : 1;
    u8 : 7;
} LeagueSeedOrder;
typedef struct {
    u8 teams[0x71];
    u8 offsets[];
} LeagueSeedDraw;
typedef struct {
    u8 reserved00[4];
    u8 flags;
    u8 reserved05;
    u8 : 6;
    u8 seeded : 1;
    u8 : 1;
} LeagueSeedRound;
typedef struct {
    u8 reserved[0xa];
    u8 containsPlayer;
} LeagueSeedSide;
typedef struct {
    u8 reserved[0x20];
    u32 flags;
} LeagueSeedState;

extern LeagueSeedState *D_003E77B0;
extern const u8 D_009C0540[16];
extern LeagueSeedOrder *func_0022C1E0(void);
extern LeagueSeedDraw *func_002293F0(void);
extern LeagueSeedRound *func_00229380(void);
extern LeagueSeedSide *func_0022C140(s32);
extern void func_002332F0(void);
extern u8 func_00236680(u8 group);
extern void func_00239F50(s32 side, s32 slot, s32 team);
extern s32 func_00225B20(s32 team);

static inline void markControlledSide(void) {
    LeagueSeedSide *side = func_0022C140(0);
    if (side) {
        LeagueSeedRound *current;
        side->containsPlayer = 1;
        current = func_00229380();
        if (current)
            current->flags |= 0x40;
    }
}

static inline u8 containsControlled(void) {
    LeagueSeedRound *current = func_00229380();
    if (!current)
        return 0;
    if (current->flags & 0x40)
        return 1;
    return 0;
}

static inline void assignLeagueSeeds(s32 firstGroup) {
    LeagueSeedOrder *order;
    s32 group;
    s32 member;
    LeagueSeedDraw *draw;
    LeagueSeedRound *round;
    s32 team;
    s32 position;

    order = func_0022C1E0();
    draw = func_002293F0();
    round = func_00229380();
    if (!round || !order || !draw)
        return;
    func_002332F0();
    order->active = 1;
    group = 0;
    position = 0;
    for (; group < 8; ++group) {
        for (member = 0; member < 2; ++member) {
            team = draw->teams[draw->offsets[member + func_00236680(group + firstGroup)]];
            func_00239F50(0, D_009C0540[position % 16], team);
            if (func_00225B20(team) == 1)
                markControlledSide();
            ++position;
        }
    }
    round->seeded = 1;
    if ((containsControlled() & 0xff) == 0)
        D_003E77B0->flags |= 8;
}

#endif
