/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
M2C_UNK func_0020E310(M2C_UNK, s8 *);               /* extern */
extern void *D_00A7DD58;

void func_009C3330(void) {
    s8 sp60;
    s8 sp61;
    s8 sp62;
    s8 sp63;
    s8 sp64;
    s8 sp68;
    s8 sp6C;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s8 *var_s4;
    void *temp_a0;
    void *temp_v1;

    func_0020E310(3, &sp6C);
    func_0020E310(2, &sp68);
    func_0020E310(4, &sp64);
    var_s3 = 0;
    sp60 = 0xFF;
    sp61 = 0xFF;
    sp62 = 0xFF;
    sp63 = 0xFF;
    do {
        temp_a0 = D_00A7DD58 + (var_s3 * 4);
        var_s1 = M2C_FIELD(temp_a0, s32 *, 0x64);
        if (var_s3 == M2C_FIELD(D_00A7DD58, u8 *, 0x56)) {
            var_s4 = &sp6C;
            var_s1 = 0;
        } else {
            var_s4 = &sp68;
        }
        if (M2C_FIELD(temp_a0, s32 *, 0x58) == 0) {
            var_s4 = &sp64;
            var_s1 = 0;
        }
        var_s2 = 0;
loop_7:
        temp_v1 = M2C_FIELD(((var_s3 * 8) + D_00A7DD58 + (var_s2 * 4)), void **, 4);
        if (temp_v1 != NULL) {
            func_001DF460(M2C_FIELD(temp_v1, void **, 0xC), var_s4);
        }
        if (var_s1 != 0) {
            var_s4 = &sp60;
        }
        var_s2 += 1;
        if (var_s2 < 2) {
            goto loop_7;
        }
        var_s3 += 1;
    } while (var_s3 < 3);
}
