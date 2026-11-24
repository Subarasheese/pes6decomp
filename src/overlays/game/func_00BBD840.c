/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
extern float *D_003E74CC;
extern f32 D_00CBD250[], D_00CBD254[], D_00CBD258[];
void func_00BBD840(void) {
    u8 id;
    f32 scale = *D_003E74CC / 60.0f;
    D_00CBD250[0] = D_00CBD254[0] = D_00CBD258[0] = 100.0f;
    for (id = 0; id < 23; ++id) {
        Pes6MatchPlayer *player = Pes6MatchPlayer_Get(id);
        if (player->info->active) {
            f32 time;
            if (player->z >= 8729.0f) {
                time = 0.0f;
            } else {
                time = scale * (8729.0f - player->z) / player->velocityZ;
            }
            if (player->x < -5386.0f) {
                if (time < D_00CBD250[0])
                    D_00CBD250[0] = time;
            } else if (player->x < 5386.0f) {
                if (time < D_00CBD254[0])
                    D_00CBD254[0] = time;
            } else if (time < D_00CBD258[0])
                D_00CBD258[0] = time;
        }
    }
}
