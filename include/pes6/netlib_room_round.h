#ifndef PES6_NETLIB_ROOM_ROUND_H
#define PES6_NETLIB_ROOM_ROUND_H

#include "pes6/netlib_room_member.h"

typedef union {
    NetlibRoomState state;
    NetlibRoomMemberDetails members[8];
    struct {
        u8 prefix[0x7c0];
        u8 slotsAndSettings[0xb4];
    } setup;
    struct {
        u8 prefix[0x8d6];
        s8 phase, field8D7;
        char password[17];
        u8 field8E9, field8EA;
        s8 field8EB;
        union {
            u8 initialValues[8];
            struct {
                s8 values[4];
                u16 teams[2];
            } assignments;
        } slots;
        u8 teamFlags[2][5];
    } round;
} NetlibRoomRound;

static inline void netlib_reset_room_round(NetlibRoomRound *room) {
    s32 i, j;
    room->round.field8D7 = 0;
    for (i = 0; i < 8; i++) {
        room->members[i].selection = -1;
        room->members[i].field7F = 0;
        room->members[i].fieldB7 = 0;
        room->members[i].secondFlag = 0xff;
        room->round.slots.initialValues[i] = 6;
    }
    func_001C48E8(room->setup.slotsAndSettings, 0, sizeof(room->setup.slotsAndSettings));
    func_001C48E8(&room->state.options, 0, sizeof(room->state.options));
    room->state.firstSelection = 4;
    room->state.secondSelection = 4;
    room->round.field8E9 = 0;
    room->round.field8EA = 0;
    room->round.field8EB = 0;
    for (i = 0; i < 2; i++) {
        room->round.slots.assignments.teams[i] = 0xffff;
        for (j = 0; j < 5; j++)
            room->round.teamFlags[i][j] = 0;
    }
    room->state.selectedOption = 0;
}

#endif
