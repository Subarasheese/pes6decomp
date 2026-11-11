/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001DA4B0(s32);                         /* extern */
M2C_UNK func_002CADF0();                            /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
s32 Pes6SaveData_GetUnavailableFlag();                                /* extern */
extern char D_003D41E0[];
extern s32 D_003E99E4;

void func_0020C240(void) {
    u32 var_s1;
    s32 *var_s0;

    if (D_003E99E4 == 2) {
        var_s1 = 0;
        var_s0 = ((void *)D_003D41E0);
        do {
            func_001DA4B0(*var_s0);
            var_s1 += 1;
            var_s0 += 1;
        } while (var_s1 < 2U);
        if (Pes6SaveData_GetUnavailableFlag() != 0) {
            func_002CADF0();
            func_002CBA60(0xB);
        }
        D_003E99E4 = 0;
    }
}
