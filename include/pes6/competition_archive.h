#ifndef PES6_COMPETITION_ARCHIVE_H
#define PES6_COMPETITION_ARCHIVE_H

#include "pes6/competition_save_state.h"

enum { SAVED_COMPETITION_COUNT = 19 };
typedef struct {
    u8 competitionId, reserved01[0x1bdc - 1];
} SavedCompetition;

typedef struct {
    u8 reserved00[0x8b69c];
    SavedCompetition competitions[SAVED_COMPETITION_COUNT];
} CompetitionArchive;

static inline CompetitionArchive *savedArchive(void) {
    if (competitionDataUnavailable() == 1)
        return 0;
    return (CompetitionArchive *)Pes6SaveData_Current;
}

static inline SavedCompetition *archiveAt(u8 index) {
    CompetitionArchive *archive = savedArchive();
    if (competitionDataUnavailable() == 1)
        return 0;
    if (!archive)
        return 0;
    if (index >= SAVED_COMPETITION_COUNT)
        return 0;
    return &archive->competitions[index];
}

#endif
