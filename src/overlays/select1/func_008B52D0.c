/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 Pes6SceneStack[];
extern s32 Pes6SaveData_GetUnavailableFlag(void), func_008223F0(void), func_00821570(void),
    func_001B68B0(void), func_00815100(void *);
extern char D_008DA690[];
s32 func_008B52D0(void) {
    if (Pes6SceneStack[0] == 15) {
        if (func_008223F0() == 1) {
            if (!func_00821570())
                return 0;
        } else if (!func_001B68B0())
            return 0;
    } else if (!func_001B68B0())
        return 0;
    switch (Pes6SaveData_GetUnavailableFlag()) {
    case 0:
        return 1;
    default:
        return func_00815100(D_008DA690) != 0;
    }
}
