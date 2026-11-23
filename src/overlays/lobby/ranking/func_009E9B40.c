/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_property_set.h"
extern s32 func_009F6E80(void);
extern s32 func_009F6D30(void);
extern s32 func_009F6060(void);
extern s32 func_009F7110(void);
extern s32 func_009F6F90(void);
extern s32 func_009F6DA0(void);
void func_009E9B40(LobbyPropertySet *entry) {
    LobbyProvider local[8] = {
        func_009F6E80, func_009F6D30, func_009F6060, func_009F7110, func_009F6F90, 0, 0,
        func_009F6DA0};
    applyLobbyProperties(entry, local);
}
