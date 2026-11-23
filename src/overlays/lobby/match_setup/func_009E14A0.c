/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s8 state;
    s8 active;
} LobbyPage;
extern s32 func_00817C00(void);
extern LobbyPage *D_00A7DEF0;
void func_009E14A0(void) {
    if (D_00A7DEF0 != 0) {
        D_00A7DEF0->state = 2;
        D_00A7DEF0->active = 1;
        func_00817C00();
    }
}
