/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001EF900(s32, s8);
s32 func_002E1C50(char *, s8);

void func_002F4470(char *arg0, s8 arg1) {
    s32 var_s4;
    char *temp_s2;
    char *temp_v1;
    char *var_s3;

    if (arg0 != NULL) {
        temp_v1 = arg0 + (M2C_FIELD(arg0, s8 *, 8) * 0x4A4);
        temp_s2 = temp_v1 + 0xB4;
        if (M2C_FIELD(temp_v1, u8 *, 0x547) != 0) {
            var_s4 = 0;
            var_s3 = temp_s2;
            do {
                func_001EF900(M2C_FIELD(var_s3, s32 *, 0x464), arg1);
                var_s4 += 1;
                var_s3 += 4;
            } while (var_s4 < 2);
            func_002E1C50(temp_s2 + 0x46C, arg1);
            M2C_FIELD(arg0, s8 *, 5) = arg1;
        }
    }
}
