/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B9A50(s32, M2C_UNK);                /* extern */
M2C_UNK func_002DB580(s32, M2C_UNK);                /* extern */
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0081D7E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009A76F0(void *, s32, void *);         /* extern */

void func_009A6380(void *arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s3;
    void *temp_v0;
    void *var_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    temp_s2 = ((s64) (((M2C_FIELD(arg0, s32 *, 0x37C) - M2C_FIELD(arg0, s32 *, 0x380)) + 1) << 0x38) >> 0x38) & 0xFF;
    if (temp_a0 != 0) {
        func_001B9A50(temp_a0, 0);
    }
    if (temp_s0 != 0) {
        func_002DB580(temp_s0, 0);
    }
    var_s0 = arg0 + 0x5C;
    if (var_s0 != NULL) {
        var_s3 = 0;
        do {
            if (var_s0 != NULL) {
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x20), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x3C), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x38), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x48), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x70), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x74), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x74), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x78), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x7C), 0);
                func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x44), 0);
            }
            var_s3 += 1;
            var_s0 += 0x80;
        } while (var_s3 < 5);
    }
    temp_v0 = arg0 + 0x2DC;
    if ((temp_v0 != NULL) && (temp_v0 != NULL)) {
        func_002DF8E0(M2C_FIELD(arg0, s32 *, 0x2DC), 0);
    }
    func_009A76F0(arg0, M2C_FIELD(arg0, s32 *, 0x374), arg0 + ((temp_s2 & 0xFF) * 0x10) + 0xC);
    M2C_FIELD(arg0, s8 *, 0x378) = 8;
}
