/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x34];
    s32 state;
    u8 reserved38[2], active, substate, selection, reserved3d[7];
} LobbySelection;
extern LobbySelection *D_00A68D90;
extern LobbySelection *func_0099C7E0(s32);
extern void func_0097AE50(s32), func_009E0380(s32), func_009E1490(s32), func_009E1520(s32);
extern void func_0097AF40(void);
extern void func_009E0430(u8, s32, void (*)(void), s32);
void func_0097B830(void) {
    LobbySelection *page;
    if (!D_00A68D90) {
        page = func_0099C7E0(sizeof(*page));
        D_00A68D90 = page;
        if (page) {
            page->substate = 0;
            D_00A68D90->state = 1;
            D_00A68D90->active = 1;
            func_0097AE50(1);
            func_009E0430(D_00A68D90->selection, 50, func_0097AF40, 0);
            func_009E0380(0);
            func_009E1520(1);
            func_009E1490(0);
        }
    }
}
