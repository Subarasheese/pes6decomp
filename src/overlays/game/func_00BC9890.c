/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_highlights.h"

s32 func_00BC9890(void) {
    s32 best = 0x7fffffff;
    /* Every priority is a byte, so the first slot assigns selected. */
    s32 selected;
    s32 i;
    for (i = 0; i < HIGHLIGHTS; i++) {
        if (D_00CBD3B0[i].priority < best) {
            best = D_00CBD3B0[i].priority;
            selected = i;
        }
    }
    return selected;
}
