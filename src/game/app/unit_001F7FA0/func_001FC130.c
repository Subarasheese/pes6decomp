/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6File_AllChannelsIdle(M2C_UNK);                         /* extern */
M2C_UNK func_00255EA0();                            /* extern */
M2C_UNK func_002D3030();                            /* extern */
M2C_UNK func_003424C0();                            /* extern */
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */
M2C_UNK Pes6MatchFlow_SetState(M2C_UNK, M2C_UNK);            /* extern */

s32 func_001FC130(void) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    temp_v1 = Pes6MatchFlow_GetState(2) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        Pes6MatchFlow_SetState(2, 0);
        break;
    case 0:
        if (Pes6File_AllChannelsIdle(2) != 0) {
            func_003424C0();
            Pes6MatchFlow_SetState(2, 1);
        case 1:
            func_00255EA0();
            func_002D3030();
            Pes6MatchFlow_SetState(2, 1);
        case 2:
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
