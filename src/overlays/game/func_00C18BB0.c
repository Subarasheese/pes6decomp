/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_pitch.h"

f32 func_00C18BB0(u16 point, f32 x, f32 z) {
    f32 dx = pitchX(point) - x;
    f32 dz = pitchZ(point) - z;
    return func_001CD9E0(dx * dx + dz * dz);
}
