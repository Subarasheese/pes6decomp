/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_002648F0(int);
extern void func_002648E0(int);
extern int func_002646D0(int);
M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_00821B20(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64); /* extern */
M2C_UNK func_00B2A370(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_005E3934[];

s32 func_00822780(s32 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s2;
    u32 var_s2_2;
    void *temp_s0;

    var_s2 = 0;
    temp_s1 = *arg0;
    temp_s0 = arg0 + 0x2C;
    func_002648F0(temp_s1);
    temp_v0 = func_002646D0(temp_s1) & 0xFF;
    switch (temp_v0) {                              /* irregular */
    case 0:
        func_00B2A370(((void *)D_005E3934), 1);
        M2C_FIELD(temp_s0, s32 *, 0x174) = 0;
        func_00264790((void *) temp_s1, 1U);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(temp_s0, s32 *, 0x174) >= 0xA) {
            var_s2_2 = 0;
            do {
                func_00204D90();
                var_s2_2 += 1;
            } while (var_s2_2 < 0x3E8U);
            M2C_FIELD(temp_s0, s32 *, 0x174) = 0;
            var_s2 = 1;
        } else {
            func_00821B20(1, 0, 1, 0, 1, 1, 1, 0, 1);
            M2C_FIELD(temp_s0, s32 *, 0x174) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x174) + 1);
        }
        break;
    }
    func_002648E0(temp_s1);
    return var_s2;
}
