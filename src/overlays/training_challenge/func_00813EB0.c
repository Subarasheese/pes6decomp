/* compiler: mwcc-3.0.1b210 */
#include "pes6/challenge_marker_scale.h"

extern const ChallengePoint *D_008282C0[];

void func_00813EB0(ChallengePoint *out, void *course, s32 index) {
    challenge_scaled_position(out, D_008282C0[0], index);
}
