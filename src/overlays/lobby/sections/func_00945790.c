/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_directories.h"
extern void *memset(void *, int, u32);
extern char *strncpy(char *, const char *, u32);
extern s32 func_0081D6D0(s8 *);
s32 func_00945790(s32 index, s8 *text) {
    LobbyListingRecord *row = lobby_listing_at(index);
    if (!row)
        return 0;
    memset(row->bytes + 0xcd, 0, 257);
    if (func_0081D6D0(text) == 1)
        strncpy((char *)row->bytes + 0xcd, (const char *)text, 256);
    return 1;
}
