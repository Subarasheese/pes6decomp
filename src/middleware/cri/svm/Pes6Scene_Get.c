/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u32 Pes6SceneStack[];
u32 Pes6Scene_Get(s32 arg0) {
    return *(u32 *)((u8 *)Pes6SceneStack + arg0 * 8);
}
