/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC87A0();                            /* extern */
M2C_UNK func_00BF4060(M2C_UNK, s32);                /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF47D0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF59A0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF5CF0(M2C_UNK);                     /* extern */
s32 func_00BF73D0();                                /* extern */
M2C_UNK func_00BF7CF0(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, s32);                /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern char D_00CE5900[];

void func_00BDDE70(s32 arg0) {
    s32 temp_s0;

    func_00C1B440(0, arg0);
    temp_s0 = func_00C1B460(0) & 0xFFFF;
    if (temp_s0 != 0xFFFF) {
        func_00BF45D0(0, temp_s0, 0, 2, 0);
    } else {
        func_00BF47D0(0);
    }
    func_00BF4060(0, temp_s0);
    func_00BF4370(0);
    func_00B91590(9, 1);
    func_00BF59A0(0);
    func_00B91590(9, 1);
    func_00B91590(0x1E, 1);
    if (func_00BF73D0() == 0) {
        func_00B91440(9);
        func_00B91440(0x1E);
    } else {
        func_00BF5CF0(0);
        func_00BF7CF0(0);
    }
    func_00BC87A0();
    (*(s32 *)D_00CE5900) = 1;
}
