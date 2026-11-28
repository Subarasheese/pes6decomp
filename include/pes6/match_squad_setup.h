#ifndef PES6_MATCH_SQUAD_SETUP_H
#define PES6_MATCH_SQUAD_SETUP_H

#include "types.h"

typedef struct {
    u8 kickingFoot : 1;
    u8 : 7;
} Pes6LineupFootFlags;

/* The match setup copies the first 0x24 parameter bytes and repacks the identity fields. */
typedef struct {
    u8 base[0x24];
    union {
        struct {
            u32 : 8;
            u32 nationality : 9;
            u32 : 15;
        } word;
        struct {
            u8 special : 1;
            u8 : 1;
            u8 height : 6;
        } low;
    } profile;
    u8 shirtNumber;
    u8 weight : 7;
    u8 nationalityBelow31 : 1;
    u8 age : 5;
    u8 nationalityIs26 : 1;
    u8 : 2;
} Pes6LineupProfile;

static inline s32 pes6LineupKickingFoot(const Pes6LineupProfile *profile) {
    return ((const Pes6LineupFootFlags *)profile->base)->kickingFoot & 1;
}

typedef struct {
    u8 base[0x24];
    u8 height : 6;
    u8 : 2;
    u8 weight : 7;
    u8 : 1;
    u8 reserved26[0x16];
    union {
        struct {
            u16 nationality : 9;
            u16 : 7;
        } word;
        struct {
            u8 reserved3C;
            u8 : 1;
            u8 age : 5;
            u8 : 2;
        } fields;
    } profile;
    u8 reserved3E[0x48 - 0x3E];
} Pes6ProfileParams;

typedef union {
    struct {
        u8 bytes00[0x17];
        u8 shirtNumber;
        u8 bytes18[0xc];
    } fields;
    u32 words[9];
} Pes6PlayerEquipment;
typedef union {
    Pes6ProfileParams params;
    struct {
        u8 base[0x24];
        Pes6PlayerEquipment equipment;
    } kit;
} Pes6LineupParams;
typedef struct {
    u8 bytes[8];
} Pes6SquadState8;
typedef struct {
    Pes6SquadState8 first, second;
    union {
        u8 last[36];
        struct {
            u8 reserved100[2], flag102, reserved103;
            s32 active104;
            u8 reserved108[8];
            s32 flag110;
            u8 reserved114[16];
        } match;
    };
} Pes6SquadExtraState;
typedef struct {
    u8 reserved00[0x10];
    u8 shirtNumber, reserved11;
    u16 nationality;
    u8 emptyPlayer, state, reserved16[2];
    s32 field18;
    Pes6PlayerEquipment equipment;
    u8 field40, field41, field42, pad43;
    u16 value44;
    u16 playerId;
    s8 teammate[32];
    Pes6LineupProfile current, saved;
    s32 fieldC0;
    u8 reservedC4, fieldC5, reservedC6[2], fieldC8, fieldC9;
    s16 fieldCA, fieldCC;
    s8 fieldCE;
    u8 flagCF0 : 1;
    u8 flagCF1 : 1;
    u8 flagCF2 : 1;
    u8 flagCF3 : 1;
    u8 flagCF4 : 1;
    u8 : 3;
    u8 reservedD0[4], fieldD4, fieldD5, fieldD6, fieldD7;
    s32 fieldD8;
    u8 reservedDC[8];
    s16 fieldE4, fieldE6;
    Pes6SquadState8 extraE8;
    Pes6SquadExtraState extra;
    u8 reserved124[0x148 - 0x124];
    char playerName[0x2e];
    u8 reserved176[0x247 - 0x176];
    char shirtName[16];
    u8 reserved257[0x348 - 0x257];
} Pes6SquadSetupPlayer;

typedef char check_lineup_profile_size[sizeof(Pes6LineupProfile) == 0x2c ? 1 : -1];
typedef char check_lineup_params_size[sizeof(Pes6LineupParams) == 0x48 ? 1 : -1];
typedef char check_setup_player_size[sizeof(Pes6SquadSetupPlayer) == 0x348 ? 1 : -1];

#endif
