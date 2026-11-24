/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"
#include "pes6/pass_directions.h"

extern u16 func_009B3070(u16 first, u16 second);
extern u16 func_009513C0(TacticalActor *, u16, u8 *);

static inline u16 pickDirection(const u8 *order, u8 limit) {
    s32 i;
    for (i = 0;; ++i) {
        if (i >= 4)
            return 0xffff;
        if (order[i] == 255)
            return 0xffff;
        if (D_00CB52A0.costs[order[i]] <= limit)
            return D_00CA9950[order[i]];
    }
}

u16 func_00951CC0(TacticalActor *actor, s32 limit) {
    u16 selected;
    u8 conflict;
    if (!actor->player.side) {
        if (func_009B3070(actor->ai.facing, 0x4000) <= 0x2000)
            selected = pickDirection(D_00CB52A0.preference[3], limit);
        else if (func_009B3070(actor->ai.facing, 0xc000) <= 0x2000)
            selected = pickDirection(D_00CB52A0.preference[2], limit);
        else if (func_009B3070(actor->ai.facing, 0x8000) <= 0x2000)
            selected = pickDirection(D_00CB52A0.preference[1], limit);
        else
            selected = pickDirection(D_00CB52A0.preference[0], limit);
    } else {
        if (func_009B3070(actor->ai.facing, 0x4000) <= 0x2000)
            selected = pickDirection(D_00CB52A0.preference[5], limit);
        else if (func_009B3070(actor->ai.facing, 0xc000) <= 0x2000)
            selected = pickDirection(D_00CB52A0.preference[4], limit);
        else if (func_009B3070(actor->ai.facing, 0x0) <= 0x2000)
            selected = pickDirection(D_00CB52A0.preference[0], limit);
        else
            selected = pickDirection(D_00CB52A0.preference[1], limit);
    }
    if ((u8)limit >= 2) {
        if ((u16)selected == 0xffff) {
            selected = func_009513C0(actor, actor->ai.facing, &conflict);
            if (conflict)
                selected = 0xffff;
        }
    }
    return (u16)selected;
}
