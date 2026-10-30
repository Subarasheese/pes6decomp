/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6F80();                            /* extern */
M2C_UNK func_00BE6F90(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6FE0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, u16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF7380(M2C_UNK *);                   /* extern */
M2C_UNK func_00BF7460(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF7CF0(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern char D_00CE5BD8[];
extern M2C_UNK func_00BE5700;
extern M2C_UNK func_00BE5950;

void func_00BE5820(void *arg0) {
    u16 temp_s0;

    func_00BF7460(0, 1, 0, 0, 0);
    func_00BF7380(&func_00BE5700);
    func_00B91440(0x19);
    func_00BE6FA0(0);
    func_00BE6FE0(1);
    func_00BE6F90(0);
    func_00BF7CF0(1);
    temp_s0 = M2C_FIELD(arg0, u16 *, 8);
    (*(u16 *)D_00CE5BD8) = temp_s0;
    func_00C1B440(0, temp_s0);
    func_00C1B440(1, temp_s0);
    func_00BF45D0(0, temp_s0, 0, 0, 0);
    func_00BE6F80();
    func_00B91590(0x1E, 1);
    func_001B66C0(0xED0010);
    func_00BC3FB0(0x1B);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5950;
}
