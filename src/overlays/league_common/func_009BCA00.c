/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"
typedef struct {
    u8 pad00[0x10];
    void *handle;
} FieldDisplay;
extern void func_0017B060(void *, s32, s32), func_001A5A20(Pes6PlayerFieldState *);
void func_009BCA00(s32 index) {
    Pes6MatchPlayer *player = &Pes6MatchPlayers[index + 1];
    func_0017B060(((FieldDisplay *)player->info->fieldState)->handle, 0, 0);
    func_001A5A20(player->info->fieldState);
}
