#ifndef PES6_TEAM_ENTRY_H
#define PES6_TEAM_ENTRY_H

#include "types.h"

typedef struct {
    u8 properties[0x24];
} TeamEntry;

extern TeamEntry D_0052B360[], D_0052D160[], D_0052D3D0[], D_003D2C60[];
extern s32 func_001FAE00(s32 id);
extern s32 Pes6Team_ResolveSpecialId(s32 id);

static inline u8 team_entry_property(s32 id, s32 property) {
    const TeamEntry *entry;
    if (func_001FAE00(id)) {
        if (id >= 0xcc && id <= 0xdc)
            entry = &D_0052D160[id - 0xcc];
        else if (id >= 0xfe && id <= 0x10d)
            entry = &D_0052D3D0[id - 0xfe];
        else
            entry = D_003D2C60;
    } else {
        entry = &D_0052B360[(u16)Pes6Team_ResolveSpecialId((u16)id)];
    }
    return entry->properties[property];
}

#endif
