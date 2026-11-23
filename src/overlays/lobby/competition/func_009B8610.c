/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 state;
    u8 reserved04[0x5e];
    u8 changed;
} LobbyState;
extern LobbyState *D_00A7DC10[];
static inline void setState(LobbyState *page, s32 state) {
    if (page) {
        if (page->state != state)
            page->changed = 1;
        page->state = state;
    }
}
s32 func_009B8610(void) {
    if (!D_00A7DC10[0])
        return 4;
    setState(D_00A7DC10[0], 1);
    return 0;
}
