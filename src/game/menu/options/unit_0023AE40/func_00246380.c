/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_option_features.h"

f32 func_00246380(void) {
    s32 id;
    f32 total = 0.0f;
    for (id = 0; id < 207; id++)
        total += featureEnabled(id);
    return total / 198.0f;
}
