/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
s32 func_008B4920();                                /* extern */
s32 func_008B9430();                                /* extern */
M2C_UNK func_008D2FE0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008DD390(void *, u8, s32);             /* extern */

void func_008B3B20(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s1;
    void *temp_v0;
    void *temp_v1;

    var_s1 = arg1;
    temp_v1 = M2C_FIELD(arg0, void **, 0x3220);
    if ((temp_v1 != NULL) && !(var_s1 & 0x10) && (M2C_FIELD(temp_v1, u8 *, 0x19) == 0xFF)) {
        var_s1 |= 1;
    }
    if (func_008B9430() != 0) {
        var_s1 &= ~1;
    }
    if (func_008B4920() != 0) {
        var_s1 |= 8;
    }
    func_008D2FE0(arg0 + 0x1CA8, 0);
    if ((func_002371A0((s32) M2C_FIELD(arg0, u16 *, 0x208)) & 0xFFFF) == 0x35) {
        var_s1 |= 2;
    }
    if (arg2 != 0) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x3220);
        if ((temp_v0 != NULL) && ((func_002371A0((s32) M2C_FIELD(temp_v0, u16 *, 0x208)) & 0xFFFF) == 0x35)) {
            var_s1 |= 2;
        }
    }
    func_008DD390(arg0 + 0x2168, M2C_FIELD(arg0, u8 *, 0), var_s1);
}
