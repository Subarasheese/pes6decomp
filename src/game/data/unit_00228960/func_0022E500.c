/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(3)
#include "pes6/competition_archive.h"

extern u8 func_0022EF80(u8 id);

SavedCompetition *func_0022E500(u8 id) {
    u8 index;
    if (competitionDataUnavailable() == 1)
        return 0;
    index = func_0022EF80(id);
    if (index == 0xff)
        return 0;
    return archiveAt(index);
}
