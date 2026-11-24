/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
extern s32 func_00356790(s32 *phase);
extern s32 func_00BEC4A0(void);

s32 func_00356330(MatchJob *job) {
    u32 storage;
    s32 phase;
    struct Pes6BitSet flags;
    struct Pes6BitSet *bits = &flags;
    s32 firstPhase, mode, active;
    Pes6BitSet_Initialize(bits, 7, &storage);
    func_00356790(&phase);
    mode = func_00BEC4A0();
    switch (mode) {
    case 1:
    case 2:
        active = 1;
        break;
    default:
        active = 0;
        break;
    }
    firstPhase = phase == 1;
    Pes6BitSet_Write(bits, 1, phase == 2);
    Pes6BitSet_Write(bits, 2, !active);
    Pes6BitSet_Write(bits, 3, active);
    Pes6BitSet_Write(bits, 4, firstPhase);
    Pes6BitSet_Write(bits, 5, !active);
    Pes6BitSet_Write(bits, 6, active);
    Pes6Job_SendMessage(0x96, bits, 1);
    Pes6Job_SetDone(job);
    return 1;
}
