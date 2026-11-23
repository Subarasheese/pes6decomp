/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x4];
    s8 state;
    u8 reserved05[0x119f];
    s8 nextState;
} LobbyPage;
extern LobbyPage *D_00A7DD50;
void func_009C2D90(void) {
    if (D_00A7DD50 != 0) {
        D_00A7DD50->state = 4;
        D_00A7DD50->nextState = 2;
    }
}
