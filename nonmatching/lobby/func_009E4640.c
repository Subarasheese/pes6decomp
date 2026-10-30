/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern void func_001DF4F0(void *, s8);
extern s32 func_001F08B0(s32);
M2C_UNK sprintf(s8 *, s32, s32, M2C_UNK);     /* extern */
M2C_UNK func_009E47D0(u8);                          /* extern */
extern char D_00A03220[];
extern void *D_00A7DF08;

u8 func_009E4640(s8 arg0) {
    s8 sp70;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_s5;
    s8 *var_a1;
    s8 var_a0;
    s8 var_s4;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;

    var_a0 = arg0;
    if (D_00A7DF08 != NULL) {
        if ((var_a0 & 0xFF) >= 2) {
            var_a0 = 1;
        }
        M2C_FIELD(D_00A7DF08, s8 *, 0x11D) = var_a0;
        var_s5 = 0;
        temp_v1 = var_a0 & 0xFF;
        temp_s3 = temp_v1 + 1;
        do {
            if ((var_s5 >= (temp_v1 * 9)) && (var_s5 < (temp_s3 * 9))) {
                var_s4 = 1;
            } else {
                var_s4 = 0;
            }
            temp_s0 = var_s5 * 4;
            temp_v0 = M2C_FIELD((D_00A7DF08 + temp_s0), void **, 0x1C);
            if (temp_v0 != NULL) {
                func_001DF4F0(M2C_FIELD(temp_v0, void **, 0xC), var_s4);
            }
            temp_v0_2 = M2C_FIELD((D_00A7DF08 + temp_s0), void **, 0x4C);
            if (temp_v0_2 != NULL) {
                func_001DF4F0(M2C_FIELD(temp_v0_2, void **, 0xC), var_s4);
            }
            var_s5 += 1;
        } while (var_s5 < 0xC);
        temp_s0_2 = M2C_FIELD(D_00A7DF08, void **, 0x7C);
        sprintf(&sp70, func_001F08B0(0x670028), temp_s3, 2);
        var_a1 = &sp70;
        if (temp_s0_2 != NULL) {
            if ((var_a1 == NULL) || (sp70 == 0)) {
                var_a1 = ((void *)D_00A03220);
            }
            func_001DF820(M2C_FIELD(temp_s0_2, void **, 0xC), (s32) var_a1);
        }
        func_009E47D0(M2C_FIELD(D_00A7DF08, u8 *, 0x11C));
        return M2C_FIELD(D_00A7DF08, u8 *, 0x11C);
    }
    return 0U;
}
