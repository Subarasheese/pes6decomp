/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern int Pes6SaveData_GetUnavailableFlag(void), func_008223F0(void), func_00821570(void), func_001B68B0(void),
    func_00815100(void *);
extern char D_003D8B40[];
s32 func_00245BE0(void) {
    if (Pes6SaveData_GetUnavailableFlag() != 0) {
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
        return func_00815100(D_003D8B40) != 0;
    }
}
