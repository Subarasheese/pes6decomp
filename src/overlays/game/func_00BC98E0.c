/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_highlights.h"

s32 func_00BC98E0(void) {
    s32 i;
    s32 empty = 1;
    for (i = 0; i < HIGHLIGHTS; i++) {
        if (D_00CBD390[i])
            empty = 0;
    }
    return empty;
}
