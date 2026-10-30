/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C1B4B0(u32);
extern void func_00BE6F70(u32);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BC5ED0(u16);                             /* extern */
M2C_UNK func_00BE6D60(u16);                         /* extern */
M2C_UNK func_00BE6F80();                            /* extern */
M2C_UNK func_00BE6FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, u16, s16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern M2C_UNK func_00BE6660;

void func_00BE68F0(void *arg0) {
    func_00C1B440(0, M2C_FIELD(arg0, u16 *, 8));
    func_00B91590(0x1E, 1);
    func_00B92210(0, 0, 1);
    func_00BE6FA0(1);
    func_00BE6F80();
    func_001B66C0(0xED0014);
    if (func_00BC5ED0(M2C_FIELD(arg0, u16 *, 8)) == 0) {
        func_00BC3FB0(3);
    } else {
        func_00BC3FB0(0x203);
    }
    func_00BF45D0(0, M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, s16 *, 0xC), 0, 0);
    func_00BE6D60(M2C_FIELD(arg0, u16 *, 8));
    func_00C1B420(0);
    func_00BF4370(0);
    func_00C1B420(0);
    func_00B91590(0x19, 1);
    func_00C1B4B0(5U);
    func_00BE6F70(1U);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE6660;
}
