/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B8FAD0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B8FD20(s32 *, s32, u16);             /* extern */
extern char D_00CBE640[];
extern char D_00CBE680[];

void func_00BF0540(void *arg0) {
    s32 var_s2_2;
    s32 var_s3;
    u16 *var_s2;
    u16 *var_s3_2;
    u16 temp_a2;
    u16 temp_a2_2;

    func_00B8FD20(M2C_FIELD(arg0, s32 **, 8), *M2C_FIELD(arg0, s32 **, 4), 0U);
    func_00B8FAD0(*M2C_FIELD(arg0, s32 **, 8), 1);
    var_s3 = 0;
    var_s2 = ((void *)D_00CBE640);
    do {
        temp_a2 = *var_s2;
        func_00B8FD20(&M2C_FIELD(arg0, s32 **, 8)[temp_a2], M2C_FIELD(M2C_FIELD(arg0, s32 **, 4), s32 *, 0x10), temp_a2);
        func_00B8FAD0(M2C_FIELD(arg0, s32 **, 8)[temp_a2], 1);
        var_s3 += 1;
        var_s2 += 2;
    } while (var_s3 < 0x1E);
    var_s2_2 = 0;
    var_s3_2 = ((void *)D_00CBE680);
    do {
        temp_a2_2 = *var_s3_2;
        func_00B8FD20(&M2C_FIELD(arg0, s32 **, 8)[temp_a2_2], M2C_FIELD(M2C_FIELD(arg0, s32 **, 4), s32 *, 0x10), temp_a2_2);
        func_00B8FAD0(M2C_FIELD(arg0, s32 **, 8)[temp_a2_2], 0);
        var_s2_2 += 1;
        var_s3_2 += 2;
    } while (var_s2_2 < 0x1E);
}
