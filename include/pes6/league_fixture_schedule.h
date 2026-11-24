#ifndef PES6_LEAGUE_FIXTURE_SCHEDULE_H
#define PES6_LEAGUE_FIXTURE_SCHEDULE_H
#include "types.h"

enum { LEAGUE_SCHEDULE_STAGES = 20 };
typedef struct {
    u8 day, reserved01, teams, daysPerCycle, rounds, pairs, scoreParts, cycles, series,
        reserved09[2], entryCount;
} LeagueScheduleStage;
typedef struct {
    u8 reserved00[0x16f1], selectedStage;
    u8 reserved16F2[0x4616 - 0x16f2], stageGroups[LEAGUE_SCHEDULE_STAGES],
        reserved462A[0x4ab6 - 0x462a];
    LeagueScheduleStage stages[LEAGUE_SCHEDULE_STAGES];
} LeagueSchedule;
extern void *func_00229460(void);
extern s32 Pes6SaveData_IsUnavailable(void);
extern LeagueScheduleStage *Pes6SaveData_GetEntry7980(s32 index);
extern u8 func_00229010(u8 index);
extern u8 func_00236680(u8 stage);
#endif
