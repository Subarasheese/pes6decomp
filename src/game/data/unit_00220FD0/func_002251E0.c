/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"

extern void *func_001C4730(void *dst, const void *src, u32 count);
void func_002251E0(u8 row, const void *data) {
    SavedTeamList *list = savedTeamList();
    if (list && row < 32 && data)
        func_001C4730(list->records54[row], data, sizeof(list->records54[row]));
}
