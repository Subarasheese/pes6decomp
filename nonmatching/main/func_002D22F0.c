/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0017BD70(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_001AB490();                            /* extern */
extern M2C_UNK func_00186A30;

void func_002D22F0(void *arg0) {
    s32 var_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x10);
    func_001AB490();
    var_s1 = 0;
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x14), s32 *, 4);
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), s32 *, 0x18) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x14), s32 *, 0x14);
    do {
        func_0017BD70(temp_s0, var_s1, 0x20000000);
        var_s1 += 1;
    } while (var_s1 < 7);
    func_0017BD70(temp_s0, 0, 0x20011111);
    func_0017BD70(temp_s0, ((s32) M2C_FIELD(arg0, u16 *, 0x40) % 4) + 1, 0x20011111);
    if (M2C_FIELD(arg0, u8 *, 0x31) == 3) {
        M2C_FIELD(arg0, u16 *, 0x34) = 1U;
    }
    func_0017BD70(temp_s0, ((s32) M2C_FIELD(arg0, u16 *, 0x34) % 2) + 5, 0x20011111);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C8) = &func_00186A30;
}
