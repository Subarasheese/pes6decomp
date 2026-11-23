/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
extern u8 func_003109B0(void);
extern s32 func_00340E00(s32 **, s32, s32);
extern void func_003139C0(struct Pes6BitSet *, s32);
s32 func_00320030(MatchJob *job) {
    u32 word;
    s32 *entry;
    struct Pes6BitSet flags;
    s32 side = func_003109B0();
    if (func_00340E00(&entry, side, 0)) {
        Pes6BitSet_Initialize(&flags, 1, &word);
        func_003139C0(&flags, side);
        Pes6BitSet_Write(&flags, 0, *entry != 3);
        Pes6Job_SendMessage(0x21, &flags, 1);
    }
    Pes6Job_SetDone(job);
    return 1;
}
