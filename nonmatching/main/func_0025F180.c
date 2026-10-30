/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0025E0E0(s32);
extern void func_001453E0(s32);
extern void func_00145380(s32);
M2C_UNK func_0014D780(void *, s32);                 /* extern */
M2C_UNK func_00151080(void *, s32);                 /* extern */
M2C_UNK func_0025E080(M2C_UNK);                     /* extern */
extern char D_0058D200[];

void func_0025F180(void) {
    M2C_UNK *var_s0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_s1;

    var_s0 = ((void *)D_0058D200);
    if (func_0025E0E0(0xA) != 0) {
        var_s1 = 0;
        do {
            if (M2C_FIELD(var_s0, u8 *, 0x14) != 0) {
                temp_a1 = M2C_FIELD(var_s0, s32 *, 8);
                if (temp_a1 != 0) {
                    func_00151080(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 8), temp_a1);
                    func_001453E0(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 8), s32 *, 0xC));
                }
                temp_a1_2 = M2C_FIELD(var_s0, s32 *, 0xC);
                if (temp_a1_2 != 0) {
                    func_0014D780(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 8), temp_a1_2);
                    func_00145380(M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 8), s32 *, 0xC));
                }
                M2C_FIELD(var_s0, u8 *, 0x14) = 0U;
            }
            var_s1 += 1;
            var_s0 += 0x18;
        } while (var_s1 < 5);
        func_0025E080(0xA);
    }
}
