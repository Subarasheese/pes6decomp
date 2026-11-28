/* compiler: mwcc-3.0.1b210 */

#include "pes6/target_heading.h"
extern s32 Pes6Math_Atan2Fixed(s32, s32);

u16 func_009B3480(Pes6MatchPlayer *player, f32 x, f32 z) {
    return Pes6Math_Atan2Fixed(-(s32)(z - player->z), (s32)(x - player->x)) & 0xffff;
}
