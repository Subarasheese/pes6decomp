/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001C8590(s32, s32, M2C_UNK);           /* extern */
s32 func_0081D6D0(s32);                             /* extern */
void *func_0082C2A0();                              /* extern */

s32 func_009459F0(s32 arg0, s32 arg1) {
    s32 var_s1;
    s32 var_s2;
    s32 var_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, void **, 0x117E8);
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        var_s2 = M2C_FIELD(var_v1, s32 *, 0xB540);
        if (var_s2 >= 0) {
            if (var_s2 >= 0x65) {
                var_s2 = 0x64;
            }
        } else {
            var_s2 = 0;
        }
    } else {
        var_s2 = 0;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != NULL) {
        var_v1_2 = M2C_FIELD(temp_v0_2, s32 *, 0x117E8);
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_s1 = 0;
    } else if (arg0 < 0) {
        var_s1 = 0;
    } else if (arg0 < var_s2) {
        var_s1 = var_v1_2 + (arg0 * 0x1D0);
    } else {
        var_s1 = 0;
    }
    if (var_s1 != 0) {
        func_001C48E8(var_s1 + 0x65, 0, 0x31);
        if (func_0081D6D0(arg1) == 1) {
            func_001C8590(var_s1 + 0x65, arg1, 0x30);
        }
        return 1;
    }
    return 0;
}
