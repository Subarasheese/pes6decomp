/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AFBD50(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0022ED40();                            /* extern */
M2C_UNK func_0098F4C0();                            /* extern */
M2C_UNK func_0098FE40();                            /* extern */
M2C_UNK func_009949A0();                            /* extern */
M2C_UNK func_00994B90();                            /* extern */
void *func_00994C60(s32, s32);                      /* extern */
M2C_UNK func_00B1BE60();                            /* extern */
M2C_UNK func_00B1D610();                            /* extern */
M2C_UNK func_00B2F9C0();                            /* extern */
M2C_UNK func_00B619A0();                            /* extern */

void func_00AFC460(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    void *temp_v0;
    void *temp_v0_2;

    func_00AFBD50();
    func_0098FE40();
    func_0098F4C0();
    var_s1 = 0;
    do {
        var_s0 = 0;
loop_2:
        temp_v0 = func_00994C60(var_s1, var_s0);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s16 *, 4) = 0;
        }
        var_s0 += 1;
        if (var_s0 < 0x25) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 0x48);
    func_009949A0();
    var_s3 = 0;
    do {
        var_s2 = 0;
loop_8:
        temp_v0_2 = func_00994C60(var_s3 & 0xFF, var_s2 & 0xFF);
        if (temp_v0_2 != NULL) {
            func_001C48E8(temp_v0_2, 0, 0x10);
            M2C_FIELD(temp_v0_2, s16 *, 4) = 0;
        }
        var_s2 += 1;
        if (var_s2 < 0x25) {
            goto loop_8;
        }
        var_s3 += 1;
    } while (var_s3 < 0x48);
    func_00994B90();
    func_00B619A0();
    func_00B1BE60();
    func_00B1D610();
    func_00B2F9C0();
    func_0022ED40();
}
