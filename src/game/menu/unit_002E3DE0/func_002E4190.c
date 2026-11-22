/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001D76B0(s32, s32);
s32 func_001F18B0(s32, s32);

void func_002E4190(char *arg0, s32 arg1) {
    s32 var_s1;
    char *temp_v1;
    char *var_s0;

    if (arg0 != NULL) {
        var_s0 = arg0;
        var_s1 = 0;
        do {
            func_001F18B0(M2C_FIELD(var_s0, s32 *, 0x24), arg1);
            temp_v1 = M2C_FIELD(var_s0, char **, 0x1C);
            if (temp_v1 != NULL) {
                func_001D76B0(M2C_FIELD(temp_v1, s32 *, 0x48), arg1);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
    }
}
