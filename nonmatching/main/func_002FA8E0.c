/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B6E40(s32, s32);                    /* extern */
M2C_UNK func_001B6EE0(s32);                         /* extern */
s32 func_001D6C80(s32, s32);                        /* extern */
s32 func_001D6D30();                                /* extern */
void *func_001D6E70(s32, s32, s32);                 /* extern */
M2C_UNK func_001DEF30(s32, M2C_UNK);                /* extern */
M2C_UNK func_001DF4F0(s32, M2C_UNK);                /* extern */
s32 func_001F08B0(s32);                             /* extern */

void *func_002FA8E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a2;
    void *temp_v0;

    var_a2 = arg2;
    if (var_a2 == 0) {
        var_a2 = func_001F08B0(func_001D6D30());
    }
    temp_v0 = func_001D6E70(arg0, arg1, var_a2);
    if ((temp_v0 != NULL) && (temp_v0 != NULL)) {
        temp_s1 = M2C_FIELD(temp_v0, s32 *, 0xC);
        temp_s0 = func_001D6C80(arg0, arg1);
        func_001B6EE0(temp_s1);
        func_001B6E40(temp_s1, temp_s0);
        func_001DEF30(temp_s1, 3);
        func_001DF4F0(temp_s1, 1);
    }
    return temp_v0;
}
