#ifndef PES6_MATCH_SQUAD_ROLE_MASKS_H
#define PES6_MATCH_SQUAD_ROLE_MASKS_H

#include "pes6/match_squad_selection.h"

extern const u32 D_003D9DE0[], D_003D9D60[], D_003D9DA0[];
extern s32 func_002937A0(u8 role);
extern s32 func_0028F230(const SquadRoleSettings *, const SquadPlayerProfile *, u8 role,
                         const u32 masks[3], s32 condition);

static inline void getRoleMasks(u8 group, u32 masks[3]) {
    s32 i;
    for (i = 0; i < 3; i++) {
        u32 mask;
        switch (i) {
        case 1:
            mask = D_003D9DE0[group];
            break;
        case 2:
            mask = D_003D9D60[group];
            break;
        default:
            mask = D_003D9DA0[group];
            break;
        }
        masks[i] = mask;
    }
}

#endif
