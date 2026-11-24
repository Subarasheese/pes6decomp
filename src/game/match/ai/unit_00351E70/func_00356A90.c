/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x13], side, reserved14, player, otherPlayer;
} RoundPlayers;
extern s32 func_0030ED20(s32 *role, u8 id), func_00345490(s32 *count),
    func_00340880(float x, float z);
extern s32 func_00B94F50(void), func_003139F0(struct Pes6BitSet *, s32);
extern float D_00591E58[], D_00591E60[];
extern u8 D_003E9F90;
s32 func_00356A90(RoundPlayers *round) {
    u32 storage;
    s32 role;
    s32 count;
    struct Pes6BitSet flags;
    s32 first, second;
    s32 active, third;
    struct Pes6BitSet *bits;
    func_0030ED20(&role, round->player);
    func_00345490(&count);
    third = count == 3;
    first = Pes6MatchPlayer_Get(round->player)->goalDirection;
    second = Pes6MatchPlayer_Get(round->otherPlayer)->goalDirection;
    if (!func_00340880(D_00591E58[0] * second, D_00591E60[0] * second))
        func_00340880(D_00591E58[0] * first, D_00591E60[0] * first);
    active = func_00B94F50();
    bits = &flags;
    Pes6BitSet_Initialize(bits, 10, &storage);
    func_003139F0(bits, round->side);
    Pes6BitSet_Write(bits, 0x0, (D_003E9F90 | active) && count >= 3);
    Pes6BitSet_Write(bits, 0x1, D_003E9F90);
    Pes6BitSet_Write(bits, 0x2, count == 4);
    Pes6BitSet_Write(bits, 0x3, third & (role == 2));
    Pes6BitSet_Write(bits, 0x4, third & (role == 1));
    Pes6BitSet_Write(bits, 0x6, count == 4);
    Pes6BitSet_Write(bits, 0x7, third);
    Pes6BitSet_Write(bits, 0x8, role == 2);
    Pes6BitSet_Write(bits, 0x9, role == 1);
    return Pes6Job_SendMessage(0xba, bits, 1);
}
