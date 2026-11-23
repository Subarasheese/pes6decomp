/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s8 state;
    s8 active;
} LobbyPage;
extern s32 func_009E09D0(s32);
extern LobbyPage *D_00A7DEF0;
void func_009E1170(void) {
    if (D_00A7DEF0 != 0) {
        D_00A7DEF0->state = 0;
        D_00A7DEF0->active = 0;
        func_009E09D0(1);
    }
}
