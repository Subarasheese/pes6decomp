/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
s32 func_00BC6100(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BE6A70(u16);                         /* extern */
M2C_UNK func_00BE6F90(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6FE0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF7380(M2C_UNK (*)(u16));            /* extern */
M2C_UNK func_00BF7460(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF77A0(s32, s32);                    /* extern */
extern M2C_UNK func_00BE6EF0;

void func_00BE6CA0(void *arg0) {
    s32 var_s0;

    func_00BF7460(0, 1, 1, 0x1A, 1);
    var_s0 = 0x40;
    do {
        func_00BF77A0(var_s0, func_00BC6100(var_s0, 0) < 0x11);
        var_s0 = (var_s0 + 1) & 0xFFFF;
    } while (var_s0 < 0xCC);
    func_00BF7380(func_00BE6A70);
    func_00B91440(0x19);
    func_00BE6FA0(0);
    func_00BE6FE0(0);
    func_00BE6F90(0);
    func_00BE6A70(M2C_FIELD(arg0, u16 *, 8));
    func_001B66C0(0xED0013);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE6EF0;
}
