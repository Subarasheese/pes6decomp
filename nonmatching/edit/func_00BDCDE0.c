/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC87A0();                            /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
s16 func_00BF4480(M2C_UNK);                         /* extern */
M2C_UNK func_00BF45D0();                            /* extern */
M2C_UNK func_00BF47D0(M2C_UNK, u16);                /* extern */
M2C_UNK func_00BF5CF0(M2C_UNK);                     /* extern */
s32 func_00BF73D0();                                /* extern */
M2C_UNK func_00BF7CF0(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern void *D_003E7DC0;

void func_00BDCDE0(u16 arg0) {
    u16 temp_a1;

    M2C_FIELD(D_003E7DC0, u16 *, 0xF8) = arg0;
    func_00C1B440(0, arg0);
    temp_a1 = M2C_FIELD(D_003E7DC0, u16 *, 0xF8);
    if (temp_a1 == 0xFFFF) {
        func_00BF47D0(0, temp_a1);
    } else {
        func_00BF45D0();
    }
    func_00BF4370(0);
    M2C_FIELD(D_003E7DC0, s16 *, 0xFA) = func_00BF4480(0);
    func_00B91590(9, 1);
    func_00BC87A0();
    M2C_FIELD(D_003E7DC0, s32 *, 0x100) = 1;
    if (func_00BF73D0() == 0) {
        func_00B91440(9);
        func_00B91440(0x1E);
        func_00BC3FB0(0x40003);
        return;
    }
    func_00BF5CF0(0);
    func_00BF7CF0(0);
    func_00B91590(9, 1);
    func_00B91590(0x1E, 1);
    func_00BC3FB0(0x40013);
}
