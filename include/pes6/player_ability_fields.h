#ifndef PES6_PLAYER_ABILITY_FIELDS_H
#define PES6_PLAYER_ABILITY_FIELDS_H

#include "types.h"

/* Byte loads used by the lineup rating and special-ability lookups. The option-file bit names are
 * shared with edit_player_params.h. */
typedef struct {
    u8 rating : 7;
    u8 special : 1;
} PlayerRating;
typedef struct {
    u8 value0 : 3;
    u8 value1 : 3;
    u8 : 2;
} PlayerThreeBitValues;
typedef struct {
    u8 oneTouchPass : 1;
    u8 outside : 1;
    u8 marking : 1;
    u8 sliding : 1;
    u8 covering : 1;
    u8 defensiveLineControl : 1;
    u8 penaltyStopper : 1;
    u8 oneOnOneStopper : 1;
} PlayerSpecialFlags;
typedef struct {
    u8 appearance[2];
    PlayerRating ability[26];
    PlayerThreeBitValues extra[2];
    PlayerSpecialFlags special;
    u8 reserved1F;
    PlayerRating extra20;
} Pes6PackedAbilities;

#endif
