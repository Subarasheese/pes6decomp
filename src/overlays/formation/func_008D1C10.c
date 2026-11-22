/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001D7D60(char *, s8);

void func_008D1C10(char *arg0, s8 arg1) {
    s32 var_s1;
    char *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_001D7D60(M2C_FIELD(var_s0, char **, 0x20C), arg1);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
}
