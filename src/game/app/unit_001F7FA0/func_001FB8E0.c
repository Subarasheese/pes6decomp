/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6File_AllChannelsIdle();                                /* extern */
M2C_UNK func_00271EC0();                            /* extern */
M2C_UNK func_00271FB0();                            /* extern */
M2C_UNK func_00272170();                            /* extern */
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK Pes6MatchFlow_SetState(M2C_UNK, M2C_UNK);            /* extern */

s32 func_001FB8E0(void) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    temp_v1 = Pes6MatchFlow_GetState(2) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        Pes6MatchFlow_SetState(2, 0);
        /* fallthrough */
    case 0:
        func_00272170();
        func_009E1CB0(2);
        /* fallthrough */
    case 1:
        if (Pes6File_AllChannelsIdle() != 0) {
            func_009E1CB0(2);
        case 2:
            func_00271FB0();
            func_009E1CB0(2);
        case 3:
            func_00271EC0();
            func_009E1CB0(2);
        case 4:
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
