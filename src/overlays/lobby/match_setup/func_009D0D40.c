/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved00[0x9a0];
    void *widget;
} LobbyPanel;
extern LobbyPanel *D_00A7DDF8[];
extern void func_002DF730(void *widget, s32 state);
s32 func_009D0D40(s32 enabled) {
    LobbyPanel *panel = D_00A7DDF8[0];
    if (!panel)
        return 0;
    func_002DF730(panel->widget, enabled ? 0 : 2);
    return 1;
}
