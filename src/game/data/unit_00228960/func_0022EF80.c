/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_archive_rows.h"

u8 func_0022EF80(u8 competition) {
    u8 i, slot = 0xff;
    ArchiveIndex *data = matchArchive();
    if (matchArchiveUnavailable() == 1)
        return 0xff;
    if (!data)
        return 0xff;
    for (i = 0; i < MATCH_ARCHIVE_SLOTS; i++) {
        if (competition == data->rows[i].competitionId) {
            slot = i;
            break;
        }
        if (competition == 0xff && data->rows[i].competitionId == 0xff) {
            slot = i;
            break;
        }
    }
    return slot;
}
