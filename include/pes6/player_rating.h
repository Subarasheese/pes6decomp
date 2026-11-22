#ifndef PES6_PLAYER_RATING_H
#define PES6_PLAYER_RATING_H

#include "types.h"

/* A squad ability byte stores a seven-bit rating alongside an independent flag. */
typedef struct {
    u8 value : 7;
    u8 flag : 1;
} Pes6PlayerRating;

#endif
