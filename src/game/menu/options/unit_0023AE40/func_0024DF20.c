/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern s32 Pes6SceneStack[];
extern s32 func_001B9DF0(void);

s32 func_0024DF20(void) {
    s32 i;
    if (Pes6SceneStack[0] == 4)
        return 0;
    if (!func_001B9DF0()) {
        for (i = 0; i < MATCH_PAD_COUNT; i++)
            if (D_008DC270[i] == 4)
                return 1;
    }
    return 0;
}
