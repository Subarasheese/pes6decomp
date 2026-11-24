/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_job_message.h"
extern s32 func_00C7B820(void), func_00332FA0(void), func_00311320(void);
extern s32 func_00341910(s32 mode, s32 a, s32 b), func_00350250(MatchJob *);
extern void Pes6Job_SetField4(MatchJob *, s32 (*)(MatchJob *), const char *);
extern const char D_003E6408[];
s32 func_003502B0(MatchJob *job) {
    struct Pes6BitSet flags;
    u32 storage[12];
    s32 count;
    if (func_00C7B820() && !func_00332FA0()) {
        Pes6BitSet_Initialize(&flags, 11, storage);
        count = func_00311320();
        Pes6BitSet_Write(&flags, 0x0, !func_00341910(1, 5, 10));
        Pes6BitSet_Write(&flags, 0x1, count == 0);
        Pes6BitSet_Write(&flags, 0x2, count == 1);
        Pes6BitSet_Write(&flags, 0x3, count == 2);
        Pes6BitSet_Write(&flags, 0x4, count == 3);
        Pes6BitSet_Write(&flags, 0x7, count == 4);
        Pes6BitSet_Write(&flags, 0x8, count == 5);
        Pes6BitSet_Write(&flags, 0x9, count >= 6);
        Pes6Job_SendMessage(0x7d, &flags, 1);
    }
    Pes6Job_SetField4(job, func_00350250, D_003E6408);
    return 0;
}
