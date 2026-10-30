/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0019EE90(void);
extern void func_001A03B0(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00520150[];

void func_0018D740(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0;
    var_s1 = ((void *)D_00520150);
    do {
        var_s2 = 0;
        var_s0 = var_s1;
loop_2:
        if (var_s3 == 0) {
            func_001A03B0(M2C_FIELD(var_s0, s32 *, 4));
        }
        var_s2 += 1;
        var_s0 += 4;
        if (var_s2 < 2) {
            goto loop_2;
        }
        func_001C48E8(var_s1, 0, 0x60);
        var_s3 += 1;
        var_s1 += 0x60;
    } while (var_s3 < 2);
    func_0019EE90();
}
