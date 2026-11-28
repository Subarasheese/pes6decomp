#ifndef PES6_MATCH_REPORT_RANK_H
#define PES6_MATCH_REPORT_RANK_H

#include "types.h"

typedef struct {
    u16 id, reserved02;
    s16 rank;
    u8 reserved06[5], flag, slot, reserved0d, inactive;
} RankRecord;
typedef struct {
    s16 rank;
    u8 reserved02[6], slot, reserved09[7];
} RankSideEntry;
typedef struct {
    s16 count;
    u8 reserved02, active;
    RankRecord records[20];
    u8 reserved144[4];
    RankSideEntry team[2];
} RankSelection;
typedef struct {
    s32 kind;
    u8 reserved04[0x2c];
    s32 mode;
    u8 reserved34[0x8c4];
    RankSelection selection;
} RankState;
typedef char check_rank_record[sizeof(RankRecord) == 0x10 ? 1 : -1];
typedef char check_rank_selection[sizeof(RankSelection) == 0x168 ? 1 : -1];

RankRecord *func_00325730(RankState *state, s32 id);

#endif
