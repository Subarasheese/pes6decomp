#ifndef PES6_MATCH_ARCHIVE_ROWS_H
#define PES6_MATCH_ARCHIVE_ROWS_H

#include "types.h"

enum { MATCH_ARCHIVE_SLOTS = 19 };

typedef struct {
    u8 competitionId, state : 2, stage : 6;
    u8 roster[2][18];
    u16 players[2][18];
    u8 reserved6E[0x1bdc - 0x6e];
} ArchiveRow;
typedef struct {
    u8 reserved00[0x8b69c];
    ArchiveRow rows[MATCH_ARCHIVE_SLOTS];
} ArchiveIndex;
extern u8 *Pes6SaveData_Current;
extern s32 Pes6SaveData_GetUnavailableFlag(void);
static inline s32 matchArchiveUnavailable(void) { return Pes6SaveData_GetUnavailableFlag() != 0; }
static inline ArchiveIndex *matchArchive(void) {
    if (matchArchiveUnavailable() == 1)
        return 0;
    return (ArchiveIndex *)Pes6SaveData_Current;
}

#endif
