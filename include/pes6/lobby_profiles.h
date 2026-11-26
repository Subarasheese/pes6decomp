#ifndef PES6_LOBBY_PROFILES_H
#define PES6_LOBBY_PROFILES_H
#include "types.h"
typedef struct {
    char name[49];
    s8 mode;
    s8 field32;
    u8 reserved33;
    s32 id;
    s32 value38, value3C;
    s32 field40;
    s16 field44, field46, field48, field4A;
    char secondName[49];
    s8 status;
    s16 value7E;
    s8 field80;
    s8 field81;
    u8 reserved82[2];
} LobbyProfile;
typedef struct {
    u16 count;
    u16 reserved02;
    LobbyProfile rows[100];
} LobbyProfileList;
extern u8 *func_00936B90(void);
static inline LobbyProfileList *lobby_profile_list(void) {
    u8 *owner = func_00936B90();
    if (0 == (owner))
        return 0;
    return (LobbyProfileList *)(owner + 0x4f0);
}
static inline u16 lobby_profile_count(void) {
    LobbyProfileList *items = lobby_profile_list();
    if (0 == (items))
        return 0;
    return items->count;
}
static inline LobbyProfile *lobby_profile_at(s32 index) {
    LobbyProfileList *items = lobby_profile_list();
    if (!items)
        return 0;
    if (!((u16)index < 100))
        return 0;
    if (0 == (lobby_profile_count() > (u16)index))
        return 0;
    return &items->rows[(u16)index];
}

#endif
