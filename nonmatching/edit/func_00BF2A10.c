/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern s32 func_001D7BC0(void *);
M2C_UNK func_00B90540(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90560(s32, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00B90640(s32, void *, M2C_UNK);        /* extern */
s64 func_00BECA60(M2C_UNK);                         /* extern */

void func_00BF2A10(void *arg0, s32 arg1) {
    M2C_UNK var_s2;
    s32 var_s1;
    s64 temp_s4;
    s64 temp_v0;
    s64 var_s0;
    void *temp_s5;

    var_s2 = 1;
    temp_v0 = (s64) (func_00BECA60(1) << 0x38) >> 0x38;
    switch (temp_v0) {                              /* irregular */
    case 1:
        var_s0 = 0;
        var_s1 = 0;
        break;
    case 0:
        var_s0 = 0;
        var_s2 = 0;
        var_s1 = 0;
        break;
    default:
        var_s0 = 1 & 0xFFFF;
        var_s1 = temp_v0 - 2;
        var_s2 = 0;
        break;
    }
    temp_s5 = *M2C_FIELD(arg0, void ***, 4);
    temp_s4 = (s64) (func_001D7BC0(temp_s5) << 0x30) >> 0x30;
    func_001D7D80(temp_s5, (s16) ((s64) (var_s0 << 0x30) >> 0x30));
    func_00B90640(arg1, temp_s5, 1);
    func_00B90560(arg1, temp_s5, 0, var_s2, var_s1);
    func_00B90540(arg1, 1);
    func_001D7D80(temp_s5, (s16) temp_s4);
}
