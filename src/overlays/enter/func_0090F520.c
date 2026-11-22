/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char Pes6SceneStack[];

s32 func_0090F520(void) {
    if ((*(s32 *)Pes6SceneStack) == 9) {
        return 1;
    }
    return -((*(s32 *)Pes6SceneStack) != 0xC);
}
