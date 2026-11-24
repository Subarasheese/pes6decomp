/* compiler: mwcc-3.0.1b210 */
#include "types.h"
#include "pes6/bitset.h"
typedef struct {
    s32 kind;
    u8 reserved04[9];
    u8 mode;
} Scenario;
typedef struct {
    u8 reserved00[0x44];
    Scenario *scenario;
} ActionJob;
extern s32 Pes6Job_GetArg(s32 job, s32 index);
extern s32 func_00325910(s32 side);
s32 func_0033BAC0(struct Pes6BitSet *bits, ActionJob *job) {
    Scenario *scenario = job->scenario;
    u8 side = (u8)Pes6Job_GetArg((s32)job, 0);
    s32 stage = Pes6Job_GetArg((s32)job, 2);
    s32 state = func_00325910((u8)side);
    if (scenario->kind != 7)
        return 0;
    if (stage > 13)
        state += 3;
    else if (stage == 13)
        ++state;
    Pes6BitSet_Write(bits, 0xbf, stage > 13);
    Pes6BitSet_Write(bits, 0xc0, scenario->mode == 1);
    Pes6BitSet_Write(bits, 0xc1, state == 6);
    Pes6BitSet_Write(bits, 0xc2, state == 3);
    Pes6BitSet_Write(bits, 0xc3, state == 4);
    Pes6BitSet_Write(bits, 0xc4, scenario->mode == 2);
    Pes6BitSet_Write(bits, 0xc5, state == 9);
    Pes6BitSet_Write(bits, 0xc6, state == 6);
    Pes6BitSet_Write(bits, 0xc7, state == 7);
    Pes6BitSet_Write(bits, 0xc8, state == 6);
    Pes6BitSet_Write(bits, 0xc9, state == 3);
    Pes6BitSet_Write(bits, 0xca, state == 4);
    Pes6BitSet_Write(bits, 0xcb, state == 7);
    Pes6BitSet_Write(bits, 0xcc, state == 5);
    Pes6BitSet_Write(bits, 0xce, scenario->mode == 1);
    Pes6BitSet_Write(bits, 0xcf, scenario->mode == 2);
    return 1;
}
