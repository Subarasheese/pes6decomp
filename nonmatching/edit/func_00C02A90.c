/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D4ED0(void *);
M2C_UNK func_00B8FD20(s32, s32, u16);               /* extern */
M2C_UNK func_00B8FFF0(void *, s32, s32);            /* extern */
M2C_UNK func_00B90090(M2C_UNK);                     /* extern */
M2C_UNK func_00B906F0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_00BC72C0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
extern char D_00CBF090[];

void func_00C02A90(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s3;
    u16 *var_s1_2;
    u32 var_s0;

    func_00B90090(0x27);
    temp_v0 = func_001D4ED0(M2C_FIELD(arg0, void **, 0));
    var_s3 = 0;
    if (temp_v0 > 0) {
        var_s1 = 0;
        do {
            func_00B8FFF0(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4) + var_s1, var_s3);
            var_s3 += 1;
            var_s1 += 4;
        } while (var_s3 < temp_v0);
    }
    func_00B8FD20(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10), 0xAU);
    var_s0 = 0;
    var_s1_2 = ((void *)D_00CBF090);
    do {
        func_00B8FD20(M2C_FIELD(arg0, s32 *, 8) + ((var_s0 + 1) * 4), M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC), *var_s1_2);
        var_s0 += 1;
        var_s1_2 += 2;
    } while (var_s0 < 0xAU);
    func_00B906F0(M2C_FIELD(arg0, s32 *, 0x20), 0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4), 0);
    func_00BC72C0(M2C_FIELD(arg0, s32 *, 0x24), 0xA, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10), 2);
}
