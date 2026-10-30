/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern s32 D_003E9780;
extern char D_003FAAD0[];
extern void *D_003FAE50;
extern void **D_003FAE54;

void func_00120F70(s32 arg0, s8 arg1, s8 arg2, s32 arg3) {
    M2C_UNK *var_a0;
    s32 var_a1;
    s32 var_v1;
    s8 var_s2;
    void **var_a2;
    void **var_a3;
    void *var_s0;

    var_s2 = arg1;
    if (arg0 != 0) {
        if ((arg3 & 0xFF) == 1) {
            var_v1 = var_s2 & 0xFF;
            if (var_v1 < 0x2D) {
                if (var_v1 < 3) {
                    var_v1 = 3;
                }
            } else {
                var_v1 = 0x2C;
            }
            var_s2 = var_v1 & 0xFF;
        }
        var_a1 = 0;
        var_a0 = ((void *)D_003FAAD0);
loop_10:
        if (M2C_FIELD(var_a0, s32 *, 8) != 0) {
            var_a1 += 1;
            var_a0 += 0x10;
            if (var_a1 >= 0x38) {
                var_s0 = NULL;
            } else {
                goto loop_10;
            }
        } else {
            var_s0 = ((void *)D_003FAAD0) + (var_a1 * 0x10);
            func_001C48E8(var_s0, 0, 0x10);
        }
        M2C_FIELD(var_s0, s32 *, 8) = arg0;
        M2C_FIELD(var_s0, s8 *, 0xC) = var_s2;
        M2C_FIELD(var_s0, s8 *, 0xD) = arg2;
        var_a2 = &D_003FAE50;
        var_a3 = D_003FAE54;
loop_17:
        if ((var_s2 & 0xFF) >= (s32) M2C_FIELD(var_a3, u8 *, 0xC)) {
            var_a2 = var_a3;
            var_a3 = M2C_FIELD(var_a3, void ***, 4);
            if (var_a3 != &D_003FAE50) {
                goto loop_17;
            }
        }
        *var_a3 = var_s0;
        M2C_FIELD(var_s0, void ***, 4) = var_a3;
        M2C_FIELD(var_a2, void **, 4) = var_s0;
        M2C_FIELD(var_s0, void ***, 0) = var_a2;
        D_003E9780 += 1;
    }
}
