/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_property_set.h"
extern s32 func_009F8040(void);
extern s32 func_009F7EB0(void);
extern s32 func_009F7E50(void);
extern s32 func_009F8120(void);
extern s32 func_009F80A0(void);
extern s32 func_009F7F20(void);
extern s32 func_009F8010(void);
void func_009E97C0(LobbyPropertySet *entry) {
    LobbyProvider local[8] = {
        func_009F8040, func_009F7EB0, func_009F7E50, func_009F8120, func_009F80A0, func_009F7F20, 0,
        func_009F8010};
    applyLobbyProperties(entry, local);
}
