/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001FBDD0();                                /* extern */
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK Pes6MatchFlow_SetState(M2C_UNK, M2C_UNK);            /* extern */

s32 func_001FBF70(void) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    temp_v1 = Pes6MatchFlow_GetState(1) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        Pes6MatchFlow_SetState(1, 0);
        /* fallthrough */
    case 0:
        if (func_001FBDD0() != 0) {
            func_009E1CB0(1);
        case 1:
            func_009E1CB0(1);
        case 2:
            func_009E1CB0(1);
        case 3:
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
