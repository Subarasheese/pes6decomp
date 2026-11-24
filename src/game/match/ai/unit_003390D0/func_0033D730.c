/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_period_message.h"
typedef struct {
    u8 reserved00[0x44];
    TeamCompetition *period;
} PeriodMessageJob;
extern s32 func_0032E980(s32 index);
extern s32 func_0030F130(void);

s32 func_0033D730(PeriodMessageJob *job) {
    struct Pes6BitSet flags;
    u32 storage;
    TeamCompetition *period;
    s32 enabled;
    s32 mode;
    struct Pes6BitSet *bits;
    s32 eligible;
    period = job->period;
    enabled = Pes6Job_GetArg(job, 1);
    mode = func_0032E980(2);
    bits = &flags;
    Pes6BitSet_Initialize(bits, 9, &storage);
    eligible = (enabled == 1 && period->kind == 6) && (period->mode == 6 || period->mode == 7) &&
               period->competition != 32;
    Pes6BitSet_Write(bits, 0x2, eligible);
    Pes6BitSet_Write(bits, 0x3, func_0030F130());
    Pes6BitSet_Write(bits, 0x4, mode);
    Pes6BitSet_Write(bits, 0x5, !mode);
    Pes6BitSet_Write(bits, 0x6, mode);
    Pes6BitSet_Write(bits, 0x7, !mode);
    Pes6BitSet_Write(bits, 0x8, mode);
    Pes6Job_SendMessage(0x7c, bits, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
