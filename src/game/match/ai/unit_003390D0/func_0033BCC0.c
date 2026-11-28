/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_period_message.h"
#include "pes6/match_report_rank.h"

typedef struct {
    u8 reserved00[0x44];
    RankState *state;
} RankJob;
extern s32 func_003258F0(RankState *state, u8 side);
extern u8 D_00591C09[];
s32 func_0033BCC0(struct Pes6BitSet *bits, RankJob *job) {
    s32 side = (u8)Pes6Job_GetArg(job, 0);
    RankState *state = job->state;
    s32 mode = Pes6Job_GetArg(job, 1);
    RankRecord *record;
    RankSelection *selection;
    s32 rank;
    s32 differentSlot, better;
    if (state->kind != 6)
        return 0;
    if (state->mode == 2)
        return 0;
    if (state->mode == 3)
        return 0;
    if (D_00591C09[0] == 14)
        return 0;
    record = func_00325730(state, (u16)func_003258F0(state, (u8)side));
    if (!record || !state->selection.active)
        return 0;
    if (record->inactive)
        return 0;
    selection = &state->selection;
    rank = record->rank;
    differentSlot =
        selection->team[(u8)side].rank == rank && record->slot != selection->team[(u8)side].slot;
    better = rank < selection->team[(u8)side].rank;
    if (record->slot > 15)
        return 0;
    Pes6Job_GetManager()->rank = rank;
    Pes6Job_GetManager()->previousSlot = record->slot;
    Pes6Job_GetManager()->slot = record->slot;
    Pes6BitSet_Write(bits, 0x97, mode != 1);
    Pes6BitSet_Write(bits, 0x98, record->slot != 0);
    Pes6BitSet_Write(bits, 0x99, rank == 1);
    Pes6BitSet_Write(bits, 0x9a, better);
    Pes6BitSet_Write(bits, 0x9b, differentSlot);
    Pes6BitSet_Write(bits, 0x9c, rank == 2);
    Pes6BitSet_Write(bits, 0x9d, better);
    Pes6BitSet_Write(bits, 0x9e, differentSlot);
    Pes6BitSet_Write(bits, 0x9f, rank == 3);
    Pes6BitSet_Write(bits, 0xa0, better);
    Pes6BitSet_Write(bits, 0xa1, differentSlot);
    Pes6BitSet_Write(bits, 0xa2, rank == 4);
    Pes6BitSet_Write(bits, 0xa3, better);
    Pes6BitSet_Write(bits, 0xa4, differentSlot);
    Pes6BitSet_Write(bits, 0xa5, rank == 5);
    Pes6BitSet_Write(bits, 0xa6, better);
    Pes6BitSet_Write(bits, 0xa7, differentSlot);
    Pes6BitSet_Write(bits, 0xa8, rank == 15);
    Pes6BitSet_Write(bits, 0xa9, better);
    Pes6BitSet_Write(bits, 0xaa, differentSlot);
    Pes6BitSet_Write(bits, 0xab, rank == 16);
    Pes6BitSet_Write(bits, 0xac, better);
    Pes6BitSet_Write(bits, 0xad, differentSlot);
    Pes6BitSet_Write(bits, 0xae, rank == 17);
    Pes6BitSet_Write(bits, 0xaf, better);
    Pes6BitSet_Write(bits, 0xb0, differentSlot);
    Pes6BitSet_Write(bits, 0xb1, rank == 18);
    Pes6BitSet_Write(bits, 0xb2, better);
    Pes6BitSet_Write(bits, 0xb3, differentSlot);
    Pes6BitSet_Write(bits, 0xb4, rank == 19);
    Pes6BitSet_Write(bits, 0xb5, better);
    Pes6BitSet_Write(bits, 0xb6, differentSlot);
    Pes6BitSet_Write(bits, 0xb7, rank == 20);
    Pes6BitSet_Write(bits, 0xb8, better);
    Pes6BitSet_Write(bits, 0xb9, differentSlot);
    Pes6BitSet_Write(bits, 0xba, record->flag);
    Pes6BitSet_Write(bits, 0x196, mode != 1);
    return 1;
}
