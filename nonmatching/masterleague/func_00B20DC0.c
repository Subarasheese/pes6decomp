/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
extern u8 func_00226E70(void);
extern void func_00B20600(void);
M2C_UNK func_00994BF0();                            /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
M2C_UNK func_00AFA850(s32, s32);                    /* extern */
M2C_UNK func_00AFCF90();                            /* extern */
s32 func_00B18D50(s8 *);                            /* extern */
M2C_UNK func_00B20430();                            /* extern */
M2C_UNK func_00B20510();                            /* extern */

void func_00B20DC0(void) {
    s8 sp3C;
    s8 sp3D;
    s32 var_v0;
    s8 var_s0;
    s8 var_s1;
    u8 temp_s0;
    void *temp_v0;

    if (func_00226E70() != 0) {
        temp_v0 = func_00229DF0();
        if (temp_v0 != NULL) {
            temp_s0 = M2C_FIELD(temp_v0, u8 *, 3);
            if ((temp_s0 & 0xFF) >= (func_0099B570(0) & 0xFF)) {
                var_v0 = 2;
            } else {
                goto block_8;
            }
        } else {
block_8:
            var_v0 = 1;
        }
        if ((var_v0 & 0xFF) == 2) {
            func_00AFCF90();
        }
    }
    func_00994BF0();
    func_00B20600();
    func_00B20510();
    func_00B20430();
    var_s1 = 0;
    do {
        var_s0 = 0;
loop_13:
        sp3C = var_s1;
        sp3D = var_s0;
        if (!(func_00B18D50(&sp3C) & 0xFF)) {
            func_00AFA850(var_s1 & 0xFF, var_s0 & 0xFF);
        }
        var_s0 += 1;
        if (var_s0 < 0x25) {
            goto loop_13;
        }
        var_s1 += 1;
    } while (var_s1 < 0x48);
}
