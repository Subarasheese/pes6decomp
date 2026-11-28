/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player_state_rows.h"
#include "pes6/match_period_message.h"
typedef struct {
    s32 kind;
} PlayerRoster;
extern s32 func_00325EF0(PlayerRoster *roster);
s32 func_00364B90(RosterMessage *ctx) {
    u8 side;
    u8 slot;
    u32 storage;
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits = &flags;
    PlayerRoster *roster;
    s32 selected;
    Pes6BitSet_Initialize(bits, 26, &storage);
    roster = ctx->roster;
    func_00311A50(&side, &slot, ctx->player);
    Pes6BitSet_Write(bits, 0x3, func_00326890(ctx->roster, side, slot, 0x200));
    Pes6BitSet_Write(bits, 0x4, func_00326890(ctx->roster, side, slot, 0x400));
    Pes6BitSet_Write(bits, 0x5, func_00326890(ctx->roster, side, slot, 0x800));
    Pes6BitSet_Write(bits, 0x6, func_00326890(ctx->roster, side, slot, 0x1000));
    Pes6BitSet_Write(bits, 0x7, func_00326890(ctx->roster, side, slot, 0x2000));
    Pes6BitSet_Write(bits, 0x8, func_00326890(ctx->roster, side, slot, 0x4000));
    Pes6BitSet_Write(bits, 0x9, func_00326890(ctx->roster, side, slot, 0x8000));
    Pes6BitSet_Write(bits, 0x2,
                     Pes6BitSet_Lookup(bits, 0x3) | Pes6BitSet_Lookup(bits, 0x4) |
                         Pes6BitSet_Lookup(bits, 0x5) | Pes6BitSet_Lookup(bits, 0x6) |
                         Pes6BitSet_Lookup(bits, 0x7) | Pes6BitSet_Lookup(bits, 0x8) |
                         Pes6BitSet_Lookup(bits, 0x9));
    Pes6BitSet_Write(bits, 0xb, func_00326890(ctx->roster, side, slot, 0x10000));
    Pes6BitSet_Write(bits, 0xc, func_00326890(ctx->roster, side, slot, 0x20000));
    Pes6BitSet_Write(bits, 0xd, func_00326890(ctx->roster, side, slot, 0x40000));
    Pes6BitSet_Write(bits, 0xe, func_00326890(ctx->roster, side, slot, 0x80000));
    Pes6BitSet_Write(bits, 0xf, func_00326890(ctx->roster, side, slot, 0x100000));
    Pes6BitSet_Write(bits, 0x10, func_00326890(ctx->roster, side, slot, 0x200000));
    Pes6BitSet_Write(bits, 0x11, func_00326890(ctx->roster, side, slot, 0x400000));
    Pes6BitSet_Write(bits, 0xa,
                     Pes6BitSet_Lookup(bits, 0xb) | Pes6BitSet_Lookup(bits, 0xc) |
                         Pes6BitSet_Lookup(bits, 0xd) | Pes6BitSet_Lookup(bits, 0xe) |
                         Pes6BitSet_Lookup(bits, 0xf) | Pes6BitSet_Lookup(bits, 0x10) |
                         Pes6BitSet_Lookup(bits, 0x11));
    Pes6BitSet_Write(bits, 0x1, (Pes6BitSet_Lookup(bits, 0xa) | Pes6BitSet_Lookup(bits, 0x2)));
    if (Pes6BitSet_Lookup(bits, 2)) {
        Pes6Job_GetManager()->group = 1;
        selected = func_00326890(ctx->roster, side, slot, 0x8000000);
    } else if (Pes6BitSet_Lookup(bits, 10)) {
        Pes6Job_GetManager()->group = 2;
        selected = func_00326890(ctx->roster, side, slot, 0x10000000);
    } else {
        Pes6Job_GetManager()->group = 0;
        selected = 0;
    }
    Pes6BitSet_Write(bits, 0x13, Pes6Job_GetManager()->group != 0);
    Pes6BitSet_Write(bits, 0x14,
                     (Pes6Job_GetManager()->group == 1 && Pes6BitSet_Lookup(bits, 0x4) &&
                      Pes6Job_GetManager()->count[0] && (Pes6Job_GetManager()->index[0] != -1)) ||
                         (Pes6Job_GetManager()->group == 2 && Pes6BitSet_Lookup(bits, 0xc) &&
                          Pes6Job_GetManager()->count[1] &&
                          (Pes6Job_GetManager()->index[1] != -1)));
    Pes6BitSet_Write(bits, 0x15, selected);
    Pes6BitSet_Write(bits, 0x16, roster->kind == 6);
    Pes6BitSet_Write(bits, 0x17, func_00325EF0(roster));
    Pes6BitSet_Write(bits, 0x18, (Pes6BitSet_Lookup(bits, 0x16) | Pes6BitSet_Lookup(bits, 0x17)));
    Pes6BitSet_Write(bits, 0x19, selected);
    if (Pes6Job_SendMessage(0x7f, bits, 2))
        return 3;
    return 1;
}
