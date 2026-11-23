/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1, b6 : 1, b7 : 1;
} FlagByte;
typedef struct {
    u8 reserved00[0x1000];
    u8 player;
    u8 reserved1001[0x33];
    s32 lastPlayer, firstPlayer;
} JobPlayers;
extern JobPlayers *Pes6Job_GetManager(void);
extern s32 Pes6MatchPlayer_GetSide(s32);
extern s32 func_003139F0(struct Pes6BitSet *, s32);
extern u8 D_0061C71C[];
extern FlagByte D_0061C71E[];
typedef struct {
    u8 reserved00[4];
    u8 player;
    u8 reserved05;
    FlagByte bits[4];
} JobEvent;
extern JobEvent D_0061C718[];
s32 func_00359100(MatchJob *job) {
    struct Pes6BitSet msg;
    u32 backing[2];
    struct Pes6BitSet *flags = &msg;
    JobEvent *event;
    s32 side;
    u8 player;
    Pes6BitSet_Initialize(flags, 33, backing);
    func_003139F0(flags, job->arg[1].byte);
    event = D_0061C718;
    Pes6BitSet_Write(flags, 0, D_0061C71E[0].b3);
    Pes6BitSet_Write(flags, 1, D_0061C71E[0].b4);
    Pes6BitSet_Write(flags, 4, D_0061C71E[0].b5);
    Pes6BitSet_Write(flags, 5, D_0061C71E[0].b6);
    Pes6BitSet_Write(flags, 6, D_0061C71E[0].b7);
    Pes6BitSet_Write(flags, 7, D_0061C71E[1].b0);
    Pes6BitSet_Write(flags, 8, D_0061C71E[1].b1);
    Pes6BitSet_Write(flags, 9, D_0061C71E[1].b2);
    Pes6BitSet_Write(flags, 10, D_0061C71E[1].b3);
    Pes6BitSet_Write(flags, 11, D_0061C71E[1].b4);
    Pes6BitSet_Write(flags, 12, D_0061C71E[1].b5);
    Pes6BitSet_Write(flags, 14, D_0061C71E[1].b6);
    Pes6BitSet_Write(flags, 13, D_0061C71E[1].b7);
    Pes6BitSet_Write(flags, 15, D_0061C71E[1].b7);
    Pes6BitSet_Write(flags, 16, D_0061C71E[2].b0);
    Pes6BitSet_Write(flags, 17, D_0061C71E[2].b1);
    Pes6BitSet_Write(flags, 18, D_0061C71E[2].b2);
    Pes6BitSet_Write(flags, 19, D_0061C71E[2].b3);
    Pes6BitSet_Write(flags, 20, D_0061C71E[2].b4);
    Pes6BitSet_Write(flags, 21, D_0061C71E[2].b5);
    Pes6BitSet_Write(flags, 22, D_0061C71E[2].b6 | D_0061C71E[2].b7 | D_0061C71E[3].b0);
    Pes6BitSet_Write(flags, 23, D_0061C71E[2].b6);
    Pes6BitSet_Write(flags, 24, D_0061C71E[2].b7);
    Pes6BitSet_Write(flags, 25, D_0061C71E[3].b0);
    Pes6BitSet_Write(flags, 26, D_0061C71E[3].b1);
    Pes6BitSet_Write(flags, 27, D_0061C71E[3].b2);
    Pes6BitSet_Write(flags, 28, D_0061C71E[3].b3);
    Pes6BitSet_Write(flags, 30, D_0061C71E[3].b4);
    Pes6BitSet_Write(flags, 31, D_0061C71E[3].b5);
    player = D_0061C71C[0];
    Pes6Job_GetManager()->player = player;
    if (D_0061C71E[0].b4) {
        side = Pes6MatchPlayer_GetSide(event->player);
        Pes6Job_GetManager()->lastPlayer = (side + 1) * 11;
        Pes6Job_GetManager()->firstPlayer = side * 11 + 10;
    }
    Pes6Job_SendMessage(0x52, flags, 1);
    return 1;
}
