#ifndef PES6_CUP_TEAM_ORDER_H
#define PES6_CUP_TEAM_ORDER_H

#include "types.h"
typedef struct {
    u8 reserved00[0xc4];
    u8 positions[];
} CupOrder;
typedef struct {
    u8 reserved00[0x1364];
    u8 count;
} CupTeams;
typedef struct {
    u8 reserved00[0x4acb];
    u8 flag;
} CupSetup;
extern CupOrder *func_0022C1E0(void);
extern CupSetup *func_00229460(void);
extern CupTeams *func_002293F0(void);
extern s32 func_00230380(void);
extern void func_0097D050(u8 count), func_002387A0(int kind, int enabled),
    func_00238740(int kind, u8 count), func_00239210(u8 count, s32 p1, s32 p2, s32 p3, s32 p4),
    func_0097CFC0(int kind, int value);

static inline void initializeCupTeamOrder(int groupMode, int rankingMode, int resetFlag,
                                          int setSecond) {
    CupOrder *order = func_0022C1E0();
    CupSetup *setup = func_00229460();
    CupTeams *teams = func_002293F0();
    u8 i;
    u8 seed;
    s32 showExtra;
    if (order && setup && teams) {
        showExtra = func_00230380() == 1;
        func_0097D050(teams->count);
        func_002387A0(0, 1);
        func_002387A0(1, 0);
        func_00238740(0, teams->count);
        i = 0;
        seed = 0;
        while (i < teams->count) {
            order->positions[i] = seed;
            ++seed;
            ++i;
        }
        func_00239210(teams->count, 0, groupMode, rankingMode, 1);
        func_0097CFC0(0, 1);
        if (resetFlag)
            setup->flag = 0;
        else if (setSecond)
            func_0097CFC0(1, 0);
        if (showExtra)
            func_0097CFC0(2, 1);
        else
            func_0097CFC0(2, 0);
    }
}
#endif
