/* compiler: mwcc-3.0.1b198 */
#include "pes6/challenge_marker_scale.h"

extern const ChallengePoint *D_00827DFC[];

void func_00804B60(ChallengePoint *out, void *course, s32 index) {
    challenge_origin_position(out, D_00827DFC[0], index);
}
