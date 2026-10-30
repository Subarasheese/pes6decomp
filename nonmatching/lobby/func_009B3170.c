/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DB580(s32, s32);                    /* extern */
M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
M2C_UNK func_0081D7E0(s32, s64);                    /* extern */
M2C_UNK func_0099AEB0(s32, s32);                    /* extern */
extern void *D_003EAD18;

void func_009B3170(s64 arg0) {
    s32 var_s3;
    void *temp_s1;
    void *var_s2;

    var_s3 = 0;
    temp_s1 = D_003EAD18;
    var_s2 = temp_s1;
    do {
        func_0081D7E0(M2C_FIELD(var_s2, s32 *, 0x10), (s64) (arg0 << 0x38) >> 0x38);
        var_s3 += 1;
        var_s2 += 0x40;
    } while (var_s3 < 6);
    func_0099AEB0(M2C_FIELD(temp_s1, s32 *, 4), arg0 & 0xFF);
    func_002DB580(M2C_FIELD(temp_s1, s32 *, 8), arg0 & 0xFF);
    if (M2C_FIELD(temp_s1, s32 *, 0x1A4) == 0) {
        func_002DF8E0(M2C_FIELD(temp_s1, s32 *, 0x190), 0);
        return;
    }
    func_002DF8E0(M2C_FIELD(temp_s1, s32 *, 0x190), arg0 & 0xFF);
}
