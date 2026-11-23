/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s32 widget;
    u8 reserved04[0x201];
    u8 state;
} LobbyPage;
extern s32 func_00213540(s32, s32);
extern LobbyPage *D_00A7DEC8;
void func_009DDFC0(void) {
    if ((D_00A7DEC8 != 0) && (D_00A7DEC8->state == 3)) {
        func_00213540(D_00A7DEC8->widget, 0);
        D_00A7DEC8->state = 0U;
    }
}
