/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
extern void *memset(void *, int, u32);
extern char *strncpy(char *, const char *, u32);
extern s32 func_0081D6D0(s8 *);
s32 func_009458C0(s32 index, s8 *text) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (!row)
        return 0;
    memset(row->bytes + 0x99, 0, 49);
    if (func_0081D6D0(text) == 1)
        strncpy((char *)row->bytes + 0x99, (const char *)text, 48);
    return 1;
}
