/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6DebugMenu_Select(s32);                         /* extern */
s32 Pes6DebugMenu_Update(s32);                             /* extern */
extern char Pes6DebugMenu_State[];

void Pes6Scene_DebugMenu(void) {
    switch ((*(s32 *)Pes6DebugMenu_State)) {                           /* irregular */
    case 0:
        if (Pes6DebugMenu_Update((*(s32 *)Pes6DebugMenu_State)) != 0) {
            (*(s32 *)Pes6DebugMenu_State) += 1;
            return;
        }
        return;
    case 1:
        Pes6DebugMenu_Select((*(s32 *)Pes6DebugMenu_State));
        break;
    }
}
