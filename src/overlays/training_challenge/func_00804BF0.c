/* compiler: mwcc-3.0.1b198 */
#include "pes6/challenge_marker_scale.h"

extern const ChallengePoint *D_00827DF8[];

void func_00804BF0(ChallengePoint *out, void *course, s32 index) {
    challenge_origin_position(out, D_00827DF8[0], index);
}
