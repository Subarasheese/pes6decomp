/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_property_set.h"
extern s32 func_009F8A00(void);
extern s32 func_009F88B0(void);
extern s32 func_009F8850(void);
extern s32 func_009F8920(void);
extern s32 func_009F89D0(void);
void func_009E9600(LobbyPropertySet *entry) {
    LobbyProvider local[8] = {func_009F8A00, func_009F88B0, func_009F8850, 0, 0, func_009F8920, 0,
                              func_009F89D0};
    applyLobbyProperties(entry, local);
}
