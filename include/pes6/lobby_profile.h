#ifndef PES6_LOBBY_PROFILE_H
#define PES6_LOBBY_PROFILE_H

#include "pes6/lobby_request.h"

typedef struct {
    s32 field00;
    char text04[0x31];
    s8 field35;
    s16 field36;
    char text38[0x21];
    u8 field59;
    u8 field5A;
    u8 field5B;
    char text5C[0x21];
    s8 field7D;
    u16 field7E;
    s32 field80;
    char text84[0x41];
    s8 fieldC5;
    u16 fieldC6;
} LobbyProfile;

typedef struct {
    u8 reserved00[0x12230];
    LobbyProfile profiles[30];
} LobbyProfileConnection;

s32 func_00835EE0(void);
LobbyProfile *func_00835E50(s32 index);

static inline LobbyProfile *lobby_profile_table(void) {
    LobbyProfileConnection *owner = (LobbyProfileConnection *)func_0082C2A0();
    if (owner == 0)
        return 0;
    return owner->profiles;
}

static inline LobbyProfile *lobby_profile_at(s32 index) {
    s32 count = func_00835EE0();
    LobbyProfile *profiles = lobby_profile_table();
    if (profiles == 0)
        return 0;
    if (index < 0 || count <= index)
        return 0;
    return &profiles[index];
}

s8 func_00947540(s32 index);
u16 func_00947570(s32 index);
s8 func_009475A0(s32 index);
char *func_009475D0(s32 index);
char *func_00947610(s32 index);
char *func_00947650(s32 index);
char *func_00947690(s32 index);
u8 func_009476D0(s32 index);
u8 func_00947700(s32 index);
s32 func_00947730(s32 index);
u8 func_00947760(s32 index);
u16 func_00947790(s32 index);
s16 func_009477C0(s32 index);

#endif
