/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_archive_rows.h"

typedef struct {
    u8 reserved00[0x28], selected;
} ArchiveSession;
extern void *memset(void *at, s32 value, u32 count);
static inline ArchiveSession *archiveSession(void) {
    if (matchArchiveUnavailable() == 1)
        return 0;
    return (ArchiveSession *)(Pes6SaveData_Current + 12);
}

void func_0022ED40(void) {
    ArchiveIndex *data = matchArchive();
    ArchiveSession *s = archiveSession();
    u8 i, team, slot;
    if (matchArchiveUnavailable() == 1)
        return;
    if (!data)
        return;
    s->selected = 0;
    for (i = 0; i < MATCH_ARCHIVE_SLOTS; i++) {
        memset(&data->rows[i], 0, sizeof(ArchiveRow));
        data->rows[i].competitionId = 0xff;
        data->rows[i].state = 0;
        data->rows[i].stage = 38;
        for (team = 0; team < 2; team++) {
            for (slot = 0; slot < 18; slot++) {
                data->rows[i].roster[team][slot] = 0;
                data->rows[i].players[team][slot] = 0;
            }
        }
    }
}
