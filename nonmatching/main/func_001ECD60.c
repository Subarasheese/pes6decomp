/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003993B0[];
extern char D_003993B8[];
extern M2C_UNK (*D_003E996C)(s32, s64 *, s32, s64);

void func_001ECD60(char **arg0, char *arg1) {
    s64 tbl[2];
    s32 var_a2;
    s32 var_s2;
    s64 *var_s1;
    s64 *var_s3;
    char *var_s0;

    var_s2 = 0;
    var_s0 = *arg0;
    var_s3 = M2C_FIELD(arg1, s64 **, 0x28);
    var_s1 = M2C_FIELD(arg1, s64 **, 0x2C);
    tbl[0] = *(s64 *)D_003993B0;
    tbl[1] = *(s64 *)D_003993B8;
    D_003E996C(M2C_FIELD(arg1, s32 *, 0x24), var_s3, M2C_FIELD(arg1, s32 *, 8), tbl[0]);
    var_a2 = M2C_FIELD(arg1, s32 *, 8);
    if (var_a2 != 0) {
        do {
            M2C_FIELD(var_s0, s64 *, 0) = *var_s1;
            M2C_FIELD(var_s0, s64 *, 8) = 1;
            M2C_FIELD(var_s0, s64 *, 0x10) = *var_s3;
            M2C_FIELD(var_s0, s64 *, 0x18) = tbl[var_s2];
            if (var_s2 == 0) {
                var_s2 = 1;
            }
            var_a2 -= 1;
            var_s3 += 1;
            var_s1 += 1;
            var_s0 += 0x20;
        } while (var_a2 != 0);
    }
    *arg0 += M2C_FIELD(arg1, s32 *, 8) << 5;
}
