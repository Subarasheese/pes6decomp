/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    s32 kind;
    u8 reserved04[0x28];
    s32 secondary, subMode;
} MatchPeriod;
extern u32 func_0030F130(void);
void func_0033D8B0(const MatchPeriod *period, s32 mode, s32 enabled) {
    struct Pes6BitSet flags;
    u32 storage;
    struct Pes6BitSet *bits = &flags;
    s32 eligible;
    Pes6BitSet_Initialize(bits, 9, &storage);
    eligible = (enabled && period->kind == 6) && (period->subMode == 6 || period->subMode == 7) &&
               period->secondary != 0x20;
    Pes6BitSet_Write(bits, 0x2, eligible);
    Pes6BitSet_Write(bits, 0x3, func_0030F130());
    Pes6BitSet_Write(bits, 0x4, mode);
    Pes6BitSet_Write(bits, 0x5, !mode);
    Pes6BitSet_Write(bits, 0x6, mode);
    Pes6BitSet_Write(bits, 0x7, !mode);
    Pes6BitSet_Write(bits, 0x8, mode);
    Pes6Job_SendMessage(0x7c, bits, 1);
}
