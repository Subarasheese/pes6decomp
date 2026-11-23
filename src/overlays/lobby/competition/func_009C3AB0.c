/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x38];
    void *widget;
    u8 reserved3C[0x18];
    u8 active;
    s8 value;
} LobbyPage;
extern void func_001D7D60(void *, s8);
extern LobbyPage *D_00A7DD58;
s32 func_009C3AB0(s8 value) {
    if (D_00A7DD58 == 0) {
        return 0;
    }
    D_00A7DD58->value = value;
    if (D_00A7DD58->active != 0) {
        func_001D7D60(D_00A7DD58->widget, value);
    }
    return 1;
}
