/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
extern s32 D_00CBDBB0[13];
extern s32 func_00BE1080(const Pes6EditPlayerParams *, s32 position);
void func_00BE1B00(Pes6EditPlayerParams *player, s32 position) {
    if (position != 13) {
        s32 any =
            (player->gk |
             (player->cwp |
              (player->cbt |
               (player->sb |
                (player->dm |
                 (player->wb |
                  (player->cm |
                   (player->sm | (player->am | (player->wg | (player->cf | (player->ss))))))))))));
        if (player->registeredPosition == 13 && any > 0) {
            player->registeredPosition = position;
        } else if (player->registeredPosition == position && !func_00BE1080(player, position)) {
            if (any > 0) {
                u32 i;
                for (i = 0; i < 13; ++i) {
                    if (func_00BE1080(player, D_00CBDBB0[i])) {
                        player->registeredPosition = D_00CBDBB0[i];
                        break;
                    }
                }
            } else {
                player->registeredPosition = 13;
            }
        }
    }
}
