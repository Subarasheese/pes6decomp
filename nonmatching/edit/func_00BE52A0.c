/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C1B4B0(u32);
extern void func_00BE6F70(u32);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6F80();                            /* extern */
M2C_UNK func_00BE6F90(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF3C40(M2C_UNK);                     /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
M2C_UNK func_00BF43B0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_00BF4A90(u16, M2C_UNK);                /* extern */
s32 func_00BF5850(M2C_UNK);                         /* extern */
s32 func_00BF5890(M2C_UNK);                         /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */
extern M2C_UNK func_00BE5110;
extern M2C_UNK func_00BE53C0;

void func_00BE52A0(void *arg0) {
    M2C_UNK *var_v1;
    s32 var_s1;

    func_00BF3C40(1);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_00BF4A90(M2C_FIELD(arg0, u16 *, 8), 0);
    func_00C1B420(1);
    if (func_00BF5850(1) != 0) {
        var_s1 = 0;
        do {
            if (var_s1 != func_00BF5890(0)) {
                func_00BF43B0(0, var_s1, 0);
            }
            var_s1 += 1;
        } while (var_s1 < 0x17);
        func_00BE6F90(1);
        func_00BE6FA0(3);
        func_00BE6F80();
        func_00B92210(0, 1, 1);
        func_001B66C0(0xED0012);
        func_00BC3FB0(0xC0003);
        func_00C1B4B0(5U);
        func_00BE6F70(1U);
        func_00BF4370(1);
        func_00C1B420(1);
        func_00B91590(0x19, 1);
        var_v1 = &func_00BE5110;
    } else {
        var_v1 = &func_00BE53C0;
    }
    M2C_FIELD(arg0, M2C_UNK **, 4) = var_v1;
}
