/* compiler: mwcc-3.0.1b198 */
#include "pes6/challenge_marker_scale.h"

extern const ChallengePoint *D_00827DF4[];

void func_00804C80(ChallengePoint *out, void *course, s32 index) {
    challenge_origin_position(out, D_00827DF4[0], index);
}
