/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_highlights.h"

static inline void moveHighlight(u8 from, u8 to) {
    *D_00CBD390[to] = *D_00CBD390[from];
    D_00CBD3B0[to] = D_00CBD3B0[from];
}
void func_00BC6A60(s32 first) {
    s32 index;
    for (index = first; index < HIGHLIGHTS - 1; index++) {
        if (!D_00CBD390[index + 1])
            break;
        moveHighlight((u8)(index + 1), (u8)index);
        reassignRequest((u8)(index + 1), (u8)index);
    }
    D_00CBD390[index] = 0;
    reassignRequest((u8)index, HIGHLIGHTS);
}
