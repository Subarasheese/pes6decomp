/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 Pes6Scene_Get(s32);
s32 func_00C88B10(s32);
extern s16 D_003EA888;
extern char D_00CCCE20[];

s32 func_00C88D20(void) {
    s32 value;

    value = 0;
    if (Pes6Scene_Get(0) != 0xC) {
        value = func_00C88B10(*((s32 *)(((char *)D_00CCCE20) + (D_003EA888 * 4))));
    }
    return value;
}
