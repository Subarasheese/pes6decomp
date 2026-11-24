/* compiler: mwcc-3.0.1b151 */
#include "pes6/restart_player.h"
extern u8 D_00591F24[];
extern void func_00B79B70(f32 *x, f32 *z, Pes6MatchPlayer *player);

void func_00B798F0(f32 *outX, f32 *outZ, u8 id) {
    Pes6MatchPlayer *player = Pes6MatchPlayer_Get(id);
    switch (D_00591F24[0]) {
    case 2: {
        f32 position = D_00591E58[0];
        s32 x = (s32)position;
        f32 lateral;
        x = x > 0 ? x : -x;
        if (!((f32)x <= 13337.0f))
            position = 13337.0f * (f32)pitchSign(position);
        lateral = 9049.0f * (f32)pitchSign(D_00591E60[0]);
        *outX = position;
        *outZ = lateral;
    } break;
    case 6: {
        f32 x =
            0.0f + (f32)(pitchSign(D_00591E58[0]) * 160) + 12057.0f * (f32)pitchSign(D_00591E58[0]);
        f32 z = 2344.0f * (f32)pitchSign(D_00591E60[0]) - (f32)(pitchSign(D_00591E60[0]) * 256);
        *outX = x;
        *outZ = z;
    } break;
    case 8:
        *outX = -10649.0f;
        *outZ = 0.0f;
        break;
    case 4:
        *outX = 10649.0f * (f32)player->goalDirection;
        *outZ = 0;
        break;
    case 1:
    case 5: {
        f32 z = *(volatile f32 *)D_00591E60;
        *outX = *(volatile f32 *)D_00591E58;
        *outZ = z;
    } break;
    case 3:
        func_00B79B70(outX, outZ, player);
        break;
    }
}
