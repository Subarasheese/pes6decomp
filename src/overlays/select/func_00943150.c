/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_named_event.h"

extern u32 func_00941EF0(void), func_00941EE0(void);
extern s32 func_001BE4D0(s32), func_002DCA30(void), func_001B68B0(void);
extern s8 D_003EABF0;
extern s32 Pes6SceneStack[];
s32 func_00943150(void) {
    if (func_002DCA30()) {
        if (!func_001BE4D0(0))
            return 0;
    } else if (!func_001B68B0())
        return 0;
    if (Pes6SceneStack[0] != 15)
        return 1;
    switch (D_003EABF0) {
    case 0:
        func_00815B70(0);
        func_00D10140(8);
        func_008157A0(func_00941EF0, func_00941EE0, "Mdsl_EtTeamSelectCreateWait");
        func_00D0FBE0(1);
        D_003EABF0 = 1;
        break;
    case 1:
        if (func_00815100("Mdsl_EtTeamSelectCreateWait")) {
            D_003EABF0 = 0;
            return 1;
        }
        break;
    }
    return 0;
}
