#ifndef PES6_MATCH_PLAYER_RATINGS_H
#define PES6_MATCH_PLAYER_RATINGS_H

#include "types.h"

typedef struct {
    f32 rating[2][18];
    u8 reserved90[8];
    u8 rank[2][18];
} PlayerRatings;
extern PlayerRatings D_00CCAF80, *D_003EA7EC;
u8 func_00C222B0(u8 side, u8 slot);
typedef char check_player_ratings_size[sizeof(PlayerRatings) == 0xbc ? 1 : -1];

#endif
