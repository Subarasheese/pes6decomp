/* compiler: mwcc-3.0.1b151 */
#include "pes6/restart_player.h"
void func_00B79B70(f32 *outX, f32 *outZ, Pes6MatchPlayer *p) {
    f32 x = 13433.0f * (f32)pitchSign(D_00591E58[0]);
    f32 z = 8665.0f * (f32)pitchSign(D_00591E60[0]);
    if (!p->side) {
        if (!playerMirrored(p)) {
            if (z < 0.0f)
                z += 208.0f;
            else {
                x -= 96.0f;
                z -= 112.0f;
            }
        } else {
            if (z < 0.0f) {
                x -= 96.0f;
                z += 112.0f;
            } else
                z -= 208.0f;
        }
    } else {
        if (!playerMirrored(p)) {
            if (z < 0.0f) {
                x += 96.0f;
                z += 112.0f;
            } else
                z -= 208.0f;
        } else {
            if (z < 0.0f)
                z += 208.0f;
            else {
                x += 96.0f;
                z -= 112.0f;
            }
        }
    }
    *outX = x;
    *outZ = z;
}
