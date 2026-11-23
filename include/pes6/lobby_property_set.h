#ifndef PES6_LOBBY_PROPERTY_SET_H
#define PES6_LOBBY_PROPERTY_SET_H

#include "types.h"
typedef s32 (*LobbyProvider)(void);
typedef struct {
    s32 reserved[3];
    s32 value[8];
    s32 first, position, second;
} LobbyPropertySet;
static inline void applyLobbyProperties(LobbyPropertySet *entry, LobbyProvider local[8]) {
    {
        s32 v;
        if (local[0] == 0)
            v = 0;
        else
            v = local[0]();
        entry->value[0] = v;
    }
    {
        s32 v;
        if (local[1] == 0)
            v = 0;
        else
            v = local[1]();
        entry->value[1] = v;
    }
    {
        s32 v;
        if (local[2] == 0)
            v = 0;
        else
            v = local[2]();
        entry->value[2] = v;
    }
    {
        s32 v;
        if (local[3] == 0)
            v = 0;
        else
            v = local[3]();
        entry->value[3] = v;
    }
    {
        s32 v;
        if (local[4] == 0)
            v = 0;
        else
            v = local[4]();
        entry->value[4] = v;
    }
    {
        s32 v;
        if (local[5] == 0)
            v = 0;
        else
            v = local[5]();
        entry->value[5] = v;
    }
    {
        s32 v;
        if (local[6] == 0)
            v = 0;
        else
            v = local[6]();
        entry->value[6] = v;
    }
    {
        s32 v;
        if (local[7] == 0)
            v = 0;
        else
            v = local[7]() - 1;
        entry->value[7] = v;
    }
    entry->first = entry->value[1];
    entry->position = 0;
    entry->second = entry->value[5];
}

#endif
