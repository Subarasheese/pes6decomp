#ifndef PES6_NETLIB_TEAM_DETAILS_H
#define PES6_NETLIB_TEAM_DETAILS_H

#include "pes6/netlib_packet.h"

typedef struct {
    u8 slot, reserved01;
    s16 values[3];
} NetlibTeamDetailRow;

/* Field suffixes use offsets in the full NetlibTeamDetails record. */
typedef struct {
    char name[49];
    s8 field35;
    s16 values36[7];
    s16 value44, value46, value48;
    char description[257];
    s8 field14B;
    s16 field14C, reserved14E;
    s32 field150, field154, field158, field15C, secondId;
    char secondName[49];
    s8 field195, field196;
    u8 reserved197;
    s16 values198[5];
    s8 field1A2, reserved1A3;
} NetlibTeamData;

typedef struct {
    s32 id;
    NetlibTeamData data;
    NetlibTeamDetailRow rows[5];
} NetlibTeamDetails;

typedef struct {
    u8 reserved00[4];
    u8 first[17], reserved15;
    s16 firstValue;
    u8 second[17], reserved29;
    s16 secondValue;
} NetlibTeamEndpointPair;

extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *field);
extern s32 func_00874090(void *packet, s16 *field);
extern void *func_001C48E8(void *dst, s32 c, u32 size);

static inline void netlib_read_team_details(NetlibPacket *packet, NetlibTeamDetails *team,
                                            NetlibTeamEndpointPair *pair, u8 *data, s8 *status,
                                            s16 *value, s8 *mode) {
    s32 i;
    func_00874120(packet, status);
    func_00873F60(packet, &team->id);
    func_001C48E8(team->data.name, 0, sizeof(team->data.name));
    func_00873EE0(packet, team->data.name, sizeof(team->data.name) - 1);
    func_00873F60(packet, &team->data.secondId);
    func_001C48E8(team->data.secondName, 0, sizeof(team->data.secondName));
    func_00873EE0(packet, team->data.secondName, sizeof(team->data.secondName) - 1);
    func_00874120(packet, &team->data.field195);
    func_00874120(packet, &team->data.field35);
    func_00873F60(packet, &team->data.field150);
    func_00874090(packet, &team->data.field14C);
    func_00874040(packet, &team->data.values36[0]);
    func_00874040(packet, &team->data.values36[1]);
    func_00874040(packet, &team->data.values36[2]);
    func_00874040(packet, &team->data.values36[3]);
    func_00874040(packet, &team->data.values36[4]);
    func_00874040(packet, &team->data.values36[5]);
    func_00874040(packet, &team->data.values36[6]);
    func_00873F60(packet, &team->data.field154);
    func_00873F60(packet, &team->data.field158);
    func_001C48E8(team->data.description, 0, sizeof(team->data.description));
    func_00873EE0(packet, team->data.description, sizeof(team->data.description) - 1);
    func_00873F60(packet, &team->data.field15C);
    for (i = 0; i < 5; i++) {
        func_00874040(packet, &team->rows[i].values[0]);
        func_00874040(packet, &team->rows[i].values[1]);
        func_00874040(packet, &team->rows[i].values[2]);
    }
    func_001C48E8(pair, 0, sizeof(*pair));
    func_00873EE0(packet, pair->first, sizeof(pair->first) - 1);
    func_001C48E8(data, 0, 32);
    func_00873EE0(packet, data, 32);
    func_00874120(packet, &team->data.field14B);
    func_00874120(packet, &team->data.field196);
    func_00874090(packet, &pair->firstValue);
    func_00873EE0(packet, pair->second, sizeof(pair->second) - 1);
    func_00874090(packet, &pair->secondValue);
    func_00874090(packet, value);
    func_00874120(packet, mode);
    team->data.field1A2 = 0;
}

#endif
