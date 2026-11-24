/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_period_message.h"

s32 func_0034BD60(u8 side, s32 minute, s32 rank, const s16 goals[2]) {
    struct Pes6BitSet flags;
    u32 storage[2];
    struct Pes6BitSet *bits = &flags;
    s32 first, second, third, withinHalf, half;
    Pes6BitSet_Initialize(bits, 40, storage);
    first = 0;
    second = 0;
    third = 0;
    withinHalf = minute % 45;
    half = Pes6MatchContext_GetHalf();
    switch (withinHalf) {
    case 0:
        first = 1;
        break;
    case 1:
        second = 1;
        break;
    case 2:
        third = 1;
        break;
    }
    Pes6BitSet_Write(bits, 0x7, half == 0);
    Pes6BitSet_Write(bits, 0x8, first);
    Pes6BitSet_Write(bits, 0x9, second);
    Pes6BitSet_Write(bits, 0xa, third);
    Pes6BitSet_Write(bits, 0xb, half == 1);
    Pes6BitSet_Write(bits, 0xc, first);
    Pes6BitSet_Write(bits, 0xd, second);
    Pes6BitSet_Write(bits, 0xe, third);
    Pes6BitSet_Write(bits, 0xf, half == 2);
    Pes6BitSet_Write(bits, 0x10, second);
    Pes6BitSet_Write(bits, 0x11, third);
    Pes6BitSet_Write(bits, 0x12, half == 3);
    Pes6BitSet_Write(bits, 0x13, second);
    Pes6BitSet_Write(bits, 0x14, third);
    Pes6BitSet_Write(bits, 0x16, withinHalf == 10);
    Pes6BitSet_Write(bits, 0x17, withinHalf == 15);
    Pes6BitSet_Write(bits, 0x18, withinHalf == 20);
    Pes6BitSet_Write(bits, 0x19, withinHalf == 25);
    Pes6BitSet_Write(bits, 0x1a, withinHalf == 30);
    Pes6BitSet_Write(bits, 0x1b, withinHalf == 35);
    Pes6BitSet_Write(bits, 0x1c, withinHalf == 40);
    Pes6BitSet_Write(bits, 0x15,
                     Pes6BitSet_Lookup(bits, 0x16) | Pes6BitSet_Lookup(bits, 0x17) |
                         Pes6BitSet_Lookup(bits, 0x18) | Pes6BitSet_Lookup(bits, 0x19) |
                         Pes6BitSet_Lookup(bits, 0x1a) | Pes6BitSet_Lookup(bits, 0x1b) |
                         Pes6BitSet_Lookup(bits, 0x1c));
    Pes6BitSet_Write(bits, 0x1d, goals[0] < 11 && goals[1] < 11);
    Pes6BitSet_Write(bits, 0x1e, rank >= 14);
    Pes6BitSet_Write(bits, 0x1f, rank == 16);
    Pes6BitSet_Write(bits, 0x20, rank == 17);
    Pes6BitSet_Write(bits, 0x21, rank == 18);
    Pes6BitSet_Write(bits, 0x22, rank < 13);
    Pes6BitSet_Write(bits, 0x23, rank == 10);
    Pes6BitSet_Write(bits, 0x24, rank == 9);
    Pes6BitSet_Write(bits, 0x25, rank == 8);
    Pes6BitSet_Write(bits, 0x26, goals[0] + goals[1] == 0 && minute >= 11);
    Pes6BitSet_Write(bits, 0x27, Pes6BitSet_Lookup(bits, 38));
    Pes6Job_GetManager()->side = (u8)side;
    return Pes6Job_SendMessage(0x68, bits, 1);
}
