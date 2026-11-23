/* compiler: mwcc-3.0.1b210 */
#include "pes6/challenge_marker_scale.h"

extern const ChallengePoint *D_008282D0[];

void func_00813C30(ChallengePoint *out, void *course, s32 index) {
    challenge_scaled_position(out, D_008282D0[0], index);
}
