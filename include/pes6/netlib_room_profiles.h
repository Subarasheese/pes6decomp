#ifndef PES6_NETLIB_ROOM_PROFILES_H
#define PES6_NETLIB_ROOM_PROFILES_H

#include "pes6/lobby_profiles.h"
#include "pes6/netlib_packet.h"

typedef struct {
    s32 id;
    u8 reserved04[0x7c];
    s32 value;
    char name[49];
    s8 status;
    u8 reservedB6[2];
} NetlibRoomProfileName;

extern void *func_001C48E8(void *dst, s32 c, u32 size);
extern void *func_001C4730(void *dst, const void *src, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00874040(void *packet, s16 *field);
extern s32 func_00874090(void *packet, s16 *field);

static inline void netlib_read_room_profile(NetlibPacket *packet, LobbyProfile *profile) {
    func_00873F60(packet, &profile->id);
    func_001C48E8(profile->name, 0, sizeof(profile->name));
    func_00873EE0(packet, profile->name, sizeof(profile->name) - 1);
    func_00873F60(packet, &profile->field40);
    func_001C48E8(profile->secondName, 0, sizeof(profile->secondName));
    func_00873EE0(packet, profile->secondName, sizeof(profile->secondName) - 1);
    func_00874120(packet, &profile->status);
    func_00874120(packet, &profile->mode);
    func_00873F60(packet, &profile->value38);
    func_00873F60(packet, &profile->value3C);
    func_00874090(packet, &profile->field4A);
    func_00874040(packet, &profile->value7E);
    func_00874040(packet, &profile->field44);
    func_00874040(packet, &profile->field46);
    func_00874040(packet, &profile->field48);
    func_00874120(packet, &profile->field80);
    func_00874120(packet, &profile->field32);
    func_00874120(packet, &profile->field81);
}

static inline void netlib_limit_profile_count(u16 *count, s32 low, s32 high) {
    if ((s32)*count < low)
        *count = low;
    if ((s32)*count > high)
        *count = high;
}

#endif
