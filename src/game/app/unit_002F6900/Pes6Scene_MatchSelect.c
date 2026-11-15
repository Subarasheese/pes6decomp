/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6Scene_Get(M2C_UNK);                         /* extern */
M2C_UNK Pes6Scene_Advance(M2C_UNK);                     /* extern */
M2C_UNK Pes6Scene_Set(M2C_UNK, M2C_UNK);            /* extern */
s32 Pes6File_AllChannelsIdle();                                /* extern */
M2C_UNK func_001FC780(M2C_UNK);                     /* extern */
M2C_UNK Pes6Module_Load(M2C_UNK);                     /* extern */
M2C_UNK Pes6MatchContext_SetByteC08(M2C_UNK);                     /* extern */
s32 Pes6MatchSelect_Update();                                /* extern */
M2C_UNK func_002F7160();                            /* extern */

void Pes6Scene_MatchSelect(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = Pes6Scene_Get(1);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        Pes6Module_Load(3);
        Pes6Scene_Advance(1);
        return;
    case 1:                                         /* switch 1 */
        if (Pes6File_AllChannelsIdle() != 0) {
            func_002F7160();
            Pes6Scene_Advance(1);
        case 2:                                     /* switch 1 */
            temp_v0_2 = Pes6MatchSelect_Update();
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 1:
                func_001FC780(5);
                Pes6MatchContext_SetByteC08(0);
                Pes6Scene_Set(0, 8);
                return;
            case 2:
                Pes6Scene_Set(0, 9);
                return;
            case 3:
                Pes6Scene_Set(0, 4);
                break;
            }
        } else {
            return;
        }
        break;
    }
}
