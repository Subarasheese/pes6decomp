#ifndef PES6_LOCALIZED_PLAYER_NAMES_H
#define PES6_LOCALIZED_PLAYER_NAMES_H

#include "types.h"
typedef struct {
    u8 prefix[8];
    u16 count;
    u8 reserved0a[2];
} PlayerNameHeader;
typedef struct {
    u16 name[2][23];
    char shortName[2][16];
    u16 code[2];
} PlayerName;
extern u8 *D_0058D810[];
extern u8 D_0058D814[];
extern PlayerNameHeader *D_0058D818[];
extern u16 *D_0058D81C[];
extern PlayerName *D_0058D820[];
enum { PLAYER_NAME_RESOURCE = 0x1003a, PLAYER_NAME_MISSING = 0xffff };
static inline u16 findPlayerNameIndex(u16 player) {
    u16 i;
    if (D_0058D814[0]) {
        for (i = 0; i < D_0058D818[0]->count; ++i) {
            u16 entry = D_0058D81C[0][i];
            if (entry == player)
                return i;
        }
    }
    return PLAYER_NAME_MISSING;
}
static inline s32 usesFirstPlayerName(s32 language, u8 group) {
    if (language == 0) {
        if (group == 1)
            return 0;
        return 1;
    } else if (language == 3) {
        if (group == 1)
            return 1;
        return 0;
    }
    return 0;
}

static inline PlayerName *playerNameRecord(u16 index) {
    return (PlayerName *)(D_0058D810[0] + sizeof(PlayerNameHeader) +
                          D_0058D818[0]->count * sizeof(u16) + index * sizeof(PlayerName));
}
extern u8 func_00221300(s32 player);

#endif
