/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *Pes6SaveData_GetEntry7980(s32);
s32 func_00225B20(u8);                              /* extern */
s32 func_00229010(s32);                             /* extern */
M2C_UNK func_002290D0(s32);                         /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_009AC4D0(s32 arg0) {
    u8 sp6F;
    s32 temp_s4;
    u8 *temp_v0;
    s32 var_s1;
    u8 temp_s3;

    temp_v0 = Pes6SaveData_GetEntry7980(arg0 & 0xFF);
    if (temp_v0 == 0) {
        return 0xFF;
    }
    var_s1 = 0;
    if ((s32) temp_v0[2] > 0) {
        do {
            temp_s4 = ((var_s1 & 0xFF) + (func_00236680(arg0) & 0xFF)) & 0xFF;
            temp_s3 = func_00229010(temp_s4) & 0xFF;
            func_002290D0(temp_s4);
            if (&sp6F != NULL) {
                sp6F = temp_s3;
            }
            if (func_00225B20(sp6F) == 1) {
                return var_s1;
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < (s32) temp_v0[2]);
    }
    return 0xFF;
}
