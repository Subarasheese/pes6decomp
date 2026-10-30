/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern s32 func_001E9090(s32, s32);
extern s32 func_001E6C50(void *);
extern void func_001EEDA0(void *, u8);
s32 func_00152130(M2C_UNK, M2C_UNK);                /* extern */
s32 func_001BF880(void *, s32);                     /* extern */
void *func_001E6E10(s32);                           /* extern */

s32 func_001BF5E0(void *arg0, s32 *arg1) {
    s32 temp_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    var_s2 = *arg1;
    var_s1 = 0;
    switch (var_s2) {                               /* irregular */
    case 0:
        var_s0 = M2C_FIELD(arg0, s32 *, 0);
        if ((var_s0 != 1) && (func_001E6E10(var_s0) == NULL)) {
            var_s0 = 1;
        }
        if ((var_s0 != 1) && (M2C_FIELD(arg0, s32 *, 0x10) == 0)) {
            temp_v0 = func_001E6E10(0x752F);
            if (temp_v0 != NULL) {
                func_001E6C50(temp_v0);
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
            }
            if (func_001E9090(var_s0, 0x752F) == 0) {
                var_s0 = 1;
            } else {
                var_s0 = 0x752F;
            }
        }
        M2C_FIELD(arg0, s32 *, 4) = var_s0;
        var_s2 += 1;
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_a1 != 1) {
                if (func_001BF880(arg0 + 0x64, temp_a1) != 0) {
                    func_001D7D60(M2C_FIELD(arg0, void **, 0x3C), 0);
                    var_s2 += 1;
                }
            } else {
                goto block_22;
            }
        } else {
block_22:
            if (func_00152130(1, 0x2A) != 0) {
                var_s1 = 1;
            }
        }
        break;
    case 2:
        var_v1 = M2C_FIELD(arg0, s32 *, 0x6C);
        var_s0_2 = 0;
        if (var_v1 == 0) {
            var_v1 = 0x20;
        }
        var_v0 = M2C_FIELD(arg0, s32 *, 0x70) + var_v1;
        if (var_v0 >= 0x100) {
            var_v0 = 0xFF;
            var_s0_2 = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x70) = var_v0;
        func_001EEDA0(M2C_FIELD(arg0, void **, 0x68), var_v0 & 0xFF);
        if (var_s0_2 != 0) {
            var_s1 = 1;
            M2C_FIELD(arg0, s32 *, 0x70) = 0xFF;
        }
        break;
    }
    *arg1 = var_s2;
    return var_s1;
}
