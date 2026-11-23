/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_competition_slots.h"

extern char *strncpy(char *, const char *, unsigned int);
static inline void setStatus(CompetitionEntry *entry, s32 status) {
    if (!entry)
        return;
    if (entry->status != status)
        entry->changed = 1;
    entry->status = status;
}
s32 func_009BCB90(CompetitionEntry *entry, const char *description) {
    if (!entry)
        return 1;
    if (!description) {
        setStatus(entry, 2);
        return 0;
    }
    if (!*description) {
        setStatus(entry, 2);
        return 0;
    }
    strncpy(entry->description, description, 0x93);
    setStatus(entry, 1);
    entry->changed = 1;
    return 0;
}
