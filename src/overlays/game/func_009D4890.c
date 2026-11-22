/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"

extern u8 D_00591E4F[], D_00591E50[];

/* The two tracked ids for each side occupy consecutive bytes. Position
 * differences are truncated before testing the 256-unit horizontal radius. */
#define CHECK_PLAYER(origin, value)                                                                \
    do {                                                                                           \
        u8 id = (value);                                                                           \
        Pes6MatchPlayer *other = Pes6MatchPlayer_Get(id);                                          \
        if ((origin) != other) {                                                                   \
            s32 dx = (s32)((origin)->x - other->x);                                                \
            s32 dz = (s32)((origin)->z - other->z);                                                \
            if (dx * dx + dz * dz <= 256 * 256 && (other->speed > 1024 || other->y != 0.0f))       \
                return 1;                                                                          \
        }                                                                                          \
    } while (0)

s32 func_009D4890(Pes6MatchPlayer *player) {
    u8 side = player->side;
    CHECK_PLAYER(player, D_00591E4F[2 * side]);
    CHECK_PLAYER(player, D_00591E50[2 * side]);
    CHECK_PLAYER(player, D_00591E4F[2 * ((u8)side ^ 1)]);
    CHECK_PLAYER(player, D_00591E50[2 * ((u8)side ^ 1)]);
    return 0;
}
