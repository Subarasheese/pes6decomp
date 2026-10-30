/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BF9970(void);
extern void func_001D7D80(void *, s16);
M2C_UNK func_00B90520(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B90560(s32, void *, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_00B90640(s32, void *, M2C_UNK);        /* extern */

void func_00BF8800(void *arg0, s32 arg1) {
    M2C_UNK var_a1;
    s16 var_s0;
    s32 temp_v0;
    s32 var_s2;

    temp_v0 = func_00BF9970();
    if (temp_v0 != 0) {
        var_s2 = temp_v0 - 1;
        var_s0 = 2;
    } else {
        var_s0 = 1;
        var_s2 = 0;
    }
    func_001D7D80(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC), var_s0);
    func_00B90640(*M2C_FIELD(arg0, s32 **, 0x20), M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC), 0);
    func_001D7D80(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x10), var_s0);
    func_00B90560(*M2C_FIELD(arg0, s32 **, 0x20), M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x10), 1, var_s2, 0);
    if (arg1 == 0) {
        var_a1 = 0;
    } else {
        var_a1 = 2;
    }
    func_00B90520(*M2C_FIELD(arg0, s32 **, 0x20), var_a1);
}
