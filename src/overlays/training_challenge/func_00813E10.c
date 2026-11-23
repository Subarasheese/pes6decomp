/* compiler: mwcc-3.0.1b210 */
#include "pes6/challenge_marker_scale.h"

extern const ChallengePoint *D_008282C4[];

void func_00813E10(ChallengePoint *out, void *course, s32 index) {
    challenge_scaled_position(out, D_008282C4[0], index);
}
