/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6F80();                            /* extern */
M2C_UNK func_00BE6F90(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF3E50(M2C_UNK);                     /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
M2C_UNK func_00BF43B0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_00BF4400(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, u16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF4A90(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BF5950(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern char D_00CE5BD8[];
extern M2C_UNK func_00BE5510;

void func_00BE55D0(void *arg0) {
    s32 var_s1;
    u16 temp_s1;

    func_00BF5950(1);
    func_00BF4400(1, 0xE);
    func_00BF3E50(0);
    func_00BF4A90(0xFFFF, 0);
    var_s1 = 0;
    do {
        func_00BF43B0(0, var_s1, 1);
        var_s1 += 1;
    } while (var_s1 < 0x17);
    func_00BF3E50(0);
    func_00B92210(0, 0, 1);
    func_00BE6FA0(1);
    func_00BE6F90(0);
    func_001B66C0(0xED0011);
    func_00BC3FB0(3);
    temp_s1 = M2C_FIELD(arg0, u16 *, 8);
    (*(u16 *)D_00CE5BD8) = temp_s1;
    func_00C1B440(0, temp_s1);
    func_00C1B440(1, temp_s1);
    func_00BF45D0(0, temp_s1, 0, 0, 0);
    func_00BE6F80();
    func_00B91590(0x1E, 1);
    func_00BF4370(0);
    func_00C1B420(0);
    func_00B91590(0x19, 1);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5510;
}
