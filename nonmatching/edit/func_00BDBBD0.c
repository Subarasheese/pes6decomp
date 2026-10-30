/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00BDBE60(void);
extern void func_001B6670(void);
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91890(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BC8C70(M2C_UNK);                     /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, void *);             /* extern */
M2C_UNK func_00BC93A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC9B60(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BDBCB0();                            /* extern */
M2C_UNK func_00BDC180();                            /* extern */
s32 func_00BEC780();                                /* extern */
extern void *D_003E7DC0;
extern void *D_003E7DC8;

s32 func_00BDBBD0(void) {
    M2C_UNK var_a0;

    func_00BDBE60();
    func_00BDC180();
    M2C_FIELD(D_003E7DC8, s32 *, 0) = 0;
    M2C_FIELD(D_003E7DC8, s32 *, 4) = (s32) (M2C_FIELD(D_003E7DC8, s32 *, 0x10) == 0);
    func_00BDBCB0();
    func_00B92210(1, 0, 0);
    func_00B91440(9);
    var_a0 = 1;
    if (func_00BEC780() != 1) {
        var_a0 = 0;
    }
    func_00B91890(var_a0, 1);
    func_00BC9B60(0, 0);
    func_00BC93A0(0, 0);
    func_00BC8C70(0);
    M2C_FIELD(M2C_FIELD(D_003E7DC0, void **, 0x70), u8 *, 0x6F) = (u8) M2C_FIELD(D_003E7DC0, u8 *, 0x10C);
    func_00BC91D0(0, M2C_FIELD(D_003E7DC0, void **, 0x70));
    func_001B6670();
    M2C_FIELD(D_003E7DC0, s32 *, 0x108) = 0;
    if (M2C_FIELD(D_003E7DC8, s32 *, 0x10) == 0) {
        return 0x1A;
    }
    return 0xC;
}
