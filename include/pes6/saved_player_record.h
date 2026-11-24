#ifndef PES6_SAVED_PLAYER_RECORD_H
#define PES6_SAVED_PLAYER_RECORD_H

#include "pes6/saved_teams.h"
#include "pes6/master_player_ratings.h"

typedef struct {
    u8 reserved00[13];
    u8 field0D;
    u8 reserved0E[18];
} SavedPlayerRecord;
extern u8 func_00229600(s32 player);

static inline SavedPlayerRecord *savedPlayerRecord(s32 player) {
    s32 index;
    u8 *extra;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if ((u16)player < 5000)
        return (SavedPlayerRecord *)(Pes6SaveData_Current + (u16)player * sizeof(SavedPlayerRecord) +
                                     0x62D70);
    index = (u8)func_00229600(player);
    if (index != 0xff) {
        extra = (u8 *)Pes6SaveData_GetBlockE970();
        if (!extra)
            return 0;
        return (SavedPlayerRecord *)(extra + (u8)index * sizeof(SavedPlayerRecord) + 0x1071C);
    }
    return 0;
}

#endif
