#ifndef PES6_NETLIB_PROFILE_READER_H
#define PES6_NETLIB_PROFILE_READER_H

#include "pes6/netlib_profile_list.h"

extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *packet, void *buffer, s32 size);
extern s32 func_00874090(void *packet, s16 *field);
extern s32 func_00874040(void *packet, s16 *field);
extern s32 func_008740E0(void *packet, u8 *field);
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern void *func_001C4730(void *dest, const void *src, u32 size);

static inline void netlib_read_profile_fields(NetlibPacket *packet, LobbyProfile *profile) {
    func_00874120(packet, &profile->field7D);
    func_00874120(packet, &profile->field35);
    func_00874090(packet, &profile->field36);
    func_00874040(packet, (s16 *)&profile->field7E);
    func_008740E0(packet, &profile->field59);
    func_001C48E8(profile->text38, 0, sizeof(profile->text38));
    func_001C48E8(profile->text5C, 0, sizeof(profile->text5C));
    func_00873EE0(packet, profile->text5C, sizeof(profile->text5C) - 1);
    func_008740E0(packet, &profile->field5A);
    func_008740E0(packet, &profile->field5B);
    func_00874040(packet, (s16 *)&profile->fieldC6);
    func_00873F60(packet, &profile->field80);
    func_001C48E8(profile->text84, 0, sizeof(profile->text84));
    func_00873EE0(packet, profile->text84, sizeof(profile->text84) - 1);
    func_00874120(packet, &profile->fieldC5);
}

#endif
