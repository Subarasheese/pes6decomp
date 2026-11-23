/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 beforeKind[0x2c];
    s32 kind;
    u8 beforePlayer[0x10];
    s32 player;
} MatchFlagJob;
extern s32 D_003BD53C[];
extern s32 func_00326310(s32);
extern void func_0033DAB0(s32), func_0033D8B0(s32, s32, s32);
s32 func_003703C0(MatchFlagJob *job) {
    u32 word;
    struct Pes6BitSet flags;
    s32 player;
    if (!D_003BD53C[0]) {
        Pes6BitSet_Initialize(&flags, 3, &word);
        player = job->player;
        Pes6BitSet_Write(&flags, 1, func_00326310(player));
        Pes6Job_SendMessage(0x8d, &flags, 1);
        if (job->kind == 2) {
            func_0033DAB0(0);
            Pes6Job_SendMessage(0x7a, 0, 1);
            func_0033D8B0(player, 1, 1);
        }
    }
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
