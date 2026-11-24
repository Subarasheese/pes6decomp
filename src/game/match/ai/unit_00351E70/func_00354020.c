/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[0x44];
    void *state;
} SideStatusJob;
extern s32 Pes6Job_GetArg(void *job, s32 index), func_00326040(void *state, s32 side);
extern s32 func_00335390(void);
extern s32 func_00310800(s32 *count, s32 side);
extern u8 D_003E9FB0, D_003E9FB1;
extern u8 D_003E9FA4[4], D_003E9FA5[4];
s32 func_00354020(struct Pes6BitSet *bits, SideStatusJob *job) {
    s32 count;
    s32 side, changed, close, choice;
    void *state;
    s32 active;
    s32 second;
    s32 first;
    s32 selected;
    state = job->state;
    first = Pes6Job_GetArg(job, 0);
    second = Pes6Job_GetArg(job, 1);
    selected = Pes6Job_GetArg(job, 2);
    active = func_00326040(state, selected);
    side = D_003E9FB0;
    {
        s32 other;
        switch (first) {
        default:
            other = 0;
            break;
        case 0:
            other = 1;
            break;
        }
        func_00310800(&count, other);
    }
    Pes6BitSet_Write(bits, 0x1f, func_00335390());
    Pes6BitSet_Write(bits, 0x20, first && second);
    Pes6BitSet_Write(bits, 0x21, active);
    Pes6BitSet_Write(bits, 0x22, count == 1);
    Pes6BitSet_Write(bits, 0x23, count < 4);
    Pes6BitSet_Write(bits, 0x24, (count == 3) & Pes6BitSet_Lookup(bits, 0x23));
    Pes6BitSet_Write(bits, 0x25, (count >= 2) & Pes6BitSet_Lookup(bits, 0x23));
    Pes6BitSet_Write(bits, 0x26, (count >= 1) & Pes6BitSet_Lookup(bits, 0x23));
    Pes6BitSet_Write(bits, 0x27, Pes6BitSet_Lookup(bits, 0x24));
    Pes6BitSet_Write(bits, 0x28, Pes6BitSet_Lookup(bits, 0x25));
    Pes6BitSet_Write(bits, 0x29, Pes6BitSet_Lookup(bits, 0x26));
    choice = 0;
    close = 0;
    changed = 0;
    if (D_003E9FB1 != side && D_003E9FB1 != 0xff)
        changed = 1;
    if (changed && D_003E9FA4[side * 2] - D_003E9FA5[side * 2] < 11)
        close = 1;
    if (close && D_003E9FA5[side * 2] != 2)
        choice = 1;
    Pes6BitSet_Write(bits, 0x2a, choice);
    Pes6BitSet_Write(bits, 0x2b, active);
    Pes6BitSet_Write(bits, 0x2c, first);
    Pes6BitSet_Write(bits, 0x2d, second);
    Pes6BitSet_Write(bits, 0x2e, count == 3);
    Pes6BitSet_Write(bits, 0x2f, count == 2);
    Pes6BitSet_Write(bits, 0x30, count == 1);
    Pes6BitSet_Write(bits, 0x31, active);
    Pes6BitSet_Write(bits, 0x32, first);
    Pes6BitSet_Write(bits, 0x33, second);
    Pes6BitSet_Write(bits, 0x35, count == 3);
    Pes6BitSet_Write(bits, 0x36, count == 2);
    Pes6BitSet_Write(bits, 0x37, count == 1);
    return 1;
}
