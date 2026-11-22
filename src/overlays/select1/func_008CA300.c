/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001D7D60(char *, s8);
extern void func_001EDAE0(char *, s8);

void func_008CA300(char *arg0, s8 arg1) {
    s32 var_s1;
    char *var_s0;

    if (arg0 != NULL) {
        func_001D7D60(M2C_FIELD(arg0, char **, 4), arg1);
        func_001D7D60(M2C_FIELD(arg0, char **, 0x174), arg1);
        var_s1 = 0;
        var_s0 = arg0;
        do {
            if (M2C_FIELD((arg0 + var_s1), u8 *, 0x1DE) == 1) {
                func_001EDAE0(M2C_FIELD(var_s0, char **, 0x178), arg1);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
    }
}
