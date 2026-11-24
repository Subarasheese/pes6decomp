/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_pitch.h"

f32 func_00C18AC0(u16 point, u16 other) {
    f32 dx = pitchX(point) - pitchX(other);
    f32 dz = pitchZ(point) - pitchZ(other);
    return func_001CD9E0(dx * dx + dz * dz);
}
