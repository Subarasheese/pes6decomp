/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x1];
    u8 state;
    s8 counter;
} LobbyPage;
extern LobbyPage *D_00A7E018;
void func_009F0C20(void) {
    if ((D_00A7E018 != 0) && (D_00A7E018->state == 3)) {
        D_00A7E018->state = 2U;
        D_00A7E018->counter = 0;
    }
}
