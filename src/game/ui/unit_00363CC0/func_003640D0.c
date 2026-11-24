/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
extern s32 func_00326E40(s16 *count, void *roster, u8 player);
extern s32 func_0030E010(s16 *status, u8 player);

s32 func_003640D0(RosterMessage *ctx) {
    s16 count;
    s16 status;
    struct {
        struct Pes6BitSet flags;
        u32 storage;
    } message;
    struct Pes6BitSet *bits = &message.flags;
    Pes6BitSet_Initialize(bits, 8, &message.storage);
    func_00326E40(&count, ctx->roster, ctx->player);
    func_0030E010(&status, ctx->player);
    if (status && status != 0xff)
        ++count;
    Pes6BitSet_Write(bits, 0, count >= 2);
    Pes6BitSet_Write(bits, 1, count == 2);
    Pes6BitSet_Write(bits, 2, count == 3);
    Pes6BitSet_Write(bits, 3, count == 4);
    Pes6BitSet_Write(bits, 4, count == 5);
    Pes6BitSet_Write(bits, 5, count == 6);
    Pes6BitSet_Write(bits, 6, count == 7);
    Pes6BitSet_Write(bits, 7, count >= 8 && status != 0xff);
    if (Pes6Job_SendMessage(0x88, bits, 2))
        return 3;
    return 1;
}
