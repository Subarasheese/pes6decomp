/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[8];
    u8 flag08;
} MatchState;
typedef struct {
    s32 kind;
} MatchScenario;
typedef struct {
    u8 reserved00[7];
    u8 flag07;
    u8 reserved08[0x20];
    s32 kind;
} MatchRecord;
typedef struct {
    u8 reserved00[0x44];
    MatchState *state;
    MatchScenario *scenario;
    MatchRecord *record;
} MatchDecisionJob;
extern s32 func_00333600(s32 index);
extern u8 D_00CBCDE0[];
s32 func_003486C0(MatchDecisionJob *job) {
    struct Pes6BitSet flags;
    u32 storage;
    struct Pes6BitSet *bits = &flags;
    MatchRecord *record;
    MatchScenario *scenario;
    MatchState *state;
    s32 enabled;
    Pes6BitSet_Initialize(bits, 11, &storage);
    enabled = func_00333600(10);
    if (!enabled) {
        record = job->record;
        scenario = 0;
        state = 0;
    } else {
        record = job->record;
        scenario = job->scenario;
        state = job->state;
    }
    Pes6BitSet_Write(bits, 0x1, func_00333600(11) && !enabled);
    Pes6BitSet_Write(bits, 0x2, D_00CBCDE0[0] == 1);
    Pes6BitSet_Write(bits, 0x3, record->kind == 5);
    Pes6BitSet_Write(bits, 0x4, record->kind == 4);
    Pes6BitSet_Write(bits, 0x5, record->flag07);
    if (Pes6BitSet_Write(bits, 6, enabled)) {
        Pes6BitSet_Write(bits, 7, state->flag08);
        Pes6BitSet_Write(bits, 8, scenario->kind == 1);
    }
    Pes6Job_SendMessage(0x4a, bits, 1);
    return 1;
}
