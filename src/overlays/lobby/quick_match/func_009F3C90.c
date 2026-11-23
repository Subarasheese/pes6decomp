/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s8 state;
    s8 active;
} LobbyPage;
extern LobbyPage *D_00A7E248;
void func_009F3C90(void) {
    if (D_00A7E248 != 0) {
        D_00A7E248->active = 0;
        D_00A7E248->state = 0;
    }
}
