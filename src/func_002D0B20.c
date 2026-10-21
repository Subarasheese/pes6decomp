/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_00143220(s32, s32, M2C_UNK, s32);      /* extern */
s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_001ACBC0(void *);                      /* extern */
M2C_UNK func_001ACDF0(void *);                      /* extern */
M2C_UNK func_001AD400(void *);                      /* extern */
M2C_UNK func_001AD8D0(void *);                      /* extern */
M2C_UNK func_001ADC30(void *);                      /* extern */
M2C_UNK func_001ADF80(void *);                      /* extern */
M2C_UNK func_001AE250(void *);                      /* extern */
M2C_UNK func_001AE2D0(void *);                      /* extern */
M2C_UNK func_001AE510(void *);                      /* extern */
M2C_UNK func_001AFC20();                            /* extern */

void func_002D0B20(void *arg0) {
    s32 var_s1;
    void *temp_s0;
    void *temp_v0;

    func_001AFC20();
    func_001AE510(arg0);
    func_001ADF80(arg0);
    func_001ADC30(arg0);
    func_001ACDF0(arg0);
    func_001AD400(arg0);
    func_001ACBC0(arg0);
    func_001AD8D0(arg0);
    func_001AE250(arg0);
    func_001AE2D0(arg0);
    temp_s0 = M2C_FIELD(arg0, void **, 0x10);
    var_s1 = 0x26E8;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        var_s1 += 2;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_s1 += 1;
    }
    if (func_001454C0(var_s1) != 0) {
        temp_v0 = M2C_FIELD(temp_s0, void **, 0x14);
        func_00143220(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4), 0x7C, var_s1);
    }
}
