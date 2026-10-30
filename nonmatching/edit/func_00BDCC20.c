/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC6910(M2C_UNK);                     /* extern */
M2C_UNK func_00BC7390(M2C_UNK);                     /* extern */
M2C_UNK func_00BC87A0();                            /* extern */
M2C_UNK func_00BC90A0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF3E50(M2C_UNK);                     /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
M2C_UNK func_00BF4400(M2C_UNK, M2C_UNK);            /* extern */
s16 func_00BF4480(M2C_UNK);                         /* extern */
M2C_UNK func_00BF45D0();                            /* extern */
M2C_UNK func_00BF47D0(M2C_UNK, u16);                /* extern */
M2C_UNK func_00BF5CF0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF7380(M2C_UNK *);                   /* extern */
s32 func_00BF73D0();                                /* extern */
M2C_UNK func_00BF7460(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF7810();                            /* extern */
s32 func_00BF7950();                                /* extern */
M2C_UNK func_00BF7CF0(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern void *D_003E7DC0;
extern M2C_UNK func_00BDCDE0;

void func_00BDCC20(void) {
    u16 temp_a1;
    u16 temp_a1_2;
    u16 var_a1;

    func_00BF7810();
    if (M2C_FIELD(D_003E7DC0, u16 *, 0xF8) == 0xFFFF) {
        var_a1 = func_00BF7950() & 0xFFFF;
        if (var_a1 == 0xFFFF) {
            var_a1 = 0;
        }
        M2C_FIELD(D_003E7DC0, u16 *, 0xF8) = var_a1;
        func_00C1B440(0, var_a1);
    }
    func_00BF4400(0, 0xD);
    func_00BF4400(1, 0xD);
    func_00BF7460(0, 1, 1, 0x1B, 1);
    func_00BF7380(&func_00BDCDE0);
    temp_a1 = M2C_FIELD(D_003E7DC0, u16 *, 0xF8);
    M2C_FIELD(D_003E7DC0, u16 *, 0xF8) = temp_a1;
    func_00C1B440(0, temp_a1);
    temp_a1_2 = M2C_FIELD(D_003E7DC0, u16 *, 0xF8);
    if (temp_a1_2 == 0xFFFF) {
        func_00BF47D0(0, temp_a1_2);
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
    } else {
        func_00BF5CF0(0);
        func_00BF7CF0(0);
        func_00B91590(9, 1);
        func_00B91590(0x1E, 1);
        func_00BC3FB0(0x40013);
    }
    func_00BC7390(0xF);
    func_00B91440(0x1F);
    func_00B91440(0x19);
    func_00BC6910(0x20001D);
    func_00BC90A0(0);
    func_00BF3E50(1);
}
