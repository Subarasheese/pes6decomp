/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_property_set.h"
extern s32 func_009F5A50(void);
extern s32 func_009F5900(void);
extern s32 func_009F58A0(void);
extern s32 func_009F5970(void);
extern s32 func_009F5A20(void);
void func_009E9980(LobbyPropertySet *entry) {
    LobbyProvider local[8] = {func_009F5A50, func_009F5900, func_009F58A0, 0, 0, func_009F5970, 0,
                              func_009F5A20};
    applyLobbyProperties(entry, local);
}
