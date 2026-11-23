/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_property_set.h"
extern s32 func_009F99C0(void);
extern s32 func_009F9830(void);
extern s32 func_009F97D0(void);
extern s32 func_009F9AA0(void);
extern s32 func_009F9A20(void);
extern s32 func_009F98A0(void);
extern s32 func_009F9B20(void);
extern s32 func_009F9990(void);
void func_009E9D00(LobbyPropertySet *entry) {
    LobbyProvider local[8] = {func_009F99C0, func_009F9830, func_009F97D0, func_009F9AA0,
                              func_009F9A20, func_009F98A0, func_009F9B20, func_009F9990};
    applyLobbyProperties(entry, local);
}
