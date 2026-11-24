/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 state[16];
    void (*notify)(void);
} MatchSceneHooks;
extern MatchSceneHooks D_0058C6D0[];
void func_00255F30(void) {
    MatchSceneHooks *slot = D_0058C6D0;
    if (slot->notify)
        slot->notify();
}
