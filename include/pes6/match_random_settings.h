#ifndef PES6_MATCH_RANDOM_SETTINGS_H
#define PES6_MATCH_RANDOM_SETTINGS_H

#include "types.h"

typedef struct {
    u8 stadium : 1, time : 1, season : 1, weather : 1, kits : 1, stadiumOptionC4 : 1,
        stadiumOptionC5 : 1, ball : 1;
} MatchRandomFlags;
typedef struct {
    u8 optionD1 : 1;
    u8 : 7;
} ExtraMatchRandomFlags;
extern MatchRandomFlags Pes6MatchSettings_RandomFlags;
extern ExtraMatchRandomFlags D_003E9A7D;

#endif
