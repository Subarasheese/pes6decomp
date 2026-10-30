/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];
extern void *D_006024A8;

void func_00112BC4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    u32 var_a1;
    void *temp_s3;
    void *var_a0;

    temp_s3 = M2C_FIELD(arg0, void **, 0x6C);
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x277, ((void *)D_005F8700));
    }
    temp_s2 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE8)(arg1);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x84);
    temp_s1 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE4)(arg2);
    if ((temp_s2 != temp_a0) || (temp_s1 != M2C_FIELD(arg0, s32 *, 0x88))) {
        var_a1 = 0;
        if (M2C_FIELD(arg0, u32 *, 0x5C) != 0) {
            var_a0 = temp_s3;
            do {
                var_a1 += 1;
                M2C_FIELD(var_a0, s32 *, 0) = (s32) (M2C_FIELD(var_a0, s32 *, 0) + (temp_s2 - temp_a0));
                M2C_FIELD(var_a0, s32 *, 4) = (s32) (M2C_FIELD(var_a0, s32 *, 4) + (temp_s1 - M2C_FIELD(arg0, s32 *, 0x88)));
                var_a0 += 0x10;
            } while (var_a1 < (u32) M2C_FIELD(arg0, u32 *, 0x5C));
        }
        M2C_FIELD(arg0, s32 *, 0x88) = temp_s1;
        M2C_FIELD(arg0, s32 *, 0x84) = temp_s2;
    }
}
