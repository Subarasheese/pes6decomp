/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_highlights.h"

s32 func_00BC8BC0(void) {
    s32 i;
    HighlightClip **slot = D_00CBD390;
    for (i = 0; i < HIGHLIGHTS; i++, slot++) {
        if (!*slot)
            break;
    }
    return (u8)i;
}
