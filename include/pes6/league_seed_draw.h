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
    u8 : 4;
    u8 alternateDrawAssigned : 1;
    u8 drawAssigned : 1;
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

extern u8 func_00239E40(u8 group, u8 index);
extern void func_0095FE70(void), func_009869E0(void), func_0094CF50(void), func_0094CE70(void);
static inline void markLeagueRound(void) {
    LeagueSeedRound *current = func_00229380();
    if (current)
        current->flags |= 0x20;
}
static inline u8 leagueRoundMarked(void) {
    LeagueSeedRound *current = func_00229380();
    if (!current)
        return 0;
    if (current->flags & 0x20)
        return 1;
    return 0;
}
static inline void assignControlledLeagueDraw(u8 firstGroup, u8 firstSeed, s32 alternate,
                                              s32 finalize) {
    LeagueSeedDraw *draw;
    LeagueSeedRound *round;
    u8 group;
    u8 slot;
    u8 team;
    u8 next;
    draw = func_002293F0();
    round = func_00229380();
    if (!round)
        return;
    if (!draw)
        return;
    if (D_003E77B0->flags & 0x4000ULL)
        D_003E77B0->flags &= ~8;
    D_003E77B0->flags &= ~0x4000;
    for (slot = 0; slot < 2; ++slot) {
        team = func_00239E40(firstGroup, slot);
        if (func_00225B20(team) == 1)
            break;
    }
    for (group = 0; group < 8; ++group) {
        u8 *start = &draw->teams[func_00236680(group + firstGroup)];
        if (*start == 0xff) {
            *start = team;
            break;
        }
    }
    if (!(D_003E77B0->flags & 8ULL))
        markLeagueRound();
    func_0095FE70();
    func_009869E0();
    func_0094CF50();
    func_0094CE70();
    if (leagueRoundMarked() == 1) {
        group = 0;
        next = firstSeed;
        for (; group < 8; ++group) {
            u8 start = func_00236680(group + firstGroup);
            for (slot = 0; slot < 4; ++slot) {
                if (draw->teams[start + slot] == 0xff) {
                    draw->teams[start + slot] = next++;
                }
            }
        }
        if (finalize) {
            LeagueSeedRound *current = func_00229380();
            if (current)
                current->flags |= 0x80;
        }
    }
    if (alternate)
        round->alternateDrawAssigned = 1;
    else
        round->drawAssigned = 1;
}

#endif
